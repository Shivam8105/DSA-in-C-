//! Rectangle

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n;j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

//! Right angle triangle

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for(int  i = 0; i < n; i++){
//         for(int j = 0;  j <= i; j++){
//             cout << "*" ;
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
//     int num = 1;
//     for(int i = 0; i < n; i++){
//         num = 1;
//         for(int j = 0; j <= i; j++){
//             cout <<  num++ ;
//         }
//         cout << endl;
//     }
// }

//! repeating number pattern

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= i; j++){
//             cout << i;
//         }
//         cout << endl;
//     }
// }

//! reverse right angle triangle

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for(int i = n; i > 0; i--){
//         for(int j = 0; j < i; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

//! reverse number pattern

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for(int i = n; i > 0; i--){
//         for(int j = 1; j <= i; j++){
//             cout << j;
//         }
//         cout << endl;
//     }
// }

//! pyramid

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     // spaces
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         // star
//         for (int j = 1; j <= 2 * i - 1; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

//! reverse pyramid

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for(int i = n; i > 0; i--){
//         // spaces
//         for(int j = n - i; j > 0; j--){
//             cout << " ";
//         }
//         // star
//         for(int j = 2 * i - 1; j > 0; j--){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

//! difficult pattern

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int spaces = 2 * n - 2;
//     for (int i = 1; i <= 2 * n - 1; i++)
//     {
//         int star = i;
//         if (i > n) star = 2 * n - i;
//         //    star
//         for (int j = 1; j <= star; j++)
//         {
//             cout << "*";
//         }
//         //    space
//         for (int j = 1; j <= spaces; j++)
//         {
//             cout << " ";
//         }
//         // star
//         for (int j = 1; j <= star; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//         if (i < n)
//             spaces -= 2;
//         else
//             spaces += 2;
//     }
// }

//! number pattern

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int num = 4;
//     for(int i = 0; i < 2 * n - 1; i++){
//        for(int j = 0; j < 2 * n - 1; j++){
//         int top = 
//        }
//     }
// }


//! 