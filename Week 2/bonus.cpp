//! is it a cat?

// #include <bits/stdc++.h>
// using namespace std;

// #define endl '\n'
// #define int long long

// const int MOD = 1e9 + 7;
// const int INF = LLONG_MAX >> 1;

// signed main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         for (int i = 0; i < n; i++)
//         {
//             s[i] = tolower(s[i]);
//         }

//         int recent = 0;
//         for (int i = recent; i < n && s[i] == 'm'; i++)
//         {
//             recent = i + 1;
//         }
//         if (recent == 0 || s[recent - 1] != 'm')
//         {
//             cout << "NO" << endl;
//             continue;
//         }

//         for (int i = recent; i < n && s[i] == 'e'; i++)
//         {
//             recent = i + 1;
//         }
//         if (recent == 0 || s[recent - 1] != 'e')
//         {
//             cout << "NO" << endl;
//             continue;
//         }

//         for (int i = recent; i < n && s[i] == 'o'; i++)
//         {
//             recent = i + 1;
//         }
//         if (recent == 0 || s[recent - 1] != 'o')
//         {
//             cout << "NO" << endl;
//             continue;
//         }

//         for (int i = recent; i < n && s[i] == 'w'; i++)
//         {
//             recent = i + 1;
//         }
//         if (recent == 0 || s[recent - 1] != 'w')
//         {
//             cout << "NO" << endl;
//             continue;
//         }

//         if (recent == n)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "No" << endl;
//         }
//     }
//     return 0;
// }

//! Politics

// #include <bits/stdc++.h>
// using namespace std;

// #define endl '\n'
// #define int long long

// const int MOD = 1e9 + 7;
// const int INF = LLONG_MAX >> 1;

// signed main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;
//         string arr[n];
//         for(int i = 0; i < n; i++){
//             cin >> arr[i];
//         }
//         int count = 1;
//         for(int i = 1; i < n; i++){
//             if(arr[0] == arr[i]){
//                 count++;
//             }
//         }
//         cout << count << endl;
//     }
//     return 0;
// }


//! catch the coin

// #include <bits/stdc++.h>
// using namespace std;

// #define endl '\n'
// #define int long long

// const int MOD = 1e9 + 7;
// const int INF = LLONG_MAX >> 1;

// signed main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int x,y;
//         cin >> x >> y;
//         if(y < -1){
//             cout << "NO" << endl;
//         }else{
//             cout << "YES" << endl;
//         }
//     }
// }
