#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s;
    bool isPalindrome;
    while (cin >> s) {
        if (s == "0") break;
        int l = s.length();
        isPalindrome = true;
        for (int i = 0; i < l / 2 + 1; i++) {
            if (s[i] == s[l - (i + 1)]) {
                continue;
            } else {
                isPalindrome = false;
                break;
            }
        }
        cout << (isPalindrome ? "yes" : "no") << '\n';
    }
    return 0;
}
