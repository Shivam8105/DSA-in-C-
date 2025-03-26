//! Word

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin >> s;
//     int countLower = 0;
//     int countUpper = 0;
//     for(int i = 0; i < s.length(); i++){
//         if(islower(s[i])){
//             countLower++;
//         }else{
//             countUpper++;
//         }
//     }
//     if(countLower > countUpper || countLower == countUpper){
//         for(int i = 0; i < s.length(); i++){
//             s[i] = tolower(s[i]);
//         }
//     }else {
//         for(int i = 0; i < s.length(); i++){
//             s[i] = toupper(s[i]);
//         }
//     }
//     cout << s;
//     return 0;
// }

//! Even Array

// #include <iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int a[n];
//         for (int i = 0; i < n; ++i)
//         {
//             cin >> a[i];
//         }
//         int odd = 0;
//         int even= 0;
//         for (int i = 0; i < n; ++i)
//         {
//             if (i % 2 == 0)
//             {
//                 if (a[i] % 2 != 0)
//                 {
//                     odd++;
//                 }
//             }
//             else
//             {
//                 if (a[i] % 2 == 0)
//                 {
//                     even++;
//                 }
//             }
//         }
//         if (odd == even)
//         {
//             cout << odd << endl;
//         }
//         else
//         {
//             cout << -1 << endl;
//         }
//     }
//     return 0;
// }
