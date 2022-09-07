#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 1000;
bool isPrime[MAX_N + 1];
void eratosthenes() {
    memset(isPrime, 1, sizeof(isPrime));
    isPrime[0] = isPrime[1] = false;
    int sqrtn = int(sqrt(MAX_N));
    for (int i = 2; i < sqrtn + 1; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < MAX_N + 1; j += i) {
                isPrime[j] = false;
            }
        }
    }
}
int main(void) {
    eratosthenes();
    int N, n, cnt = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> n;
        if (isPrime[n]) cnt++;
    }
    cout << cnt << '\n';
}
