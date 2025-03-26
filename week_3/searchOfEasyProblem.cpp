#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    int arr[n];
    bool found = true;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        if(arr[i] == 1){
            cout << "Hard" << endl;
            return 0;
        }    
    }
    cout << "Easy" << endl;
}