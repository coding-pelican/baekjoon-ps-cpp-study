#include <bits/stdc++.h>
using namespace std;

void PrintPermutation(vector<int> v) {
    cout << '<';
    for (int i = 0; i < v.size() - 1; i++) {
        cout << v[i] << ", ";
    }
    cout << v.back() << '>';
}

int main(void) {
    int N, K;
    queue<int> q;
    vector<int> result;
    cin >> N >> K;
    for (int i = 1; i <= N; i++) q.push(i);
    while (!q.empty()) {
        for (int i = 1; i < K; i++) {
            q.push(q.front());
            q.pop();
        }
        result.push_back(q.front());
        q.pop();
    }
    PrintPermutation(result);
    return 0;
}
