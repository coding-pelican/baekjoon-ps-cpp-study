#include <bits/stdc++.h>
using namespace std;
int main() {
    int cnt = 0;
    string s;
    getline(cin, s);
    if (s.empty()) {
        cout << cnt;
        return 0;
    }
    cnt = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') cnt++;
    }
    if (s[0] == ' ') cnt--;
    if (s[s.length() - 1] == ' ') cnt--;

    cout << cnt;
}
