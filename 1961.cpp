#include<iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
		int n;
        cin >> n;
        
        vector<vector<int>> arr(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
        	for (int j = 0; j < n; j++) {
            	cin >> arr[i][j];
            }
        }
        vector<vector<int>> arr90(n, vector<int>(n, 0));
        vector<vector<int>> arr180(n, vector<int>(n, 0));
        vector<vector<int>> arr270(n, vector<int>(n, 0));

        for (int i = 0; i < n; i++) {
        	for (int j = 0; j < n; j++) {
            	arr90[i][j] = arr[n - j - 1][i];
            }
        }

        for (int i = 0; i < n; i++) {
        	for (int j = 0; j < n; j++) {
            	arr180[i][j] = arr[n - i - 1][n - j - 1];
            }
        }

        for (int i = 0; i < n; i++) {
        	for (int j = 0; j < n; j++) {
            	arr270[i][j] = arr[j][n - i - 1];
            }
        }

        cout << "#" << test_case << "\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << arr90[i][j];
            }
            cout << " ";
            for (int j = 0; j < n; j++) {
                cout << arr180[i][j];
            }
            cout << " ";
            for (int j = 0; j < n; j++) {
                cout << arr270[i][j];
            }
            cout << "\n";
        }
	}
	return 0;
}