#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int t, r;
    string s, p;
    cin >> t;
    for (int i = 0; i < t; i++) {
        p.clear();
        cin >> r >> s;
        for (int j = 0; j < s.size(); j++) {
            for (int k = 0; k < r; k++) {
                p.push_back(s[j]);
            }
        }
        cout << p << '\n';
    }
}
