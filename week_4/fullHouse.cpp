#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5];
    int count[13] = {0};
    int three = 0; 
    int two = 0;
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
        count[arr[i]]++;
    }
    for(int i = 1; i <= 13; i++){
        if(count[i] == 3){
            three++;
        }else if(count[i] == 2){
            two++;
        }
    }
    if(three == 1 && two == 1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}