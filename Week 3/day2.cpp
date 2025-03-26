//! isPrime

// #include <iostream>
// using namespace std;
// int main()
// {
//     long long int X;
//     cin >> X;
//     int c = 2;
//     if(X < 2){
//         cout << "NO" << endl;
//         return 0;
//     }
//     while (c * c <= X)
//     {
//         if (X % c == 0)
//         {
//             cout << "NO" << endl;
//             return 0;
//         }
//         c++;
//     }
//     cout << "YES" << endl;
//     return 0;
// }

//! pattern Z in HackerEarth

#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int cnt = n;
	for(int i = 1; i <= n; i++){
		if(i == 1 || i == n){
			for(int j = 1; j <= cnt; j++){
				cout << "*";
			}
			cout << endl;
		}
		else{
			for(int k = 1; k <= n-i; k++){
				cout << " ";
			}
			cout << "*" << endl;
		}
	}
}

//! Fibonaaci Sequence

// #include <iostream>
// using namespace std;
// int main(){
//     int N;
//     long long int x = 0;
//     long long int y = 1; 
//     long long int z;
//     cin >> N;
//     if(N == 1){
//         cout << x << endl;
//         return 0;
//     }
//     else if(N == 2){
//         cout << y << endl;
//         return 0;
//     }

//     for(int i = 3; i <= N; i++){
//          z = x + y;
//          x = y;
//          y = z;
//     }
//     cout << z << endl;
//     return 0;
// }
