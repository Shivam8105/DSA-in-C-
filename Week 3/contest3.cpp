//! Minimize

// #include <bits/stdc++.h>
// using namespace std;

// #define endl '\n'
// #define int long long

// const int MOD = 1e9 + 7;
// const int INF = LLONG_MAX >> 1;

// void solve(){
//     int a, b;
//     cin >> a >> b;
//     cout << b - a << '\n';
//     return;

// }
// signed main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

//! Osumania

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> columns(n);
        for (int i = 0; i < n; ++i)
        {
            string row;
            cin >> row;
            for (int j = 0; j < 4; ++j)
            {
                if (row[j] == '#')
                {
                    columns[i] = j + 1;
                    break;
                }
            }
        }
        for (int i = n - 1; i >= 0; --i)
        {
            cout << columns[i] << " ";
        }
        cout << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
