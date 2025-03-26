#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int t;
    cin >> t;
    string s;
    cin >> s;
    for(int i = 0; i < t; i++){
        for(int j = 0; j < n; j++){
            if(s[j] == 'B' && s[j + 1] == 'G'){
                char temp = s[j + 1];
                s[j + 1] = s[j];
                s[j] = temp;
                j++;
            }
        }
    }
    cout << s << endl;
    return 0;
}