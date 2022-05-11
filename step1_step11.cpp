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
// 새싹 25083
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) { 
    puts("         ,r'\"7");
    puts("r`-_   ,'  ,/");
    puts(" \\. \". L_r'");
    puts("   `~\\/");
    puts("      |");
    puts("      |");
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
// A+B - 2 2558
/*#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int a, b;
    cin >> a;
    cin >> b;
    cout << a + b << '\n';
}*/
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
// A+B - 6 10953
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++) {
        scanf("%d,%d", &a, &b);
        printf("%d\n", a + b);
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
// 손익분기점 1712
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int fc, v, p, bepq;
    cin >> fc >> v >> p;
    if (v >= p) {
        cout << -1;
    } else {
        bepq = fc / (p - v) + 1;
        cout << bepq;
    }
}
*/
// 벌집 2292
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int n, cnt = 0;
    cin >> n;
    if (n == 1) {
        cout << n;
    } else {
        while (3 * pow(cnt, 2) - 3 * cnt + 1 < n) {
            cnt++;
        }
        cout << cnt;
    }
}
*/
// 분수 찾기 1193
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    // 분자 : 1 1 2 3 2 1 1 2 3 4 5 2 3 4 1 1 2 3 4 5 6
    // 분모 : 1 2 1 1 2 3 4 3 2 1 1 4 3 2 5 6 5 4 3 2 1
    int n, i;
    cin >> n;
    for (i = 1; i < n; ++i)
        n -= i;
    if (i % 2 == 1)
        cout << i + 1 - n << '/' << n << endl;
    else
        cout << n << '/' << i + 1 - n << endl;
}
*/
// 달팽이는 올라가고 싶다 2869
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int a, b, v, result = 1;
    cin >> a >> b >> v;
    //while (true) {
    //    v -= a;
    //    if (v <= 0) {
    //        break;
    //    }
    //    v += b;
    //    result++;
    //}
    result = (v - b - 1) / (a - b) + 1;
    cout << result << '\n';
}
*/
// ACM 호텔 10250
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int h, w, n, l;
    cin >> l;
    for (int i = 0; i < l; i++) {
        cin >> h >> w >> n;
        if (n % h == 0)
            cout << (h * 100) + (n / h) << '\n';
        else
            cout << (n % h * 100) + (n / h + 1) << '\n';
    }
}
*/

