#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, M, x;
    set<int> s;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> x;
        s.insert(x);
    }
    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> x;
        if (s.find(x) == s.end()) {
            cout << 0 << '\n';
        } else {
            cout << 1 << '\n';
        }
    }
    return 0;
}
