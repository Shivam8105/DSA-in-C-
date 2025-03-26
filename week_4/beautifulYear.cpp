#include <bits/stdc++.h>
using namespace std;

bool solve(int year){
    string s = to_string(year);
    if(s[0] != s[1] && s[1] != s[2] && s[2] != s[3] && s[0] != s[2] && s[0] != s[3] && s[1] != s[3]){
        return true;
    }else{
        return false;
    }
}

int main(){
    int year;
    cin >> year;
    while(true){
        year++;
        if(solve(year)){
            cout << year << endl;
            break;
        }
    }
    return 0;
}