#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int x, y;
    cin >> x >> y;
    while (!(x == 0 && y == 0)) {
        cout << x + y << "\n";
        cin >> x >> y;
    }
}
