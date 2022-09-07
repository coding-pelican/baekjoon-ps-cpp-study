#include <bits/stdc++.h>
using namespace std;
int main(void) {
    long long a, b, c;
    while (cin >> a >> b >> c) {
        if (a == 0 && b == 0 && c == 0) break;
        if (a > b) swap(a, b);
        if (b > c) swap(b, c);
        cout << (a * a + b * b == c * c ? "right" : "wrong") << '\n';
    }
}
