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
// A+B - 5 10952
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int x, y;
    cin >> x >> y;
    while (!(x == 0 && y == 0)) {
        cout << x + y << "\n";
        cin >> x >> y;
    }
}
*/
// A+B - 4 10951
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int x, y;
    while (!(cin >> x >> y).eof()) {
        cout << x + y << "\n";
    }
}
*/
// 더하기 사이클 1110
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int n, x, y, cnt = 0;
    cin >> n;
    x = n = n < 10 ? n * 10 : n;
    do {
        y = (x / 10) + (x % 10);
        x = (x % 10) * 10 + (y % 10);
        cnt++;
    } while (!(n == x));
    cout << cnt;
}
*/
// 최소, 최대 10818
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int n, x, min = 987654321, max = -987654321;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        min = x < min ? x : min;
        max = x > max ? x : max;
    }
    cout << min << " " << max << "\n";
}
*/
// 최댓값 2562
/*
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
}
*/
// 숫자의 개수 2577
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int cnt[10] = {
        0,
    };
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    for (int i = a * b * c; i > 0; i /= 10) {
        ++cnt[i % 10];
    }
    for (int i = 0; i < 10; i++) {
        cout << cnt[i] << "\n";
    }
}
*/
// 나머지 3052
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int x;
    set<int> mod;
    for (int i = 0; +i < 10; i++) {
        cin >> x;
        mod.insert(x %= 42);
    }
    cout << mod.size();
}
*/
// 평균 1546
/*
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
*/
// OX퀴즈 8958
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int n, cnt, sum;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cnt = 0;
        sum = 0;
        cin >> s;
        for (int j = 0; j < s.size(); j++) {
            cnt = s[j] == 'O' ? cnt + 1 : 0;
            sum += cnt;
        }
        cout << sum << "\n";
    }
}
*/
// 평균은 넘겠지 4344
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int size, n, cnt;
    double avg;
    int* student;
    cin >> size;
    cout << fixed;
    cout.precision(3);
    for (int i = 0; i < size; i++) {
        cnt = 0;
        avg = 0;
        cin >> n;
        student = (int*)malloc(sizeof(int) * n);
        for (int j = 0; j < n; j++) {
            cin >> student[j];
            avg += student[j];
        }
        avg /= n;
        for (int j = 0; j < n; j++) {
            cnt = student[j] > avg ? cnt + 1 : cnt;
        }
        cout << (double)cnt / (double)n * 100.0 << "%" << "\n";
        free(student);
    }
}
*/
// 정수 N개의 합 15596
/*
#include <vector>
long long sum(std::vector<int> &a) {
    long long ans = 0;
    for (int i : a) ans += i;
    return ans;
}
*/
// 셀프 넘버  4673
/*
#include <bits/stdc++.h>
using namespace std;
#define N 10000

bool is_generator[N] = {
    false,
};

int getGenerator(int n) {
    int number = n;
    while (n != 0) {
        number += (n % 10);
        n /= 10;
    }
    return number;
}

void setSelfNumber() {
    int number;
    for (int i = 0; i < N; i++) {
        number = getGenerator(i + 1);
        if (number - 1 < N) is_generator[number - 1] = true;
    }
}

int main() {
    setSelfNumber();
    for (int i = 0; i < N; i++)
        if (!is_generator[i]) cout << i + 1 << "\n";
}
*/
// 한수 1065
/*
#include <bits/stdc++.h>
using namespace std;
int getNumberOfHansu(int n) {
    int cnt = 99;
    if (n < 100) {
        return n;
    } else {
        for (int i = 100; i <= n; i++) {
            if ((i / 100 - (i % 100) / 10) == (i % 100) / 10 - (i % 100) % 10) cnt++;
        }
    }
    return cnt;
}
int main(void) {
    int x;
    cin >> x;
    cout << getNumberOfHansu(x);
}
*/
// 아스키코드 11654
/*
#include <bits/stdc++.h>
int main(void) { printf("%d", getchar()); }
*/
// 숫자의 합 11720
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int n, sum = 0;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++) {
        sum += s[i] - '0';
    }
    cout << sum;
}
*/
// 알파벳 찾기 10809
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    char ch;
    string s;
    cin >> s;
    for (char i = 0; i < 26; i++) {
        ch = i + 97;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == ch) {
                cout << j << " ";
                break;
            } else {
                if (j == s.size() - 1) {
                    cout << -1 << " ";
                }
            }
        }
    }
}
*/
// 문자열 반복 2675
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int t, r;
    string s, p;
    cin >> t;
    for (int i = 0; i < t; i++) {
        p.clear();
        cin >> r >> s;
        for (int j = 0; j < s.size(); j++) {
            for (int k = 0; k < r; k++) {
                p.push_back(s[j]);
            }
        }
        cout << p << '\n';
    }
}
*/
// 단어 공부 1157
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    string s;
    set<char> alphabat_set;
    vector<char> alphabat_vector;
    vector<int> count;
    int cnt, max_idx, max_size = 0;
    bool is_duplicated = false;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        s[i] = toupper(s[i]);
        alphabat_set.insert(s[i]);
    }
    for (auto x : alphabat_set) {
        cnt = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == x) {
                cnt++;
            }
        }
        max_size = cnt > max_size ? cnt : max_size;
        count.push_back(cnt);
    }
    cnt = 0;
    for (int i = 0; i < count.size(); i++) {
        if (count[i] == max_size) {
            ++cnt;
            if (cnt > 1) {
                is_duplicated = true;
                break;
            }
            max_idx = i;
        }
    }
    if (is_duplicated) {
        cout << "?\n";
    } else {
        copy(alphabat_set.begin(), alphabat_set.end(), back_inserter(alphabat_vector));
        cout << alphabat_vector[max_idx] << "\n";
    }
}
*/
// 단어의 개수 1152
/*
#include <bits/stdc++.h>
using namespace std;
int main() {
    int cnt = 0;
    string s;
    getline(cin, s);
    if (s.empty()) {
        cout << cnt;
        return 0;
    }
    cnt = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') cnt++;
    }
    if (s[0] == ' ') cnt--;
    if (s[s.length() - 1] == ' ') cnt--;

    cout << cnt;
}
*/
// 상수 2908
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    string a, b;
    int x, y;
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    x = stoi(a);
    y = stoi(b);
    cout << (x > y ? x : y);
}
*/
// 다이얼 5622
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int total = 0;
    string s;
    cin >> s;
    for (auto i : s) {
        for (auto c : "zzADGJMPTW") {
            total += i >= c;
        }
        total++;
    }
    cout << total;
}
*/
// 크로아티아 알파벳 2941
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int cnt = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        ++cnt;
        if (s[i] == 'l' || s[i] == 'n') {
            if (s[i + 1] == 'j') {
                ++i;
                continue;
            }
        }
        if (s[i] == 'z') {
            if (s[i - 1] == 'd' && s[i + 1] == '=') {
                --cnt;
                ++i;
                continue;
            }
        }
        if (s[i] == '=' || s[i] == '-') {
            --cnt;
        }
    }
    cout << cnt;
}
*/
// 그룹 단어 체커 1316
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int n, cnt, result = 0;
    string s;
    vector<char> group;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cnt = 0;
        group.clear();
        cin >> s;
        for (int i = 0; i < s.length(); i++) {
            auto it = find(group.begin(), group.end(), s[i]);
            if (it == group.end()) {
                group.push_back(s[i]);
                cnt++;
            } else {
                if (s[i] == s[i - 1]) {
                    cnt++;
                } else {
                    break;
                }
            }
            if (i == s.length() - 1) result++;
        }
    }
    cout << result;
}
*/