// 부녀회장이 될테야 2775
/*
#include <bits/stdc++.h>
using namespace std;
int f(int a, int b) {
    if (b == 1) {
        return 1;
    }
    if (a == 0) {
        return b;
    }
    return f(a - 1, b) + f(a, b - 1);
}
int main(void) {
    // a층 b호를 만족 : a층 b호 사람 수 = a-1층 1~b호까지의 사람 수 합, 단 0층의 i호에는 i명
    // k층 n호는 몇 명?
    // 2 : 1 4 10 20
    // 1 : 1 3 6 10
    // 0 : 1 2 3 4
    // ex 2층 3호 = 1층 3호 + 2층 2호
    // f(a, b) = p[a - 1][b] + p[a][b - 1]
    // f(a, b) = f(a - 1, b) + f(a, b - 1)
    int T, k, n;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> k;
        cin >> n;
        cout << f(k, n) << '\n';
    }
}
*/
// 설탕 배달 2839
/*
#include <bits/stdc++.h>
using namespace std;
int getAnswer(int n) {
    int cnt = 0;
    while (n >= 0) {
        if (n % 5 == 0) {
            cnt += n / 5;
            return cnt;
        }
        n -= 3;
        cnt++;
    }
    return -1;
}
int main(void) {
    int n, cnt = 0;
    cin >> n;
    cout << getAnswer(n) << '\n';
}
*/
// 큰 수 A+B 10757
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int carry = 0;
    int length, a_length, b_length, x, y, digit;
    string a = "", b = "", c = "";
    cin >> a >> b;
    a_length = a.length();
    b_length = b.length();
    if (b_length > a_length) {
        swap(a, b);
        swap(a_length, b_length);
    }
    length = a_length > b.length() ? a_length : b.length();

    string tmp = "";
    if (a_length != b_length) {
        for (int i = 0; i < (a_length - b_length); i++) tmp += "0";
    }
    b = tmp + b;

    for (int i = length - 1; i >= 0; i--) {
        x = a[i] - '0';
        y = b[i] - '0';
        digit = x + y;
        if (carry == 1) {
            digit++;
            carry = 0;
        }
        if (digit > 9) carry = 1;
        c += digit % 10 + '0';
    }
    if (carry == 1) c += "1";
    for (int i = c.length() - 1; i >= 0; i--) {
        cout << c[i];
    }
}
*/
// -----기본 수학 2----
// 소수 찾기 1978
/*
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
*/
// 소수 2581
/*
#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 10000;
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
    int M, N, cnt = 0, sum = 0, min_prime = 10001;
    cin >> M;
    cin >> N;
    for (int i = M; i < N + 1; i++) {
        if (isPrime[i]) {
            cnt++;
            sum += i;
            min_prime = min(min_prime, i);
        }
    }
    if (cnt > 0) {
        cout << sum << '\n';
        cout << min_prime << '\n';
    } else {
        cout << -1 << '\n';
    }
}
*/
// 소인수분해 11653
/*
#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 10000000;
int minFactor[MAX_N + 1];
void eratosthenes() {
    minFactor[0] = minFactor[1] = -1;
    for (int i = 2; i < MAX_N + 1; i++) {
        minFactor[i] = i;
    }
    int sqrtn = int(sqrt(MAX_N));
    for (int i = 2; i < sqrtn + 1; i++) {
        if (minFactor[i] == i) {
            for (int j = i * i; j < MAX_N + 1; j += i) {
                if (minFactor[j] == j) {
                    minFactor[j] = i;
                }
            }
        }
    }
}
void factor(int n) {
    while (n > 1) {
        cout << minFactor[n] << '\n';
        n /= minFactor[n];
    }
}
int main(void) {
    eratosthenes();
    int N;
    cin >> N;
    factor(N);
}
*/
// 소수 구하기 1929
/*
#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 1000000;
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
    int M, N;
    cin >> M >> N;
    for (int i = M; i < N + 1; i++) {
        if (isPrime[i]) {
            cout << i << '\n';
        }
    }
}
*/
// 베르트랑 공준 4948
/*
#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 123456 * 2;
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
    int n = 0, cnt;
    eratosthenes();
    while (cin >> n) {
        if (n == 0) break;
        cnt = 0;
        for (int i = n + 1; i < 2 * n + 1; i++)
            if (isPrime[i]) cnt++;
        cout << cnt << '\n';
    }
}
*/
// 골드바흐의 추측 9020
/*
#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 10000;
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
    int n, T;
    eratosthenes();
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> n;
        for (int j = (n / 2); j > 0; j--) {
            if (isPrime[j] && isPrime[n - j]) {  // (j) + (n - j) == n => true
                cout << j << ' ' << n - j << '\n';
                break;
            }
        }
    }
}
*/
// 직사각형에서 탈출 1085
/*
// +-----------A(w,h)
// |	 *      |
// |	 *      |
// |	 *      |     min(*(p 부터 '-'or'|' 까지의 거리)) ?
// |****P(x,y)*|
// |	 *      |
// O(0,0)------+
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int x, y, w, h, min_d = 987654321;
    cin >> x >> y >> w >> h;
    int d[4] = {x, y, w - x, h - y};
    for (auto &it : d) {
        min_d = min(min_d, it);
    }
    cout << min_d << '\n';
}
*/
// 네 번째 점 3009
/*
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;
int main(void) {
    P p[5];
    for (int i = 1; i < 4; i++) {
        int x, y;
        cin >> x >> y;
        p[i] = P(x, y);
    }

    if (p[1].first == p[2].first) {
        p[4].first = p[3].first;
    } else if (p[1].first == p[3].first) {
        p[4].first = p[2].first;
    } else {
        p[4].first = p[1].first;
    }

    if (p[1].second == p[2].second) {
        p[4].second = p[3].second;
    } else if (p[1].second == p[3].second) {
        p[4].second = p[2].second;
    } else {
        p[4].second = p[1].second;
    }

    cout << p[4].first << ' ' << p[4].second << '\n';
}
*/
// 직각삼각형 4153
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    long long a, b, c;
    while (cin >> a >> b >> c) {
        if (a == 0 && b == 0 && c == 0) break;
        if (a > b) swap(a, b);
        if (b > c) swap(b, c);
        cout << (a * a + b * b == c * c ? "right" : "wrong") << '\n';
    }
}
*/
// 택시 기하학 3053
/*
#include <bits/stdc++.h>
using namespace std;
const double PI = 3.14159265358979323846;
int main(void) {
    long double r;
    cin >> r;
    cout << fixed;
    cout.precision(6);
    cout << PI * powl(r, 2) << '\n';
    cout << 2.0 * powl(r, 2) << '\n';
}
*/
// 터렛 1002
/*
#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    int x1, y1, r1, x2, y2, r2;
    int d, sub, sum;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
        sub = (r1 - r2) * (r1 - r2);
        sum = (r1 + r2) * (r1 + r2);
        if (d == 0) {
            if (sub == 0) {
                cout << "-1" << '\n';
            } else {
                cout << "0" << '\n';
            }
        } else if (d == sub || d == sum) {
            cout << "1" << '\n';
        } else if (sub < d && d < sum) {
            cout << "2" << '\n';
        } else {
            cout << "0" << '\n';
        }
    }
}
*/
// -----재귀-----
// 팩토리얼 10872
/*
#include <bits/stdc++.h>
using namespace std;
int factorial(int n) { return n > 1 ? n * factorial(n - 1) : 1; }
int main(void) {
    int x;
    cin >> x;
    cout << factorial(x) << '\n';
}
*/
// 피보나치 수 5 10870 - 재귀
/*
#include <bits/stdc++.h>
using namespace std;
int f(int n) { return n <= 1 ? n : f(n - 1) + f(n - 2); }
int main(void) {
    int n;
    cin >> n;
    cout << f(n) << '\n';
}
*/
// 피보나치 수 1 2747 - 비네의 공식
/*
#include <bits/stdc++.h>
using namespace std;
int f(int n) { return (pow(1 + sqrt(5), n) - pow(1 - sqrt(5), n)) / (pow(2, n) * sqrt(5)); }
int main(void) {
    int n;
    cin >> n;
    cout << f(n) << '\n';
}
*/
// 피보나치 수 2 2748 - 메모이제이션
/*
#include <bits/stdc++.h>
using namespace std;
long long fibo[91] = {0, 1};
int main() {
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    cout << fibo[n] << '\n';
    return 0;
}
*/
// 재귀함수가 뭔가요? 17478
/*
#include <bits/stdc++.h>
using namespace std;
int N;
void teachRecursion(int depth) {
    for (int i = 0; i < depth; i++) cout << "____";
    cout << "\"재귀함수가 뭔가요?\"\n";

    if (depth == N) {
        for (int i = 0; i < depth; i++) cout << "____";
        cout << "\"재귀함수는 자기 자신을 호출하는 함수라네\"\n";
        for (int i = 0; i < depth; i++) cout << "____";
        cout << "라고 답변하였지.\n";
        return;
    }

    for (int i = 0; i < depth; i++) cout << "____";
    cout << "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n";
    for (int i = 0; i < depth; i++) cout << "____";
    cout << "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n";
    for (int i = 0; i < depth; i++) cout << "____";
    cout << "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n";

    teachRecursion(depth + 1);

    for (int i = 0; i < depth; i++) cout << "____";
    cout << "라고 답변하였지.\n";
}
int main(void) {
    cin >> N;
    puts("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.");
    teachRecursion(0);
}
*/
// 별 찍기 - 10 2447
/*
#include <bits/stdc++.h>
using namespace std;
void star(int i, int j, int n) {
    if ((i / n) % 3 == 1 && (j / n) % 3 == 1) {
        cout << ' ';
    } else {
        if (n / 3 == 0)
            cout << '*';
        else
            star(i, j, n / 3);
    }
}
int main(void) {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) star(i, j, n);
        cout << '\n';
    }
}
*/
// 하노이 탑 이동 순서 11729
/*
#include <bits/stdc++.h>
using namespace std;
void hanoi(int n, int start, int mid, int to) {
    if (n == 1) {
        cout << start << ' ' << to << '\n';
    } else {
        // A -> C로 옮긴다고 가정할 떄,
        // STEP 1 : n-1개를 A에서 B로 이동 (= start 지점의 N-1개의 원판을 mid 지점으로 옮긴다.)
        hanoi(n - 1, start, to, mid);
        // STEP 2 : 1개를 A에서 C로 이동 (= start 지점의 N번째 원판을 to지점으로 옮긴다.)
        cout << start << ' ' << to << '\n';
        // STEP 3 : N-1개를 B에서 C로 이동 (= mid 지점의 N-1개의 원판을 to 지점으로 옮긴다.)
        hanoi(n - 1, mid, start, to);
    }
}
int main(void) {
    int n;
    cin >> n;
    cout << (1 << n) - 1 << '\n';
    hanoi(n, 1, 2, 3);
}
*/
// ----구현----
//음계 2920
/*
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
*/
//검증수 2475
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int x, sum = 0;
    for (int i = 0; i < 5; i++) {
        cin >> x;
        sum += (x * x);
    }
    cout << sum % 10 << '\n';
}
*/
// -----브루트 포스-----
// 블랙잭 2798
/*
#include <bits/stdc++.h>
using namespace std;
int card[100] = {0};
int main(void) {
    int n, m, sum = 0, result = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> card[i];
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                sum = card[i] + card[j] + card[k];
                if (sum <= m) result = max(sum, result);
            }
        }
    }
    cout << result << '\n';
}
*/
// 분해합 2231
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int N, n_digit, sum = 0;
    cin >> N;
    for (int i = 1; i < N; ++i) {
        sum = i;
        n_digit = i;
        while (n_digit) {
            sum += n_digit % 10;
            n_digit /= 10;
        }
        if (N == sum) {
            cout << i << '\n';
            return 0;
        }
    }
    cout << '0' << '\n';
}
*/
// 덩치 7568
/*
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> bulk;  // weight, height
typedef vector<bulk> student;
int main(void) {
    int N, rank = 1;
    cin >> N;
    student s(N);
    bulk previous;
    for (int i = 0; i < N; i++) {
        bulk b;
        b.first = i;
        cin >> b.first >> b.second;
        s[i] = b;
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            if (s[i].first < s[j].first && s[i].second < s[j].second) rank++;
        cout << rank << ' ';
        rank = 1;
    }
}
*/
// 체스판 다시 칠하기 1018
/*
#include <bits/stdc++.h>
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
*/
// 영화감독 숌 1436
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int N, temp, title = 0, cnt = 0;
    cin >> N;
    while (cnt != N) {
        title++;
        temp = title;
        // 수에 연속된 "666"이 있는지 판별
        while (temp != 0) {  // 종말의 숫자라면
            if (temp % 1000 == 666) {
                cnt++;
                break;
            } else {
                temp /= 10;  // 일의 자리수 삭제
            }
        }
    }
    cout << title << '\n';
}
*/
// -----정렬-----
// 수 정렬하기 2750, 수 정렬하기 2 2751
/*
#include <bits/stdc++.h>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v) cin >> it;
    sort(v.begin(), v.end());
    for (auto it : v) cout << it << '\n';
}
*/
// 수 정렬하기 2 2751 (Merge Sort)
/*
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
int N;
void merge(vi &v, int m, int middle, int n) {
    vi sorted;
    int i = m;
    int j = middle + 1;
    // 작은 순서대로 배열에 삽입
    while (i <= middle && j <= n) {
        if (v[i] <= v[j]) {
            sorted.push_back(v[i]);
            i++;
        } else {
            sorted.push_back(v[j]);
            j++;
        }
    }
    // 남은 데이터 삽입
    if (i > middle) {
        for (int t = j; t <= n; t++) sorted.push_back(v[t]);
    } else {
        for (int t = i; t <= n; t++) sorted.push_back(v[t]);
    }
    // 정렬된 배열 삽입
    for (int t = m; t <= n; t++) v[t] = sorted[t - m];
}
void mergeSort(vi &v, int m, int n) {
    if (m < n) {
        int middle = (m + n) / 2;
        mergeSort(v, m, middle);
        mergeSort(v, middle + 1, n);
        merge(v, m, middle, n);
    }
}
int main(void) {
    cin >> N;
    vi v(N);
    for (auto &it : v) cin >> it;
    mergeSort(v, 0, N - 1);
    for (auto &it : v) cout << it << ' ';
    cout << '\n';
}
*/
// 수 정렬하기 3 10989
/*
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int count[10000] = {0};
    int N, n;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> n;
        count[n - 1]++;
    }
    for (int i = 0; i < 10000; i++) {
        if (count[i] != 0) {
            for (int j = 0; j < count[i]; j++) cout << i + 1 << '\n';
        }
    }
}
*/
// 통계학 2108
/*
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, mean = 0, median = 0, mode = 0, modecount = 0, range = 0;
    bool is_second = false;
    cin >> N;
    vi number(N);
    vi count(8001, 0);
    for (int i = 0; i < N; i++) {
        cin >> number[i];
        mean += number[i];
        count[number[i] + 4000]++;
        modecount = max(modecount, count[number[i] + 4000]);
    }
    mean = round(mean / (double)N);
    sort(number.begin(), number.end());
    median = number[N / 2];
    for (int i = -4000; i <= 4000; i++) {
        if (count[i + 4000] == modecount) {
            mode = i;
            if (is_second) {
                break;
            }
            is_second = true;
        }
    }
    range = number[N - 1] - number[0];
    cout << mean << '\n';
    cout << median << '\n';
    cout << mode << '\n';
    cout << range << '\n';
}
*/
// 소트인사이드 1427
/*
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<lli> vl;
int main(void) {
    lli N;
    vl digit_of_N;
    cin >> N;
    while (N > 0) {
        digit_of_N.push_back(N % 10);
        N /= 10;
    }
    sort(digit_of_N.begin(), digit_of_N.end());
    reverse(digit_of_N.begin(), digit_of_N.end());
    for (auto &it : digit_of_N) cout << it;
}
*/
// 좌표 정렬하기 11650
/*
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;
typedef vector<P> vp;
int main(void) {
    int N, x, y;
    cin >> N;
    vp point(N);
    for (auto &it : point) {
        cin >> x >> y;
        it = pair<int, int>(x, y);
    }
    sort(point.begin(), point.end(), [&](P a, P b) { return a.first < b.first ? true : a.first == b.first ? a.second < b.second ? true : false : false; });
    for (auto &it : point) {
        cout << it.first << ' ' << it.second << '\n';
    }
}
*/
// 좌표 정렬하기 2 11651
/*
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;
typedef vector<P> vp;
int main(void) {
    int N, x, y;
    cin >> N;
    vp point(N);
    for (auto &it : point) {
        cin >> x >> y;
        it = P(x, y);
    }
    sort(point.begin(), point.end(), [&](P a, P b) { return a.second == b.second ? a.first < b.first ? true : false : a.second < b.second ? true : false; });
    for (auto &it : point) {
        cout << it.first << ' ' << it.second << '\n';
    }
}
*/
// 단어 정렬 1181
/*
#include <bits/stdc++.h>
using namespace std;
typedef vector<string> vs;
int main(void) {
    int N;
    cin >> N;
    vs word(N);
    for (auto &it : word) cin >> it;
    sort(word.begin(), word.end(), [](string a, string b) {
        if ((a.length() < b.length())) {
            return true;
        } else if ((a.length() > b.length())) {
            return false;
        } else {
            return a < b;
        }
    });
    word.erase(unique(word.begin(), word.end()), word.end());
    for (auto &it : word) {
        cout << it << '\n';
    }
}
*/
// 나이순 정렬 10814
/*
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> target;
typedef pair<target, string> user;
typedef vector<user> member;
int main(void) {
    int N;
    cin >> N;
    member m(N);
    for (int i = 0; i < N; i++) {
        user u;
        u.first.second = i;
        cin >> u.first.first >> u.second;
        m[i] = u;
    };
    sort(m.begin(), m.end(), [&](user a, user b) {
        if ((a.first.first < b.first.first)) {
            return true;
        } else if ((a.first.first > b.first.first)) {
            return false;
        } else {
            return a.first.second < b.first.second;
        }
    });
    for (auto &it : m) cout << it.first.first << ' ' << it.second << '\n';
}*/
// 좌표 압축 18870
/*
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> point;
typedef vector<point> coord;
typedef vector<int> vi;
int main(void) {
    int N, index = 0, previous;
    cin >> N;
    coord pos(N);

    for (int i = 0; i < N; i++) {
        point p;
        cin >> p.first;
        p.second = i;
        pos[i] = p;
    }
    sort(pos.begin(), pos.end());
    previous = pos[0].first;
    pos[0].first = index;
    for (int i = 1; i < N; i++) {
        if (pos[i].first == previous) {
            pos[i].first = index;
        } else {
            previous = pos[i].first;
            pos[i].first = (index += 1);
        }
    }
    sort(pos.begin(), pos.end(), [&](point a, point b) { return a.second < b.second; });
    for (auto &it : pos) cout << it.first << ' ';
}
*/
