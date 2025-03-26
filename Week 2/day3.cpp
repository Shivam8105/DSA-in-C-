//! COMPARISON

#include <iostream>
using namespace std;

int main(){
    int A ,B ;
    string S;
    cin >> A >> S >> B;
    if(S == ">"){
        if(A > B){
            cout << "Right" << endl;
        }
        else{
            cout << "Wrong" << endl;
        }
    }
    else if (S == "<")
    {
        if (A < B)
        {
            cout << "Right" << endl;
        }
        else{
            cout << "Wrong" << endl;
        }

    }
    else if (S == "=")
    {
        if(A == B){
            cout << "Right" << endl;
        }
        else{
            cout << "Wrong" << endl;
        }
    }
}

//! MAX AND MIN

#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    int max = A;
    int min = B;
    if (B > max)
    {
        max = B;
    }
    if (C > max)
    {
        max = C;
    }

    if (A < min)
    {
        min = A;
    }
    if (C < min)
    {
        min = C;
    }
    cout << min << " "<< max << endl;
}