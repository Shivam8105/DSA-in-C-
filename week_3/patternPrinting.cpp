// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     cout << "hello" << endl;
//     cout << "bye" << "\n";
// } 


//! Hollow Rectangle

// #include <bits/stdc++.h>
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
//         }else{
//             for(int j = 1; j <= m; j++){
//                 if(j == 1 || j == m){
//                     cout << "* ";
//                 }else{
//                     cout << "  ";
//                 }
//             }
//             cout << endl;
//         }
//     }
// }

//! inverted pyramid

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,m;
//     cin >> n >> m;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= m; j++){
//             cout << "* ";
//         }
//         cout << endl;
//         m--;
//     }
// }

//! Hollow pyramid

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int cnt = n;
//     for(int i = 1; i <= cnt; i++){
//         for(int space = 1; space <= n - i; space++){
//             cout << "  ";
//         }
//         if(i == n){
//             for(int j = 1; j <= i; j++){
//                 cout << "* ";
//             }
//         }else{
//             for(int j = 1; j <= i; j++){
//                 if(j == 1 || j == i){
//                     cout << "* ";
//                 }else{
//                     cout << "  ";
//                 }
//             }
//         }
//         cout << endl;
//     }
// }

//! solid  half Diamond

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for(int i = 1; i <= n; i++){
//         // printing leading spaces
//         for(int j = 1; j <= i; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     for(int i = n - 1; i >= 1; i--){
//         for(int j = 1; j <= i; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

//! solid full diamond

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for(int i = 1; i <= n; i++){
//         for(int space = 1; space <= n - i; space++){
//             cout << "  ";
//         }
//         for(int j = 1; j <= 2 * i - 1; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     for(int i = n - 1; i >= 1; i--){
//         for(int space = 1; space <= n - i; space++){
//             cout << "  ";
//         }
//         for(int j = 1; j <= 2 * i - 1; j++){
//             cout << "* ";
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
//     for(int i = 1; i <= n; i++){
//         for(int space = 1; space <= n - i; space++){
//             cout << "  ";
//         }
//         for(int j = i; j <= 2 * i - 1; j++){
//             cout << j << " ";
//         }
//         for(int j = 2 * i - 2; j >= i; j--){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     for(int i = n; i >= 1; i--){
//         for(int space = 1; space <= n - i; space++){
//             cout << "  ";
//         }
//         for(int j = 1; j <= 2 * i - 1; j++){
//             cout << "* " ;
//         }
//         cout << endl;
//     }
// }