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


