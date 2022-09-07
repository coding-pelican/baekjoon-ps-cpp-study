#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int N, n;
    string cmd = "";
    deque<int> dq;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> cmd;
        if (cmd == "push_front") {
            cin >> n;
            dq.push_front(n);
        } else if (cmd == "push_back") {
            cin >> n;
            dq.push_back(n);
        } else if (cmd == "size") {
            cout << dq.size() << '\n';
        } else if (cmd == "empty") {
            cout << (dq.empty() ? 1 : 0) << '\n';
        } else {
            if (!dq.empty()) {
                if (cmd == "front" || cmd == "pop_front") {
                    cout << dq.front() << '\n';
                    if (cmd == "pop_front") dq.pop_front();
                } else {
                    cout << dq.back() << '\n';
                    if (cmd == "pop_back") dq.pop_back();
                }
            } else {
                cout << -1 << '\n';
            }
        }
    }
}
