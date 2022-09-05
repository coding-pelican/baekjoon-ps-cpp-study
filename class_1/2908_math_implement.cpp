#include <bits/stdc++.h>
using namespace std;
int main(void) {
    string a, b;
    int x, y;
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    x = stoi(a);
    y = stoi(b);
    cout << (x > y ? x : y);
}
