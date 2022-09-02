#include <bits/stdc++.h>
using namespace std;
int main(void) {
   int n, order = 0, max = 0;
   for (int i = 0; i < 9; i++) {
       cin >> n;
       if (n > max) {
           max = n;
           order = i + 1;
       }
   }
   cout << max << "\n" << order;
   return 0;
}
