//! Upload more ram

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
//     cout.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//        int n,k;
//        cin >> n >> k;
//        cout << 1 + (n - 1) * k << '\n';
//     }
// }

//! Maximum Multiple Sum

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
//         if(n == 3){
//             cout << 3 << '\n';
//         }else{
//             cout << 2 << '\n';
//         }
//     }
// }

//! Large Addition

// #include <bits/stdc++.h>
// using namespace std;

// #define endl '\n'
// #define int long long

// const int MOD = 1e9 + 7;
// const int INF = LLONG_MAX >> 1;

// void solve()
// {
//     int x;
//     cin >> x;
//     int flag = 1;
//     while (x >= 10)
//     {
//         int digit = x % 10;
//         if (flag == 1)
//         {
//             flag = 0;
//             if (digit > 8)
//             {
//                 cout << "NO" << '\n';
//                 return;
//             }
//         }
//         else if (digit == 0)
//         {
//             cout << "NO" << '\n';
//             return;
//         }
//         x /= 10;
//     }
//     if(x == 1){
//         cout << "YES" << '\n';
//     }else{
//         cout << "NO" <<'\n';
//     }
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

//! K-sort

// #include <bits/stdc++.h>
// using namespace std;

// #define endl '\n'
// #define int long long

// const int MOD = 1e9 + 7;
// const int INF = LLONG_MAX >> 1;

// void solve(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     int coins = 0,maxDiff = 0;
//     for(int i = 1; i < n; i++){
//         if(arr[i] < arr[i - 1]){
//             coins += (arr[i - 1] - arr[i]);
//             maxDiff = max(maxDiff,arr[i - 1] - arr[i]);
//             arr[i] = arr[i - 1];
//         }
//     }
//     coins += maxDiff;
//     cout << coins << '\n';
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

//! Calculating gcd of two numbers

// #include <bits/stdc++.h>
// using namespace std;

// int solve(int a,int b){
//     while(b != 0){
//         int remainder = a % b;
//         a = b;
//         b = remainder;
//     }
//     return a;
// }

// int main(){
//     int num1,num2;
//     cin >> num1 >> num2;
//     int gcd = solve(num1,num2);
//     cout << "The gcd of " << num1 << " and " << num2 << " is " << gcd << endl;
// }

//! Sum Digits

// #include <bits/stdc++.h>
// using namespace std;

// #define endl '\n'
// #define int long long

// const int MOD = 1e9 + 7;
// const int INF = LLONG_MAX >> 1;

// void solve()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }
//     cout << sum << '\n';
//     return;
// }

// signed main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     solve();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string arr;
    cin >> arr;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i] - '0';
    }
    cout << sum << endl;
}