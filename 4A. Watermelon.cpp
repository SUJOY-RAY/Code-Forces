#include <iostream>
using namespace std;

string can_divide(int w) {
    if (w % 2 == 0 && w > 2) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    int w;
    cin >> w;
    cout << can_divide(w) << endl;
    return 0;
}
