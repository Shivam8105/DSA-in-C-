#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long int x = 0;
    long long int y = 1;
    long long int z = 0;
    if(n == 1){
        cout << x << endl;
        return 0;
    }
    if(n == 2){
        cout << y << endl;
        return 0;
    }
    for(int i = 3; i <= n; i++){
        z = x + y;
        x  = y;
        y = z;
    }
    cout << z << endl;
    return 0;
}