#include <bits/stdc++.h>
using namespace std;
int main(void) {
    string s;
    set<char> alphabat_set;
    vector<char> alphabat_vector;
    vector<int> count;
    int cnt, max_idx, max_size = 0;
    bool is_duplicated = false;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        s[i] = toupper(s[i]);
        alphabat_set.insert(s[i]);
    }
    for (auto x : alphabat_set) {
        cnt = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == x) {
                cnt++;
            }
        }
        max_size = cnt > max_size ? cnt : max_size;
        count.push_back(cnt);
    }
    cnt = 0;
    for (int i = 0; i < count.size(); i++) {
        if (count[i] == max_size) {
            ++cnt;
            if (cnt > 1) {
                is_duplicated = true;
                break;
            }
            max_idx = i;
        }
    }
    if (is_duplicated) {
        cout << "?\n";
    } else {
        copy(alphabat_set.begin(), alphabat_set.end(), back_inserter(alphabat_vector));
        cout << alphabat_vector[max_idx] << "\n";
    }
}
