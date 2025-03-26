#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int a, b, c;
    cin >> a >> b >> c;
    int min = a;
    int max = b;
    if(b < min){
        min = b;
    }if(c < min){
        min = c;
    }

    if(a > max){
        max = a;
    }if(c > max){
        max = c;
    }
    cout << min << " " << max << endl;
}