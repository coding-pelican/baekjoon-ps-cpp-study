#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int lcd(int a, int b) { return a * b / gcd(a, b); }
int main(void) {
    int n, m;
    cin >> n >> m;
    cout << gcd(n, m) << '\n' << lcd(n, m) << '\n';
}
