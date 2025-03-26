//! subset mex

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
//       int n;
//       cin >> n;
//       int arr[n + 1];
//       int cnt[101];
//       for(int i = 0; i < 101; i++){
//         cnt[i] = 0;
//       }
//       for(int i = 1; i <= n; i++){
//         cin >> arr[i];
//         cnt[arr[i]]++;
//       }
//       int mexA = 0;
//       while(cnt[mexA] >= 2){
//         mexA++;
//       }
//       int mexB = 0;
//       while(cnt[mexB] >= 1){
//         mexB++;
//       }
//       cout << mexA + mexB << '\n';
//     }
// }

//! Array Cancellation

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> arr[i];

        long long pos = 0;
        long long rem_neg = 0;
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] >= 0)
            {
                pos += arr[i];
            }
            else
            {
                if (pos >= abs(arr[i]))
                {
                    pos -= abs(arr[i]);
                }
                else
                {
                    rem_neg += (abs(arr[i]) - pos);
                    pos = 0;
                }
            }
        }
        cout << rem_neg << endl;
    }
    return 0;
}
