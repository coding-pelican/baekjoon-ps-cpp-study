#include <bits/stdc++.h>
using namespace std;
int main(void) {
    char ch;
    string s;
    cin >> s;
    for (char i = 0; i < 26; i++) {
        ch = i + 97;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == ch) {
                cout << j << " ";
                break;
            } else {
                if (j == s.size() - 1) {
                    cout << -1 << " ";
                }
            }
        }
    }
}
