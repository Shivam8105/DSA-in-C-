#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int diff = n % 5;
    if(diff == 0){
        cout << n << endl;
    }else if(diff == 1){
        cout << n - 1 << endl;
    }else if(diff == 2){
        cout << n - 2 << endl;
    }else if(diff == 3) {
        cout << n + 2 << endl;
    }else{
        cout << n + 1 << endl;
    }
    return 0;
}