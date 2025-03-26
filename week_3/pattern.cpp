#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int cnt = n;
    for(int i = 1;i <= n; i++){
        if(i == 1 || i == n){
            for(int j = 1; j <= cnt; j++){
                cout << "*";
            }
            cout << endl;
        }else{
            for(int j = 1; j <= n - i; j++){
                cout << " ";
            }
            cout << "*" << endl;
        }
    }
}