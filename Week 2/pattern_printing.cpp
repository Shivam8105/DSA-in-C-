//! solid rectangle

// #include <iostream>
// using namespace std;
// int main(){
//     for(int i = 1; i <= 4; i++){
//         for(int j = 1; j <= 5; j++){
//             cout << " * ";
//         }
//         cout << endl;
//     }
// }

//! Hollow rectangle

// #include <iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin >> n >> m;
//     for(int i = 1; i <= n; i++){
//         if(i == 1 || i == n){
//             for(int j = 1; j <= m; j++){
//                 cout << "* ";
//             }
//             cout << endl;
//         }
//         else{
//             for(int j = 1; j <= m; j++){
//                 if(j == 1 || j == m){
//                     cout << "* ";
//                 }
//                 else{
//                     cout << "  ";
//                 }
//             }
//             cout <<  endl;
//         }
//     }
// }

//! inverted half pyramid

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int cnt = n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= cnt; j++){
            cout << "* ";
        }
        cout << endl;
        cnt--;
    }
}

//! Hollow full pyramid

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for(int i = 1; i <= n; i++){
//         for(int space = 1; space <= n - i; space++){
//             cout << " ";
//         }
//         if(i == 1 || i == 2 || i == n){
//             for(int j = 1; j <= i; j++){
//                 cout << "* ";
//             }
//         }
//         else{

//         }
//     }
// }


//! Solid diamond

