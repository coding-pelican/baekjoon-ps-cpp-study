#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int x;
    set<int> mod;
    for (int i = 0; i < 10; i++) {
        cin >> x;
        mod.insert(x %= 42);
    }
    cout << mod.size();
}
