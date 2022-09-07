#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> target;
typedef pair<target, string> user;
typedef vector<user> member;
int main(void) {
    int N;
    cin >> N;
    member m(N);
    for (int i = 0; i < N; i++) {
        user u;
        u.first.second = i;
        cin >> u.first.first >> u.second;
        m[i] = u;
    };
    sort(m.begin(), m.end(), [&](user a, user b) {
            if ((a.first.first < b.first.first)) {
                return true;
            } else if ((a.first.first > b.first.first)) {
                return false;
            } else {
                return a.first.second < b.first.second;
            }
        });
    for (auto &it : m) cout << it.first.first << ' ' << it.second << '\n';
}
