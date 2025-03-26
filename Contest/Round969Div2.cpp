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
//         int l, r;
//         cin >> l >> r;
//         for(int i = l; i <= r; i++){

//         }
//     }
//     return 0;
// }
// int gcd(int a, int b)
// {
//     while (b != 0)
//     {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }


// #include <iostream>
// using namespace std;
// int gcd(int a, int b) {
//     return b == 0 ? a : gcd(b, a % b);
// }
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int l, r, count = 0;
//         cin >> l >> r;
//         for (int i = l; i <= r ; i++) {
//             for (int j = i + 1; j <= r; j++) {
//                 if (gcd(i, j) != 1) continue;
//                 for (int k = j + 1; k <= r; k++) {
//                     if (gcd(i, k) == 1 && gcd(j, k) == 1) {
//                         count++;
//                         break; 
//                     }
//                 }
//             }
//         }
//         cout << count << endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
void solve() {
        int l, r; cin >> l >> r;
        if(l % 2 == 0) l++;
        cout << (r - l + 2) / 4 << endl;
}
int main() {
        int t; cin >> t;
        while(t--) {
                solve();
        }
}