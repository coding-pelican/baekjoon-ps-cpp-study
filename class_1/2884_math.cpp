#include <bits/stdc++.h>
using namespace std;
int main(void) {
	int h, m;
	cin >> h >> m;
	if (m < 45) {
		m += 60;
		if (h == 0) {
			h = 24;
		}
		h--;
	}
	m -= 45;
	cout << h << " " << m;
}
