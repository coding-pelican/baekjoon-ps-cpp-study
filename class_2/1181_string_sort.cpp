#include <bits/stdc++.h>
using namespace std;
typedef vector<string> vs;
int main(void) {
    int N;
    cin >> N;
    vs word(N);
    for (auto &it : word) cin >> it;
    sort(word.begin(), word.end(), [](string a, string b) {
        if ((a.length() < b.length())) {
            return true;
        } else if ((a.length() > b.length())) {
            return false;
        } else {
            return a < b;
        }
    });
    word.erase(unique(word.begin(), word.end()), word.end());
    for (auto &it : word) {
        cout << it << '\n';
    }
}
