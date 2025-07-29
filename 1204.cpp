#include <iostream>
#include <climits>

using namespace std;

int main(int argc, char** argv) {
	int test_case;
	int T;
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case) {
        int n, x;
        int arr[101] = {0,};

        cin >> n;

        for (int i = 0; i < 1000; i++) {
            cin >> x;
            arr[x]++;
        }

        int res = 0;
        for (int i = 1; i <= 100; i++) {
            if (arr[i] >= arr[res]) res = i;
        }
        cout << "#" << n << " " << res << "\n";
	}

	return 0;
}