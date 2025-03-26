//! solid rectangle

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//! inverted pyramid

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for(int i = 1; i <= n; i++){
//         for(int j = 0; j <= n - i; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//! number pattern

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= i; j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }

//! number pattern

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for(int i = 1; i < 2 * n; i++){
//         if(i <= n){
//             for(int j = 1; j <= i; j++){
//                 cout << "* ";
//             }
//             cout << endl;
//         }
//         else{
//             for(int j = 1; j <= 2 * n - i; j++){
//                 cout << "* ";
//             }
//             cout << endl;
//         }
//     }
//     return 0;
// }

//! diamond problem

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for(int i = 1; i <= n; i++){
//         for(int k = 1; k <= n - i; k++){
//             cout << " ";
//         }
//         for(int j = 1; j <= i; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     for(int i = n - 1; i >= 1; i--){
//         for(int k = 1; k <= n - i; k++){
//             cout << " ";
//         }
//         for(int j = 1; j <= i; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

