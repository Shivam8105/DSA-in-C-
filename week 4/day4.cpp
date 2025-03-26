//! Three Numbers

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int k, s;
//     cin >> k >> s;
//     int count = 0;
//     int z;
//     for (int x = 0; x <= k; x++)
//     {
//         for (int y = 0; y <= k; y++)
//         {
//             int z = s - x - y;
//             if(z >=0 && z <= k){
//                 count++;
//             }
//         }
//     }
//     cout << count << endl;
// }

//! Everyone loves to sleep

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
//         int n, H, M;
//         cin >> n >> H >> M;
//         int sleepTime = H * 60 + M;
//         int diff = INT_MAX;
//         for (int i = 0; i < n; i++)
//         {
//             int hour_i, min_i;
//             cin >> hour_i >> min_i;
//             int alarmTime = hour_i * 60 + min_i;
//             int currDIFF = alarmTime - sleepTime;
//             if (currDIFF < 0) {
//                 int todayTime = (24 * 60) - sleepTime;
//                 currDIFF = todayTime + alarmTime;
//             }
//             diff = min(diff, currDIFF);
//         }
//         cout << diff / 60 << " " << diff % 60 << endl;
//     }
//     return 0;
// }

//! Mark the Dust Sweeper

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int pos = -1;
    for(int i = 0; i < n; i++){
        if(a[i] != 0){
            pos = i;
            break;
        }
    }
    if(pos == -1 || pos == n - 1){
        cout << 0 << '\n';
        return;
    }
    int sum = 0, zero = 0;
    for(int i = pos; i < n - 1; i++){
        sum += a[i];
        if(!a[i]){
            zero++;
        }
    }
    cout << sum + zero << '\n';
    return;
}


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
