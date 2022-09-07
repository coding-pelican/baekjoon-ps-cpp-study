#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, M, x;
    vector<int> v;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> x;
        auto lb = lower_bound(v.begin(), v.end(), x);
        auto ub = upper_bound(v.begin(), v.end(), x);
        cout << distance(lb, ub) << ' ';
    }
    return 0;
}
