#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin >> n;
    if(n < 2){
        cout << "No" << endl;
        return 0;
    }
    long long int c = 2;
    while(c * c <= n){
        if(n % c == 0){
            cout << "No" << endl;
            return 0;
        }
        c++;
    }
    cout << "Yes" << endl;
}