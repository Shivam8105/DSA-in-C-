#include <bits/stdc++.h>
using namespace std;
void solve(int n){
    for(int i = 1; i <= n; i++){
        for(int j = i; j > 0; j--){
            cout << "*";
        }
        cout << " ";
    }
    return;
}
int main(){
    solve(3);
}