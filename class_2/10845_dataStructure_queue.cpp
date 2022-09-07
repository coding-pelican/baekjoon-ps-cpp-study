#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int N, n;
    string cmd;
    queue<int> q;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> cmd;
        if (cmd == "push") {
            cin >> n;
            q.push(n);
        } else if (cmd == "size") {
            cout << q.size() << '\n';
        } else if (cmd == "empty") {
            cout << (q.empty() ? 1 : 0) << '\n';
        } else {
            if (!q.empty()) {
                if (cmd =="back") {
                    cout << q.back() << '\n';
                } else {
                    cout << q.front() << '\n';
                    if (cmd == "pop") q.pop();
                }
            } else {
                cout << -1 << '\n';
            }
        }
    }
}
