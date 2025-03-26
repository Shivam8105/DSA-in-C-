#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin >> t;
    int n;
    string s;
    while(t--){
        cin >> n;
        cin >> s;
        for(int c = 0; c < s.length(); c++){
            s[c] = tolower(s[c]);
        }
        if(n < 4){
            cout << "NO" << endl;
        }else{
            bool possible = true;

            // isme characters ko find kr rhe hai ki string mai hai ya nhi
            if(s.find('m') == std::string::npos || s.find('e') == std::string::npos || s.find('o') == std::string::npos || s.find('w') == std::string::npos){
                possible  =  false;
            }

            // isme order check kr rhe hai meow ke pattern mai hai ya nhi

            if(s.find('o') > s.find('w') || s.rfind('o') > s.find('w')){
                possible = false;
            }

            if(s.find('e') > s.find('o') || s.rfind('e') > s.find('o')){
                possible = false;
            }

            if(s.find('m') > s.find('e') || s.rfind('m') > s.find('e')){
                possible = false;
            }

            for(char c : s){
                if(c != 'm' && c != 'e' && c != 'o' && c != 'w'){
                    possible = false;
                    break;
                }
            }

            if(possible){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
}