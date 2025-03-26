//! clock and strings

// #include <bits/stdc++.h>
// using namespace std;

// void solve(){
//     int a, b, c, d;
//     cin >> a >> b >> c >> d;

//     int a1 = (int) min(a, b);
//     int b1 = (int) max(a, b);
//     int c1 = (int) min(c, d);
//     int d1 = (int) max(c, d);

//     if ((a1 >= c1 && b1 <= d1) ||
//         (a1 <= c1 && b1 >= d1) ||
//         (b1 < c1) ||
//         (a1 > d1)) {
//         cout << "NO" << endl;
//     } else {
//         cout << "YES" << endl;
//     }
// }
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }

//! Symmetric matrix

// #include <bits/stdc++.h>
// using namespace std;
// void solve(){
//     int a1[105],a2[105],a3[105],a4[105];
//     bool op = 0;
//     int n,m;
//     cin >> n >> m;
//     for(int i = 1; i <= n; i++){
//         cin >> a1[i] >> a2[i] >> a3[i] >> a4[i];
//         if(a2[i] == a3[i]){
//             op = 1;
//         }
//     }
//     if(m & 1 || op == 0){
//         cout << "NO" << endl;
//     }
//     else{
//         cout << "YES" << endl;
//     }
//     return;
// }
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }

//! Lucky year

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool isLuckyYear(int year)
{
    string s = to_string(year);
    int nonZeroDigit = 0;
    for (char c : s)
    {
        if (c != '0')
        {
            nonZeroDigit++;
            if (nonZeroDigit > 1)
            {
                return false;
            }
        }
    }
    return true;
}

int nextLuckyYear(int n)
{
    string s = to_string(n + 1);
    int nonZeroIndex = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '0')
        {
            nonZeroIndex = i;
            break;
        }
    }

    for (int i = nonZeroIndex + 1; i < s.size(); i++)
    {
        s[i] = '0';
    }

    int luckyYear = stoll(s);

    if (luckyYear > n)
    {
        return luckyYear;
    }
    else
    {
        s[nonZeroIndex]++;
        if (s[nonZeroIndex] > '9')
        {
            s[nonZeroIndex] = '0';
            for (int i = nonZeroIndex - 1; i >= 0; --i)
            {
                if (s[i] == '9')
                {
                    s[i] = '0';
                }
                else
                {
                    s[i]++;
                    break;
                }
            }
            if (s[0] == '0')
            {
                s = '1' + s;
            }
        }

        for (int i = nonZeroIndex + 1; i < s.size(); i++)
        {
            s[i] = '0';
        }
        return stoll(s);
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int nextYear = nextLuckyYear(n);
    int ans = nextYear - n;
    cout << ans << '\n';
    return 0;
}


