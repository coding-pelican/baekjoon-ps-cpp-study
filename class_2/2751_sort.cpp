#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
int N;
void merge(vi &v, int m, int middle, int n) {
    vi sorted;
    int i = m;
    int j = middle + 1;
    // 작은 순서대로 배열에 삽입
    while (i <= middle && j <= n) {
        if (v[i] <= v[j]) {
            sorted.push_back(v[i]);
            i++;
        } else {
            sorted.push_back(v[j]);
            j++;
        }
    }
    // 남은 데이터 삽입
    if (i > middle) {
        for (int t = j; t <= n; t++) sorted.push_back(v[t]);
    } else {
        for (int t = i; t <= n; t++) sorted.push_back(v[t]);
    }
    // 정렬된 배열 삽입
    for (int t = m; t <= n; t++) v[t] = sorted[t - m];
}
void mergeSort(vi &v, int m, int n) {
    if (m < n) {
        int middle = (m + n) / 2;
        mergeSort(v, m, middle);
        mergeSort(v, middle + 1, n);
        merge(v, m, middle, n);
    }
}
int main(void) {
    cin >> N;
    vi v(N);
    for (auto &it : v) cin >> it;
    mergeSort(v, 0, N - 1);
    for (auto &it : v) cout << it << ' ';
    cout << '\n';
}
