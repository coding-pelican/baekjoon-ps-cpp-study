#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int N, n;
    string command;
    stack<int> s;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> command;
        if (command == "push") {
            cin >> n;
            s.push(n);
        } else if (command == "size") {
            cout << s.size() << '\n';
        } else if (command == "empty") {
            cout << (s.empty() ? 1 : 0) << '\n';
        }
        if (command == "top" || command == "pop") {
            if (!s.empty()) {
                cout << s.top() << '\n';
                if (command == "pop") {
                    s.pop();
                }
            } else {
                cout << -1 << '\n';
            }
        }
    }
}
