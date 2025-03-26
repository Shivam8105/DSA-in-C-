#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        int arr[n];
        int evenCount = 0;
        int oddCount = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                if(arr[i] % 2 != 0){
                    oddCount++;
                }
            }else{
                if(arr[i] % 2 == 0){
                    evenCount++;
                }
            }
        }
        if(evenCount == oddCount){
            cout << evenCount << endl;
        }else {
            cout << -1 << endl;
        }
    }
    return 0;
}