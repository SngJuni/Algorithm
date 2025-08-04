#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main (int argc, char** argv) {
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case) {
        int n, m;
        cin >> n >> m;

        vector<int> arr(n, 0);
        for (int i = 0; i < n; i++) cin >> arr[i];

        int max_res = INT_MIN;
        int min_res = INT_MAX;
        for (int i = 0; i < n - m + 1; i++) {
            int temp = 0;
            for (int j = 0; j < m; j++) {
                temp += arr[i + j];
            }
            if (temp > max_res) max_res = temp;
            if (temp < min_res) min_res = temp;
        }
        cout << "#" << test_case << " " << max_res - min_res << "\n";

	}

	return 0;
}