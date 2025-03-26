#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int countLower = 0;
    int countUpper = 0;
    for(int i = 0; i < s.length(); i++){
        if(islower(s[i])){
            countLower++;
        }else{
            countUpper++;
        }
    }
    if(countLower > countUpper || countLower == countUpper){
        for(int i = 0; i < s.length(); i++){
            s[i] = tolower(s[i]);
        }
    }else{
        for(int i = 0; i < s.length(); i++){
            s[i] = toupper(s[i]);
        }
    }
    cout << s ;
    return 0;
}