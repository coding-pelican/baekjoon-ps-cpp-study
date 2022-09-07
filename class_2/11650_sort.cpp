#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;
typedef vector<P> vp;
int main(void) {
    int N, x, y;
    cin >> N;
    vp point(N);
    for (auto &it : point) {
        cin >> x >> y;
        it = pair<int, int>(x, y);
    }
    sort(point.begin(), point.end(), [&](P a, P b) { return a.first < b.first ? true : a.first == b.first ? a.second < b.second ? true : false : false; });
    for (auto &it : point) {
        cout << it.first << ' ' << it.second << '\n';
    }
}
