//! Permutation with arrays

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int N;
//     cin >> N;

//     int A[N];
//     int B[N];

//     for (int i = 0; i < N; i++) {
//         cin >> A[i];
//     }
//     for (int i = 0; i < N; i++) {
//         cin >> B[i];
//     }

//     sort(A, A + N);
//     sort(B, B + N);

//     for (int i = 0; i < N; i++) {
//         if (A[i] != B[i]) {
//             cout << "no" << endl;
//             return 0;
//         }
//     }

//     cout << "yes" << endl;
//     return 0;
// }

//! Queue at the school

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[j] == 'B' && s[j + 1] == 'G')
            {
                char temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
                j++;
            }
        }
    }
    cout << s << endl;
    return 0;
}