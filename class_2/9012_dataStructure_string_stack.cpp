#include <bits/stdc++.h>
using namespace std;
bool isVPS(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            st.push(s[i]);
        } else {
            if (!st.empty()) {
                st.pop();
            } else {
                return false;
            }
        }
    }
    return st.empty();
}
int main() {
    int T;
    string PS;
    cin >> T;
    cin.ignore();
    for (int i = 0; i < T; i++) {
        getline(cin, PS);
        if (isVPS(PS)) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
}
