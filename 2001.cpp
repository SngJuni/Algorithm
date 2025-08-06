#include <iostream>
#include <vector>

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

        for (int i = 0; i < n - m + 1; i++) {
            for (int j = 0; j < n - m + 1; j++) {
                int temp = 0;
                
                for (int k = 0; k < m; k++) {
                    for (int l = 0; l < m; l++) {
                        temp += arr[i + k][j + l];
                    }
                }

                if (res < temp) {
                    res = temp;
                }
            }
        }
        cout << "#" << test_case << " " << res << "\n";
	}

	return 0;
}