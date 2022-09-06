#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef vector<string> vs;
int main(void) {
    int N, M, min_cnt = 987654321, w_based_cnt = 0, b_based_cnt = 0;
    cin >> N >> M;
    vs board(N);
    for (int i = 0; i < N; i++) cin >> board[i];
    for (int i = 0; i + 8 <= N; i++) {
        for (int j = 0; j + 8 <= M; j++) {
            w_based_cnt = 0;
            b_based_cnt = 0;
            for (int k = i; k < i + 8; k++) {
                for (int l = j; l < j + 8; l++) {
                    if ((k + l) % 2 == 0) {
                        board[k][l] != 'W' ? w_based_cnt++ : b_based_cnt++;
                    } else {
                        board[k][l] == 'W' ? w_based_cnt++ : b_based_cnt++;
                    }
                }
            }
            min_cnt = min(min_cnt, min(w_based_cnt, b_based_cnt));
        }
    }
    cout << min_cnt << '\n';
}
