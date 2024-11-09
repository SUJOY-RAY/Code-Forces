#include <iostream>
#include <vector>

using namespace std;

void equilibrium(int **arr, int n) {
    long long colSum[3] = {0, 0, 0}; 
    for (int i = 0; i < n; i++) {
        colSum[0] += arr[i][0];
        colSum[1] += arr[i][1];
        colSum[2] += arr[i][2];
    }

    if (colSum[0] == 0 && colSum[1] == 0 && colSum[2] == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}




int main() {
    int n;
    cin >> n;

    int **arr = new int*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[3];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    equilibrium(arr, n);
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
