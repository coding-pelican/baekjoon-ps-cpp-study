#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int x, sum = 0;
    for (int i = 0; i < 5; i++) {
        cin >> x;
        sum += (x * x);
    }
    cout << sum % 10 << '\n';
}
