#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (int argc, char** argv) {
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case) {
        int n;
        cin >> n;
        vector<int> arr(n, 0);

        for (int i = 0; i < n; i++) cin >> arr[i];
        
        int res = 0;
        for (int i = 2; i < n - 2; i++) {
            if (arr[i] - arr[i - 2] > 0 && arr[i] - arr[i - 1] > 0 && arr[i] - arr[i + 1] > 0 && arr[i] - arr[i + 2] > 0) {
                int temp = min(min(arr[i] - arr[i - 2], arr[i] - arr[i - 1]), min(arr[i] - arr[i + 1], arr[i] - arr[i + 2]));
                res += temp;
            }
        }
        cout << "#" << test_case << " " << res << "\n";
	}

	return 0;
}