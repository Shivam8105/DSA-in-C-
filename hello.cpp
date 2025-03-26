// #include <bits/stdc++.h>
// using namespace std;
// int sum(int a,int b){
//     return a + b;
// }
// int main(){
//     int a,b;
//     cin >> a >> b;
//     cout << sum(a,b) << endl;
// }

//! Compare the Triplet

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int alice[3];
//     int bob[3];
//     int alice1 = 0;
//     int bob1 = 0;
//     for(int i = 0; i < 3; i++){
//         cin >> alice[i];
//     }
//     for(int i = 0; i < 3; i++){
//         cin >> bob[i];
//     }
//     for(int i = 0; i < 3; i++){
//         if(alice[i] > bob[i]){
//             alice1++;
//         }else if(alice[i] < bob[i]){
//             bob1++;
//         }
//     }
//     cout << "[" << alice1 << "," << bob1 << "]" << endl;
// }

//! Print n to 1 without loop

// #include <bits/stdc++.h>
// using namespace std;

// void print(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     cout << n << " ";
//     print(n - 1);
// }

// int main()
// {
//     print(5);
// }

//! print the factorial of a number

// #include <bits/stdc++.h>
// using namespace std;
// int factorial(int n){
//     if(n == 0){
//         return 1;
//     }
//     return n * factorial(n - 1);
// }
// int main(){
//     int n;
//     cin >> n;
//     cout << factorial(n) << endl;
// }

//! Sum Of Array

// #include <bits/stdc++.h>
// using namespace std;

// int sumArray(int arr[], int n){
//     if(n == 0){
//         return 0;
//     }
//     return arr[n - 1] + sumArray(arr, n - 1);
// }

// int main(){
//     int arr[] = {1,2,3,4,5};
//     cout << sumArray(arr,5);
//     return 0;
// }

//! fibonaaci till n sequence

// #include <bits/stdc++.h>
// using namespace std;

// int fibonaaci(int n){
//     if(n <= 1){
//         return n;
//     }
//     return fibonaaci(n - 1) + fibonaaci(n - 2);
// }

// int main(){
//     int n = 5;
//     for(int i = 0; i < n; i++){
//         cout << fibonaaci(i) << " ";
//     }
//     return 0;
// }

//! diagonal difference code

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n][n];

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     int sum1 = 0;
//     for (int i = 0; i < n; i++) {
//         sum1 += arr[i][i];
//     }

//     cout << "sum of first diagonal: " << sum1 << endl;

//     int sum2 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum2 += arr[i][n - 1 - i];
//     }
//     cout << "Sum of second diagonal: " << sum2 << endl;
//     cout << abs(sum2 - sum1) << endl;

// }

//! stairCase

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     for(int i = 0; i < n; i++){
//         for(int j = n - 1; j > i; j--){
//             cout << " ";
//         }
//         for(int j = 0; j <= i; j++){
//             cout << "#";
//         }
//         cout << endl;
//     }
// }

//! Birthday Cake candles

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     long long int n;
//     cin >> n;
//     long long int arr[n];
//     int count = 0;
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     int max = 0;
//     for(int i = 0; i < n; i++){
//         if(arr[i] > max){
//             max = arr[i];
//         }
//     }
//     for(int i = 0; i < n; i++){
//         if(arr[i] == max){
//             count++;
//         }
//     }
//     cout << count << endl;

// }

//! Time Conversion

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin >> s;
//     if(s == "12:00:00PM"){
//         cout << "00:00:00" << endl;
//     }else{
//         s += "12:00:00";
//         cout << s << endl;
//     }
// }