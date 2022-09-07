#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int card[100] = {0};
int main(void) {
    int n, m, sum = 0, result = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> card[i];
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                sum = card[i] + card[j] + card[k];
                if (sum <= m) result = max(sum, result);
            }
        }
    }
    cout << result << '\n';
}
