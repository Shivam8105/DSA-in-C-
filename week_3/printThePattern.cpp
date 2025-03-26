#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int num = 1;
    cout << num++ << endl;
    for(int i = 2; i <= n; i++){
        if(i % 2 == 0){
            for(int j = i; j > 0; j--){
                cout << num << " ";
                num++;
            }
            cout << endl;
        }else{
            int start = num + i - 1;
            for(int j = 0; j < i; j++){
                cout << start-- << " ";
                num++;
            }
            cout << endl;
        }
    }
    return 0;
}