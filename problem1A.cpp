#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b, n;
    cin >> a >> b >> n;
    cout << (long long)ceil(a / n) * (long long)ceil(b / n) << endl;
    return 0;
}
