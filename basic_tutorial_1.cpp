// ----200 - 자료구조 1----
// 스택 10828
/*
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
*/
// 단어 뒤집기 9093
/*
#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    string sentence;
    stack<char> st;
    cin >> T;
    cin.ignore();
    for (int i = 0; i < T; i++) {
        getline(cin, sentence);
        sentence += ' ';
        for (int j = 0; j < sentence.length(); j++) {
            if (sentence[j] == ' ') {
                while (!st.empty()) {
                    cout << st.top();
                    st.pop();
                }
                cout << ' ';
            } else
                st.push(sentence[j]);
        }
        cout << '\n';
    }
}
*/
// 괄호 9012
/*
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
*/
// 스택 수열 1874
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int N, n, idx = 0;
    bool isPossible = true;
    stack<int> st;
    vector<char> ret;
    cin >> N;
    st.push(idx++);
    for (int i = 0; i < N; i++) {
        cin >> n;
        while (st.top() < n) {
            st.push(idx++);
            ret.push_back('+');
        }
        if (st.top() == n) {
            st.pop();
            ret.push_back('-');
        } else {
            isPossible = false;
        }
    }
    if (isPossible) {
        for (auto &it : ret) {
            cout << it << '\n';
        }
    } else {
        cout << "NO" << '\n';
    }
}
*/
// 에디터 1406
/*
#include <bits/stdc++.h>
using namespace std;
int main() {
    int M;
    string s = "";
    cin >> s;
    list<char> editor(s.begin(), s.end());
    auto cursor = editor.end();
    cin >> M;
    for (int i = 0; i < M; i++) {
        char cmd, ch;
        cin >> cmd;
        if (cmd == 'L') {
            if (cursor != editor.begin()) cursor--;
        } else if (cmd == 'D') {
            if (cursor != editor.end()) cursor++;
        } else if (cmd == 'B') {
            if (cursor != editor.begin()) {
                cursor--;
                cursor = editor.erase(cursor);
            }
        } else if (cmd == 'P') {
            cin >> ch;
            editor.insert(cursor, ch);
        }
    }
    for (auto &it : editor) cout << it;
}
*/
// 큐 10845
/*
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
                if (cmd == "back") {
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
*/
// 요세푸스 문제 1158
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int N, K;
    queue<int> q;
    cin >> N >> K;
    for (int i = 1; i < N + 1; i++) q.push(i);
    cout << '<';
    while (!q.empty()) {
        for (int i = 0; i < K - 1; i++) {
            q.push(q.front());
            q.pop();
        }
        if (q.size() == 1) {
            cout << q.front() << '>' << '\n';
            q.pop();
        } else {
            cout << q.front() << ", ";
            q.pop();
        }
    }
}
*/
// 덱 10866
/*
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
*/
