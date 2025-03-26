#include <bits/stdc++.h>
using namespace std;
int main()
{
    int hour = 21;
    int minutes = 0;
    int k;
    cin >> k;

    int c = k / 60;
    int j = k % 60;

    for(int i = 1; i <= k; i++){
        if(i < 60){
            minutes++;
        }
        else if(i > 60){
            minutes = 0; 
            hour = 21;
            hour = hour + c;
            minutes = minutes + j;
        }else if( i == 60){
            minutes = 0;
            hour = 21;
            hour++;
        }
    }
    cout << hour << ":" << (minutes < 10 ? "0" : "") << minutes << endl;
    return 0;
}
