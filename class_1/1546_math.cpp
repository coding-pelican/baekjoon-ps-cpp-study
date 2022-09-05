#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int size, max = 0;
    int* subject;
    double avg = 0;
    cin >> size;
    subject = (int*)malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++) {
        cin >> subject[i];
        max = subject[i] > max ? subject[i] : max;
    }
    for (int i = 0; i < size; i++) {
        avg += (double)subject[i] / (double)max * 100.0;
    }
    avg /= size;
    cout << avg;
    free(subject);
}
