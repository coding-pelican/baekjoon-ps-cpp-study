#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;

int ComputeXChooseY(int x, int y, vvi* x_choose_y_ptr) {
    if (y == 0 || x == y) {
        return 1;
    }
    vvi& x_choose_y = *x_choose_y_ptr;
    if (x_choose_y[x][y] == 0) {
        int without_y = ComputeXChooseY(x - 1, y, x_choose_y_ptr);
        int with_y = ComputeXChooseY(x - 1, y - 1, x_choose_y_ptr);
        x_choose_y[x][y] = without_y + with_y;
    }
    return x_choose_y[x][y];
}

int ComputeBinomialCoefficient(int n, int k) { 
    return ComputeXChooseY(
        n, k, 
        make_unique<vvi>(n + 1, vi(k + 1, 0)).get()); 
}

int main(void) {
    int N, K;
    cin >> N >> K;
    cout << ComputeBinomialCoefficient(N, K) << '\n';
    return 0;
}
