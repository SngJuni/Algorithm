#include <iostream>
#include <vector>

using namespace std;

int main (int argc, char** argv) {
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case) {
        int n;
        cin >> n;
        vector<int> arr(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long res = 0;
        int max_price = 0;

        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] > max_price) max_price = arr[i];
            else res += (max_price - arr[i]);
        }

        cout << "#" << test_case << " " << res << "\n";
	}

	return 0;
}