#include <bits/stdc++.h>
using namespace std;

void print(int sr,int sc,int er,int ec,string s){
    if(sr > er || sc > ec){
        return;
    }
    if(sr == ec && sc == ec){
        cout << s << endl;
        return;
    }
    // go right
    print(sr,sc + 1,er,ec,s+"R");
    // go down
    print(sr + 1,sc,er,ec,s+"D");
}

int main(){
    int rows = 3;
    int cols = 3;
    print(1,1,rows,cols,"");
}