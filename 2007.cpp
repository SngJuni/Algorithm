#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main (int argc, char** argv) {
	int test_case;
	int T;

	cin >> T;

	for(test_case = 1; test_case <= T; ++test_case) {
        string s; 
        cin >> s;

        for (int i = 1; i <= 10; ++i) {
            string pattern = s.substr(0, i);
            string repeated = "";

            while (repeated.length() < s.length()) {
                repeated += pattern;
            }

            if (repeated.substr(0, s.length()) == s) {
                cout << "#" << test_case << " " << i << '\n';
                break;
            }
        }
	}



	return 0;
}