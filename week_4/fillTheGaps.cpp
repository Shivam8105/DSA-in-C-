#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<int>newArray;
    for(int i = 0; i < n - 1; i++){
        newArray.push_back(arr[i]);
        if(abs(arr[i] - arr[i + 1]) > 1){
            int num = arr[i];

            if(arr[i] < arr[i + 1]){
                while(num < arr[i + 1] - 1){
                   num++;
                   newArray.push_back(num);
                }
            }else if(arr[i] > arr[i + 1]){
                while(num > arr[i + 1] + 1){
                    num--;
                    newArray.push_back(num);
                }
            }
        }
    }
    newArray.push_back(arr[n - 1]);
    for(int i = 0; i < newArray.size(); i++){
        cout << newArray[i] << " ";
    }
    cout << endl;
    return 0;
}