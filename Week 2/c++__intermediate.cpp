//!scope = refers to the region of the program where a particular variable or function is accessible.

// #include <iostream>
// using namespace std;
// int i = 5;
// int main(){
//     int i = 6;
//     cout << i << endl;
//     cout << ::i << endl;
// }

//! :: -> scope resolution operator = we use it to differentiate between the global and local scope.mainly used to access members of a scope.

// local variables have higher priority than global variables


//! Loops = are used to repeat a block of code until some condition is satisfied.

//! For loop -> when we want to iterate our code multiple times and we know in advance that how many times we want our repeat our code.

// #include <iostream>
// using namespace std;
// int main(){
    // for(int i = 1; i <= 5; i += 2){
    //     cout << i << endl;
    //     cout << "hello" << endl;
    // }
//     for(int i = 1, j = 3; i <= 5 && j <= 5; i++, j += 2){
//         cout << "hello" << endl;
//     }
// }

// PreIncrement -> value of the variable is first icremented then used in the expression.'
//++x'
// PostIncrement -> value of the variable is first used in the expression then incremented.'x++'


//! While loop -> it is used to repeat a block of code as long as a specified condition is true.

// #include <iostream>
// using namespace std;
// int main(){
//     int i = 5;
//     while(i--){
//         cout << "Hello" << endl;
//     }
// }



//! Do-While -> first do the task then run the loop

// #include <iostream>
// using namespace std;
// int main(){
//     int i = 5;
//     do{
//         cout << "Hello" << endl;
//         i --;
//     }while(i > 0);
// }


//! Break -> this statement exits the current / innermost loop when executed.


// #include <iostream>
// using namespace std;
// int main(){
//     int sum = 0;
//     for(int i = 0; i < 5; i++){
//         sum += i;
//         if(sum < 6){
//             cout << "Hello" << endl;
//         }
//         else{
//             break;
//         }
//     }
// }

//! Continue -> it is used to skip the current iteration and move to the next iteration.

// #include <iostream>
// using namespace std;
// int main(){
//     int sum = 0;
//     for(int i = 0; i < 10; i++){
//         sum += i;
//         if(sum != 6){
//             cout << "Hello" << endl;
//         }
//         else{
//             continue;
//         }
//     }
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int sum = 0;
//     for(int i = 0; i < 10; i++){
//         sum += i;
//         if(sum < 6){
//             cout << "I got a value" << endl;
//             continue;
//         }
//         if(sum < 8){
//             cout << "Hello" << endl;
//         }
//         else{
//             cout << "Bye" << endl;
//         }
//     }
// }


//! Arrays -> An array is a collection of multiple items of the same datatype.
// Arrays are ordered.
// The size of an array cannot be changed.
// datatype Name[size]

