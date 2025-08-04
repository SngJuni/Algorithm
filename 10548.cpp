#include <iostream>
#include <vector>
#include <climits>

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
        
        int res = INT_MIN;

        for (int i = 0; i < n - 1; i++) {
            int cnt = 0;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] > arr[j]) cnt++;
            }
            if (cnt >= res) res = cnt;
        }

        cout << "#" << test_case << " " << res << '\n';
	}


	return 0;
}