#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int count = 1;
        for(int i = 1 ; i < n; i++){
            if(arr[0] == arr[i]){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}