#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int plus_dx[4] = {0, 0, -1, 1};
int plus_dy[4] = {-1, 1, 0, 0};
int x_dx[4] = {1, 1, -1, -1};
int x_dy[4] = {1, -1, 1, -1};

int main (int argc, char** argv) {
	int test_case;
	int T;

	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case) {
        int n, m, res = 0;
        cin >> n >> m;

        vector<vector<int>> arr(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> arr[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int sum_plus = arr[i][j];
                for (int k = 0; k < 4; k++) {
                    for (int l = 1; l < m; l++) {
                        int ni = i + plus_dx[k] * l;
                        int nj = j + plus_dy[k] * l;
                        if (ni >= 0 && ni < n && nj >= 0 && nj < n) sum_plus += arr[ni][nj];
                    }
                }

                int sum_x = arr[i][j];
                for (int k = 0; k < 4; k++) {
                    for (int l = 1; l < m; l++) {
                        int ni = i + x_dx[k] * l;
                        int nj = j + x_dy[k] * l;
                        if (ni >= 0 && ni < n && nj >= 0 && nj < n) sum_x += arr[ni][nj];
                    }
                }
                
                int max_sum = max(sum_plus, sum_x);
                if (max_sum > res) res = max_sum;
            }
        }
        cout << "#" << test_case << " " << res << "\n";
	}

	return 0;
}