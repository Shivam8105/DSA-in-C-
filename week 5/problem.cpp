//! cover the water

// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;

//     int flag = 0;
//     int count_of_empty = 0;
//     int current_count_of_empty = 0;

//     for (auto ch : s)
//     {
//         if (ch == '.')
//         {
//             current_count_of_empty++;
//         }
//         else
//         {
//             if (current_count_of_empty >= 3)
//             {
//                 flag = 1;
//                 break;
//             }
//             count_of_empty += current_count_of_empty;
//             current_count_of_empty = 0;
//         }
//     }

//     // Final check for the last segment
//     if (current_count_of_empty >= 3)
//     {
//         flag = 1;
//     }
//     else
//     {
//         count_of_empty += current_count_of_empty;
//     }

//     if (flag)
//     {
//         cout << 2 << endl;
//     }
//     else
//     {
//         cout << count_of_empty << endl;
//     }
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

//! Laura and operations

// #include <bits/stdc++.h>
// using namespace std;
// long long is_possible(long long a, long long b, long long c)
// {
//     if (b % 2 == c % 2)
//     {
//         return 1;
//     }
//     return 0;
// }
// void solve()
// {
//     long long a, b, c;
//     cin >> a >> b >> c;
//     int ans[3] = {0, 0, 0};
//     ans[0] = is_possible(a, b, c);
//     ans[1] = is_possible(b, a, c);
//     ans[2] = is_possible(c, a, b);

//     for (auto it : ans)
//     {
//         cout << it << " ";
//     }
//     cout << endl;
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
