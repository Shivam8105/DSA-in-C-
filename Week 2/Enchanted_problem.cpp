#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "Enter the integers: " << endl;
    cin >> a >> b >> c >> d;
// jb saare inputs alag ho tb ka condition

    if (a != b && a != c && a != d && b != c && b != d && c != d) {
        int min = a;
        if (b < min) {
            min = b;
        }
        if (c < min) {
            min = c;
        }
        if (d < min) {
            min = d;
        }
        cout << min << endl;
    }
// jb saare inputs same ho tb ka condition

    else if (a == b && b == c && c == d) {
        cout << (a + b + c + d) * (a + b + c + d) << endl;
    }
// jb 3 inputs same ho aur ek input alag ho tb ka condition

    else if ((a == b && b == c && c != d) || (a == b && b == d && d != c) || (a == c && c == d && d != b) || (b == c && c == d && d != a)) {
        if (a == b && b == c && c != d) {
            cout << (a - b - c) - d << endl; 
        }
        if (a == b && b == d && d != c) {
            cout << (a - b - d) - c << endl; 
        }
        if (a == c && c == d && d != b) {
            cout << (a - c - d) - b << endl; 
        }
        if (b == c && c == d && d != a) {
            cout << (b - c - d) - a << endl; 
        }
    }
// jb pair mai 2 equal ho tb ka condition

    else if ((a == b && c == d) || (a == c && b == d) || (a == d && b == c)) {
        int sum_of_first_equal = 0;
        int sum_of_second_equal = 0;
        if (a == b && c == d) {
            sum_of_first_equal = a + b;
            sum_of_second_equal = c + d;
        }
        if (a == c && b == d) {
            sum_of_first_equal = a + c;
            sum_of_second_equal = b + d;
        }
        if (a == d && b == c) {
            sum_of_first_equal = a + d;
            sum_of_second_equal = b + c;
        }
        cout << (sum_of_first_equal * sum_of_second_equal) << endl;
    }

// jb ek pair equal ho aur baaki ka unequal ho tb ka condition

    else if ((a == b && c != d && a != c && a != d) || (a == c && b != d && a != b && a != d) || (a == d && b != c && a != b && a != c) || 
             (b == c && a != d && b != a && b != d) || (b == d && a != c && b != a && b != c) || (c == d && a != b && c != a && c != b)) {
        if (a == b && c != d) {
            cout << (a * a) << endl;
        }
        if (a == c && b != d) {
            cout << (c * c) << endl;
        }
        if (a == d && b != c) {
            cout << (d * d) << endl;
        }
        if (b == c && a != d) {
            cout << (c * c) << endl;
        }
        if (b == d && a != c) {
            cout << (b * b) << endl;
        }
        if (d == c && a != b) {
            cout << (d * d) << endl;
        }
    }
    else{
        cout << "Gaand marao code galat hai" << endl;
    } 
}
