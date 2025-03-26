//! WELCOME FOR YOU WITH CONDITIONS

#include <iostream>
using namespace std;
int main(){
    int A , B;
    cin >> A >> B;
    if(A >= B){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}

//! MUTIPLES

#include <iostream>
using namespace std;
int main(){
    int A , B ;
    cin >> A >> B;
    if((A % B == 0) || (B % A == 0)){
        cout << "Multiples" << endl;
    }
    else{
        cout << "No Multiples" << endl;
    }

}

//! DIGITS SUMMATION

#include <iostream>
using namespace std;
int main(){
    long long int N , M;
    cin >> N >> M;
    int sum = 0;
    int last_digit_1 = N % 10;
    int last_digit_2 = M % 10;
    sum =  last_digit_1 + last_digit_2;
    cout << sum << endl;

}

//! THE BROTHERS

#include <iostream>
using namespace std;

int main(){
    string F1,S1;
    string F2,S2;

    cin >> F1 >> S1;
    cin >> F2 >> S2;

    if(S1 == S2){
        cout << "ARE Brothers" << endl;
    }
    else{
        cout << "NOT" << endl;
    }
}

