#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int cnt[10] = {
        0,
    };
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    for (int i = a * b * c; i > 0; i /= 10) {
        ++cnt[i % 10];
    }
    for (int i = 0; i < 10; i++) {
        cout << cnt[i] << "\n";
    }
}
