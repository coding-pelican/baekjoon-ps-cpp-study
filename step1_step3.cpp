// Hello World 2557
/*
#include <bits/stdc++.h>
int main(void) {
        puts("Hello World!");
        return 0;
}
*/
// We love kriii 10718
/*
#include <bits/stdc++.h>
int main(void) {
        puts("강한친구 대한육군");
        puts("강한친구 대한육군");
}
*/
// 고양이 10171
/*
#include <bits/stdc++.h>
int main(void) {
        puts("\\    /\\");
        puts(" )  ( ')");
        puts("(  /  )");
        puts(" \\(__)|");
        return 0;
}
*/
// 개 10172
/*
#include <bits/stdc++.h>
int main(void) {
        puts("|\\_/|");
        puts("|q p|   /}");
        puts("( 0 )\"\"\"\\");
        puts("|\"^\"`    |");
        puts("||_/=\\\\__|");
        return 0;
}
*/
// A+B 1000
/*
#include <bits/stdc++.h>
int main(void) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d", a + b);
        return 0;
}
*/
// A-B 1001
/*
#include <bits/stdc++.h>
int main(void) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d", a - b);
        return 0;
}
*/
// A×B 10998
/*
#include <bits/stdc++.h>
int main(void) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d", a * b);
        return 0;
}
*/
// A/B 1008
/*
#include <bits/stdc++.h>
int main(void) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%.12lg\n", (double)a / (double)b);
}
*/
// 사칙연산 10869
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
        int a, b;
        cin >> a >> b;
        cout << a + b << "\n";
        cout << a - b << "\n";
        cout << a * b << "\n";
        cout << a / b << "\n";
        cout << a % b << "\n";
}
*/
// ??! 10926
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
        string id;
        cin >> id;
        cout << id << "??!";
}
*/
// 1998년생인 내가 태국에서는 2541년생?! 18108
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
        int buddhist_period;
        cin >> buddhist_period;
        cout << buddhist_period - 543;
}
*/
// 나머지 10430
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << (a + b) % c << "\n";
        cout << ((a % c) + (b % c)) % c << "\n";
        cout << (a * b) % c << "\n";
        cout << ((a % c) * (b % c)) % c << "\n";
}
*/
// 곱셈 2588
/*
#include <bits/stdc++.h>
using namespace std;
int getSumOfMulOfDigits(int x, int y, int r, int sum) {
        int n = x * (y % 10);
        cout << n << "\n";
        return y / 10 == 0 ? sum += n * r : getSumOfMulOfDigits(x, y / 10, r * 10, sum += n * r);
}
int main(void) {
        int x, y;
        cin >> x;
        cin >> y;
        cout << getSumOfMulOfDigits(x, y, 1, 0);
}
*/
// 두 수 비교하기 1330
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
        int a, b;
        cin >> a >> b;
        cout << (a < b ? "<" : a > b ? ">" : "==");
}
*/
// 시험 성적 9498
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
        int x;
        cin >> x;
        cout << (x > 89 ? "A" : x > 79 ? "B" : x > 69 ? "C" : x > 59 ? "D" : "F");
}
*/
// 윤년 2753
/*
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
*/
// 사분면 고르기 14681
/*
#include <bits/stdc++.h>
using namespace std;
int getQuadrantOfPoint(int x, int y) {
        return x > 0 && y > 0 ? 1 : x < 0 && y > 0 ? 2 : x < 0 && y < 0 ? 3 : 4;
}
int main(void) {
        int x, y;
        cin >> x >> y;
        cout << getQuadrantOfPoint(x, y);
}
*/
// 알람 시계 2884
/*
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
*/
// 오븐 시계 2525
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
        int h, m, delta_m;
        cin >> h >> m;
        cin >> delta_m;
        m += delta_m;
        if (m > 59) {
                h += m / 60;
                m %= 60;
                if (h > 23) {
                        h -= 24;
                }
        }
        cout << h << " " << m;
}
*/
// 주사위 세개 2480
/*
#include <bits/stdc++.h>
using namespace std;
bool compare(const int& a, const int& b) { return a < b; }
int main(void) {
    int dice_eye[3];
    int max = 0, cnt = 0;
    for (int i = 0; i < 3; i++) {
        cin >> dice_eye[i];
    }

    sort(begin(dice_eye), end(dice_eye), compare);

    for (int i = 0; i < 2; i++) {
        max = dice_eye[i] > max ? dice_eye[i] : max;
        cnt = dice_eye[i] == dice_eye[i + 1] ? cnt + 1 : cnt;
    }

    if (cnt > 1) {
        cout << 10000 + dice_eye[0] * 1000;
    } else if (cnt > 0) {
        cout << 1000 + dice_eye[1] * 100;
    } else {
        cout << dice_eye[2] * 100;
    }
}
*/
// 구구단 2739
/*
#include <bits/stdc++.h>
int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 9; i++) {
        printf("%d * %d = %d\n", n, i + 1, n * (i + 1));
    }
}
*/
// A+B - 3 10950
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        cout << a + b << "\n";
    }
}
*/
// 합 8393
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    cout << n * (n + 1) / 2;
}
*/
// 빠른 A+B 15552
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        cout << a + b << "\n";
    }
}
*/
// N 찍기 2741
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << "\n";
    }
}
*/
// 기찍 N 2742
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    for (int i = n; i > 0; i--) {
        cout << i << "\n";
    }
}
*/
// A+B - 7 11021
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        cout << "Case #" << i + 1 << ": " << a + b << "\n";
    }
}
*/
// A+B - 8 11022
/*
#include <bits/stdc++.h>
int main(void) {
    int n, a, b;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d + %d = %d\n", i + 1, a, b, a + b);
    }
}
*/
// 별 찍기 - 1 2438
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}
*/
// 별 찍기 - 2 2439
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = n - (i + 1); j > 0; j--) {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}
*/
// X보다 작은 수 10871
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int n, m, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> m;
        if (m < x) cout << m << " ";
    }
}
*/
