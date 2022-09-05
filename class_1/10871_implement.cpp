#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int n, m, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> m;
        if (m < x) cout << m << " ";
    }
}
