#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<int > > arr(n,vector<int>(n));
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        for(int j = 0; j < n; j++){
            arr[i][j] = s[j] - '0';
        }
    }

    if(n == 1){
        cout << arr[0][0] << endl;
        return 0;
    }

    int lost = arr[0][0];

    for(int i = 1; i < n; i++){
        arr[i - 1][0] = arr[i][0];
    }

    for(int j = 1; j < n; j++){
        arr[3][j - 1] = arr[3][j];
    }

    for(int i = n - 1; i >= 0; i--){
        arr[i][3] = arr[i - 1][3];
    }

    for(int j = 3; j > 0; j--){
        arr[0][j] = arr[0][j - 1];
    }

    arr[0][1] = lost;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}