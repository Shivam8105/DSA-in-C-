//! When

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int hour = 21;
//     int min = 0;
//     int k;
//     cin >> k;
//     int c = k / 60;
//     int j = k % 60;
//     for (int i = 1; i <= k; i++)
//     {
//         if (i < 60)
//         {
//             min++;
//         }
//         else if (i > 60)
//         {
//             min = 0;
//             hour = 21;
//             hour = hour +  c;
//             min = min + j;
//         }
//         else if (i == 60)
//         {
//             min = 0;
//             hour = 21;
//             hour ++;
//         }
//     }
//     cout << hour << ":" << (min < 10 ? "0" : "") << min << endl;
//     return 0;
// }

//! Again Twenty five!

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long int n;
//     cin >> n;
//     long long int num = pow(5, n);
//     int last_digit = num % 10;
//     num = num / 10;
//     int second_last_digit = num % 10;
//     cout << second_last_digit << last_digit;
//     return 0;
// }

//! Rotate

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int> > arr(n, vector<int>(n));  
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++)
            arr[i][j] = s[j] - '0';  
    }
    
    if (n == 1) {
        cout << arr[0][0] << endl;
        return 0; 
    }

    int lost = arr[0][0];  


    for (int i = 1; i < n; i++) {
        arr[i - 1][0] = arr[i][0];
    }


    for (int j = 1; j < n; j++) {
        arr[n - 1][j - 1] = arr[n - 1][j];
    }

    // Shift the last column up
    for (int i = n - 2; i >= 0; i--) {
        arr[i + 1][n - 1] = arr[i][n - 1];
    }

    // Shift the first row right
    for (int j = n - 2; j > 0; j--) {
        arr[0][j + 1] = arr[0][j];
    }

    // Restore the lost value to arr[0][1]
    arr[0][1] = lost;

    // Print the modified matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j];  
        }
        cout << endl;
    }

    return 0;
}
