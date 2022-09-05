#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int n, x, min = 987654321, max = -987654321;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        min = x < min ? x : min;
        max = x > max ? x : max;
    }
    cout << min << " " << max << "\n";
}
