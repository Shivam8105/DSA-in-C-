//! Fill the gaps

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int N;
//     cin >> N;
//     int A[N];
//     for(int i = 0; i < N; i++){
//         cin >> A[i];
//     }
//     for(int i = 0; i < N -1; i++){
//         cout << A[i] << " ";
//         if(A[i] > A[i + 1]){
//             int temp = A[i] - 1;
//             while(temp > A[i + 1]){
//                 cout << temp << " ";
//                 temp--;
//             }
//         }
//         else{
//             int temp = A[i] + 1;
//             while(temp < A[i + 1]){
//                 cout << temp << " ";
//                 temp++;
//             }
//         }
//     }
//     cout << A[N - 1] << endl;
// }

//! Discord

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int arr[m][n];
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     bool adjacent[51][51] = {false};

//     for(int i = 0; i < m; i++){
//         for(int j = 0; j < n - 1; j++){
//             int a = arr[i][j];
//             int b = arr[i][j + 1];
//             adjacent[a][b] = true;
//             adjacent[b][a] = true;
//         }
//     }

//     int count = 0;
//     for(int i = 1; i <= n; i++){
//         for(int j = i + 1; j <= n; j++){
//             if(!adjacent[i][j]){
//                 count++;
//             }
//         }
//     }
//     cout << count << endl;
//     return 0;
// }


//! some map in the RPG world

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
    int h,w;
    cin >> h >> w;
    int a[h][w],b[h][w];
    string s;
    for(int i = 0; i < h; i++){
        cin >> s;
        for(int j = 0; j < w; j++){
            if(s[j] == '.') a[i][j] = 0;
            else a[i][j] = 1;
        }
    }

     for(int i = 0; i < h; i++){
        cin >> s;
        for(int j = 0; j < w; j++){
            if(s[j] == '.') b[i][j] = 0;
            else b[i][j] = 1;
        }
    }

    for(int s = 0; s < h; s++){
        for(int t = 0; t < w; t++){
            bool done = true;
            for(int i = 0; i < h; i++){
                for(int j = 0; j < w; j++){
                    if(a[i][j] != b[(i + s) % h][(j + t) % w]){
                        done = false;
                        break;
                    }
                }
                if(!done) break;
            }
            if(done){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}
