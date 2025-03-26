//! Water Station

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 0 || n > 100) {
        return 0;
    }
    int previous_stop = (n / 5) * 5;
    int next_stop = ((n / 5) + 1) * 5;

    int p = n - previous_stop;
    int x = next_stop - n;

    if (p <= x) {
        cout << previous_stop << endl;
    } else {
        if (next_stop > 100) {
            cout << previous_stop << endl;
        } else {
            cout << next_stop << endl;
        }
    }
    return 0;
}

//! Full House

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int A, B, C, D, E;
//     cin >> A >> B >> C >> D >> E;
//     if (A == B && A == C && D == E)
//     {
//         cout << "yes" << endl;
//     }
//     else if (A == B && B == D && C == E)
//     {
//         cout << "yes" << endl;
//     }
//     else if (A == B && B == E && C == D)
//     {
//         cout << "yes" << endl;
//     }
//     else if (B == C && C == D && A == E)
//     {
//         cout << "yes" << endl;
//     }
//     else if (B == D && D == E && A == C)
//     {
//         cout << "yes" << endl;
//     }
//     else if (B == E && E == C && D == A)
//     {
//         cout << "yes" << endl;
//     }
//     else if (A == E && E == C && B == D)
//     {
//         cout << "yes" << endl;
//     }
//     else if (D == E && D == C && A == B)
//     {
//         cout << "yes" << endl;
//     }
//     else if (A == D && A == C && B == E)
//     {
//         cout << "yes" << endl;
//     }
//     else{
//         cout << "no" << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5];
    int three = 0;
    int two = 0;
    int count[14] = {0};
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        count[arr[i]]++;
    }
    for (int i = 1; i <= 13; i++)
    {
        if (count[i] == 3)
        {
            three++;
        }
        else if (count[i] == 2)
        {
            two++;
        }
    }

    if (three == 1 && two == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}


//! Beautiful year 

// #include <bits/stdc++.h>
// using namespace std;

// bool distinct(int year)
// {
//         string s = to_string(year);
//         if(s[0] != s[1] && s[1] != s[2] && s[2] != s[3] && s[0] != s[2] && s[1] != s[3] && s[0] != s[3]){
//             return true;
//         }
//         else{
//             return false;
//         }
// }


// int main()
// {
//     int year;
//     cin >> year;

//     while (true){
//         year++;
//         if(distinct(year)){
//             cout << year << endl;
//             break;
//         }
//     }
//     return 0;
// }