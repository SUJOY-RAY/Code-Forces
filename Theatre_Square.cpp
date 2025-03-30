#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    long long n, m, a;
    cin >> n >> m >> a;
    long long n1 = (n + a - 1) / a;
    long long n2 = (m + a - 1) / a;

    cout << n1 * n2 << endl;
    return 0;
}
