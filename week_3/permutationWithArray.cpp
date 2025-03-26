#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int arr1[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }

    sort(arr,arr + n);
    sort(arr1,arr1 + n);

    for(int i = 0; i < n; i++){
        if(arr[i] != arr1[i]){
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
    return 0;
}