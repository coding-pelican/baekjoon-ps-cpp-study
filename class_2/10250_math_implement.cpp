#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int h, w, n, l;
    cin >> l;
    for (int i = 0; i < l; i++) {
        cin >> h >> w >> n;
        if (n % h == 0)
            cout << (h * 100) + (n / h) << '\n';
        else
            cout << (n % h * 100) + (n / h + 1) << '\n';
    }
}
