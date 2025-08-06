#include <iostream>
#include <vector>

using namespace std;

int main (int argc, char** argv) {
	int test_case;
	int T;
	cin >> T;

	for(test_case = 1; test_case <= T; ++test_case) {
        int n;
        cin >> n;

        vector<vector<int>> colors(n, vector<int>(5));
        vector<vector<int>> arr(10, vector<int>(10, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 5; j++) {
                cin >> colors[i][j];
            }
        }

        for (auto c : colors) {
            for (int i = c[0]; i < c[2] + 1; i++) {
                for (int j = c[1]; j < c[3] + 1; j++) {
                    arr[i][j] += c[4];
                }
            }
        }

        int cnt = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (arr[i][j] == 3) cnt++;
            }
        }
        cout << "#" << test_case << " " << cnt << "\n";
	}
	return 0;
}


