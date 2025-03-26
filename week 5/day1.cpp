//! Minimise ordering

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin >> s;
//     int n = s.size();
//     int arr[26];
//     memset(arr,0,sizeof(arr));
//     for(int i = 0; i < n; i++){
//         arr[s[i] - 'a']++;
//     }
//     string ans = " ";
//     for(int i = 0; i < 26; i++){
//         char c = i + 'a';
//         while(arr[i] > 0){
//             ans += c;
//             arr[i]--;
//         }
//     }
//     cout << ans << '\n';
//     return 0;
// }


//! Pasta

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
//     int n,m;
//     cin >> n >> m;
//     int a[n],b[m];

//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//     }
//     for(int i = 0; i < m; i++){
//         cin >> b[i];
//     }
    
//     bool ans = true; // it tells us that on which day the request was not fulfilled.
//     for(int i = 0; i < m; i++){
//         bool flag = false;
//         for(int j = 0; j < n; j++){
//             if(a[j] == b[i]){
//                 a[j] = -1;
//                 flag = true;
//                 break;
//             }
//         }
//         if(flag == false){
//             ans = false;
//             break;
//         }
//     }
//     if(ans == true){
//         cout << "Yes" << '\n';
//     }else{
//         cout << "No" << '\n';
//     }
//     return 0;
// }

//! Go Straight and Turn Right 

