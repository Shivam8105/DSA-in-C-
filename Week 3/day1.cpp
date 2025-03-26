//! Even Odd Positive or Negative

// #include <iostream>
// using namespace std;
// int main(){
//     int N;
//     cin >> N ;
//     int even = 0, odd = 0, positive = 0, negative = 0;
//     int num;
//     for(int i = 0; i < N; ++i){
//         cin >> num;

//         if(num % 2 == 0){
//             even++;
//         }
//         else{
//             odd++;
//         }

//         if(num > 0){
//             positive++;
//         }
//         else if (num < 0){
//             negative++;
//         }
//     }

//     cout << "Even: " << even << endl;
//     cout << "Odd: " << odd << endl;
//     cout << "Positive: " << positive << endl;
//     cout << "Negative: " << negative << endl;

//     return 0;
// }

//! In Search Of A Easy Problem

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     bool isHard = false;
//     for(int i = 0; i < n; i++){
//         int num;
//         cin >> num;
//         if(num == 1){
//             isHard = true;
//         }
//     }
//     if(isHard){
//         cout << "Hard" << endl;
//     }
//     else{
//         cout << "Easy" << endl;
//     }
//     return 0;
// }

//! Divisors

// #include <iostream>
// using namespace std;
// int main(){
//     long long int N;
//     cin >> N;
//     for(int i = 1; i <= N; i++){
//         if(N % i == 0){
//             cout << i << endl;
//         }
//     }
//     return 0;
// }