#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

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
                int sum_x = arr[i][j];
                for (int k = 1; k < m; k++) {
                    if (i - k >= 0) sum_plus += arr[i - k][j];
                    if (i + k < n)  sum_plus += arr[i + k][j];
                    if (j - k >= 0) sum_plus += arr[i][j - k];
                    if (j + k < n)  sum_plus += arr[i][j + k];

                    if (i - k >= 0 && j - k >= 0) sum_x += arr[i - k][j - k];
                    if (i + k < n  && j - k >= 0) sum_x += arr[i + k][j - k];
                    if (i - k >= 0 && j + k < n)  sum_x += arr[i - k][j + k];
                    if (i + k < n  && j + k < n)  sum_x += arr[i + k][j + k];
                }
                int max_sum = max(sum_plus, sum_x);
                if (max_sum >= res) res = max_sum;
            }
        }
        cout << "#" << test_case << " " << res << "\n";
	}

	return 0;
}