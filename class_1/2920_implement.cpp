#include <bits/stdc++.h>
using namespace std;
int main(void) {
    vector<int> sound(8);
    int ascending = 0, descending = 0;
    for (int i = 0; i < 8; i++) cin >> sound[i];
    for (int i = 0; i < 4; i++) {
        if (sound[i] == i + 1 && sound[i] + sound[7 - i] == 9)
            ascending++;
        else if (sound[7 - i] == i + 1 && sound[i] + sound[7 - i] == 9)
            descending++;
    }
    cout << (ascending == 4 ? "ascending" : descending == 4 ? "descending" : "mixed") << '\n';
}
