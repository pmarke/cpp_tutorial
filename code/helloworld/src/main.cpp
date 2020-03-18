// Print the words Hello World to the screen, 
// and waits for user input before terminating. 

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

inline void keep_window_open(){ char ch; cin >> ch;}

// int main() {

//     cout << "Hello, programming!\n";
//     cout << "Here we go!\n";

//     keep_window_open();
//     return 0;
// }

/////////////////////////////////////////

// int main() {

//     cout << "Please enter your first name and age(followed by 'enter'):\n";
//     string frist_name;
//     double age;
//     cin >> frist_name >> age;
//     cout << "Hello, " << frist_name << ". You are  " << age*12 << " months old !\n" << endl;

//     return 0;
// }

//////////////////////////////////

// int main() {

//     cout << "Please enter a floating-point value: ";
//     double n;
//     cin >> n;

//     cout << "n == " << n << endl;
//     cout << "n+1 == " << n++ << endl;
//     cout << "3xn == " << 3*n << endl;
//     cout << "n+n == " << n+n << endl;
//     cout << "n*n == " << n*n << endl;
//     cout << "n/2 == " << n/2 << endl;
//     cout << "sqrt(n) == " << sqrt(n) << endl;
//     cout << "n>5 == " << (n > 5.0) << endl;



//     return 0;
// }

//////////////////////////////////

// int main() {

//     string previous = "";
//     string current;
//     string clean_sentence = "";
//     while(cin>>current) {
//         if(previous == current)
//             cout << "repreated word: " << current << endl;
//         else
//         {
//             clean_sentence += " ";
//             clean_sentence += current;
//         }
            
//         previous = current;
//     }

//     cout << clean_sentence << endl;


//     return 0;
// }

//////////////////////////////////

int main() {

    double d = 0;
    while (cin >> d) {

        int i {d};   // This initialization is c++11 and checks for narrowing conversions.
        char c {i};
        int i2 {c};

        cout << "d == " << d << endl
             << "i == " << i << endl
             << "i2 == " << i2 << endl
             << "c == " << c << endl;


    }


    return 0;
}