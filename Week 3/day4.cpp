// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int num = 1;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << num << " ";
//             num += 1;
//         }
//         cout << endl;
//     }
// return 0;
// }

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
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i + 1; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         if (i == 1)
//         {
//             for (int k = 1; k <= n; k++)
//             {
//                 cout << "*";
//             }
//         }
//         else
//         {
//             for (int j = 1; j <= n - i + 1; j++)
//             {
//                 if (j == 1 || j == n - i + 1)
//                 {
//                     cout << "*";
//                 }
//                 else
//                 {
//                     cout << " ";
//                 }
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int num = 1;
//     for(int i = 1; i <= n; i++){
//         if(i == 1){
//             for(int k = 1; k <= n; k++){
//                 cout << num;
//                 num++;
//             }
//         }
//         else{
//             for(int j = 1; j <= n - i + 1; j++){
//                 if(j == 1 || j == n - i + 1){
//                     cout << num;
//                     num++;
//                 }
//                 else{
//                     cout << " ";
//                 }
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = n; i > 0; i--) {
//         for (int j = 1; j <= i; j++) {
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = i; j <= (2 * i - 1); j++)
//         {
//             int num = i;
//             cout << j;
//             num++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

//! print the pattern

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int num = 1;
	cout << num++ << endl;
	for (int i = 2; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < i; j++)
			{
				cout << num << " ";
				num++;
			}
			cout << endl;
		}
		else
		{
			int start = num + i - 1;
			for (int j = 0; j < i; j++)
			{
				cout << start-- << " ";
				num++;
			}
			cout << endl;
		}
	}
	return 0;
}
