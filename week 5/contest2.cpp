//! sakurako's exam

// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int a, b;
//     cin >> a >> b;
//     int total_sum = a + 2 * b;
//     if (total_sum % 2 == 0)
//     {
//         int half_sum = total_sum / 2;

//         if ((half_sum % 2 == 0) || (half_sum % 2 == 1 && a > 0))
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }
//     return;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// #define endl '\n'
// #define int long long

// const int MOD = 1e9 + 7;
// const int INF = LLONG_MAX >> 1;

// void solve()
// {
//     int a, b;
//     cin >> a >> b;
//     int total = a + 2 * b;
//     if (total % 2 == 0)
//     {
//         int half = total / 2;

//         if ((half % 2 == 0) || (half % 2 == 1 && a > 0))
//         {
//             cout << "YES" << '\n';
//         }
//         else
//         {
//             cout << "NO" << '\n';
//         }
//     }
//     else
//     {
//         cout << "NO" << '\n';
//     }
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

//! Longest Good Array

// #include <iostream>
// using namespace std;

// int maxLength(long long l, long long r) {
//     int len = 0;
//     long long current = l;
//     long long increase = 1;

//     while (current <= r) {
//         len++;
//         current += increase;
//         increase++;
//     }

//     return len;
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         long long l, r;
//         cin >> l >> r;
//         cout << maxLength(l, r) << ;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// #define endl '\n'
// #define int long long

// const int MOD = 1e9 + 7;
// const int INF = LLONG_MAX >> 1;

// int maxLength(long long l, long long r)
// {
//     int len = 0;
//     long long current = l;
//     long long increase = 1;
//     while (current <= r)
//     {
//         len++;
//         current += increase;
//         increase++;
//     }
//     return len;
// }
// signed main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long l, r;
//         cin >> l >> r;
//         cout << maxLength(l, r) << '\n';
//     }
//     return 0;
// }

