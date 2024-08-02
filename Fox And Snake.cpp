#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    char arr[n][m];

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; j++) {
                arr[i][j] = '#';
            }
        } else {
            for (int j = 0; j < m; j++) {
                arr[i][j] = '.';
            }
            if ((i / 2) % 2 == 0) {
                arr[i][m - 1] = '#';
            } else {
                arr[i][0] = '#';
            }
        }
    }

    // Print the pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}

