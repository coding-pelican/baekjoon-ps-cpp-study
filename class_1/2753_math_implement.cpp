#include <bits/stdc++.h>
using namespace std;
int isLeapYear(int year) {
	return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? 1 : 0;
}
int main(void) {
	int year;
	cin >> year;
	cout << isLeapYear(year);
}
