#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int n, cnt, sum;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cnt = 0;
        sum = 0;
        cin >> s;
        for (int j = 0; j < s.size(); j++) {
            cnt = s[j] == 'O' ? cnt + 1 : 0;
            sum += cnt;
        }
        cout << sum << "\n";
    }
}
