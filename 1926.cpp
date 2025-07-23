#include <iostream>
#include <string>

using namespace std;

int main (int argc, char** argv) {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        int cnt = 0;
        for (int j = 0; j < str.size(); j++) {
            if (str[j] == '3') cnt++;
            else if (str[j] == '6') cnt++;
            else if (str[j] == '9') cnt++;
        }
        if (cnt) {
            for (int k = 0; k < cnt; k++) cout << "-";
            cout << " ";
        }
        else cout << i << " ";
    }

	return 0;
}