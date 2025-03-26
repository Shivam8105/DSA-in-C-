//! factorial using recursion

// #include <iostream>
// using namespace std;

// int factorial(int n){

//     //! Base Case
//     if(n == 0) return 1;

//     // int chotti = factorial(n - 1);
//     // int badi = n * chotti;

//     //! Recursion Relation
//     return n * factorial(n - 1);

// }

// int main(){
//     int n;
//     cin >> n; 
//     int ans = factorial(n);
//     cout << ans << endl;
//     return 0;
// }


//! print numbers 

// #include <bits/stdc++.h>
// using namespace std;

// int num(int n){
    //! Base Condition

    // if (n == 0) return 1;

    // recursive relation

//     cout << n << endl;

//     return num(n - 1);
// }

// int main(){
//     num(7);
// }


//! factorial using tail recursion

import java.util.Scanner;

public class Factorial {
    public static int factorialTailRecursion(int n, int accumulator) {
        if (n == 0) {
            return accumulator; 
        }
        return factorialTailRecursion(n - 1, n * accumulator);
    }
    public static int factorial(int n) {
        return factorialTailRecursion(n, 1); 
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n = sc.nextInt();
        int ans = factorial(n);
        System.out.println("Factorial: " + ans);
        
        sc.close();
    }
}
