// Print the words Hello World to the screen, 
// and waits for user input before terminating. 

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <math.h>

using namespace std;

inline void keep_window_open(){ char ch; cin >> ch;}

// int main() {

// // Value initialized at compile time and not run time.
// constexpr double kPI {3.14159};

// int num1 = 5;
// int num2 = 5;

// // Const, an object whose value is initialized at runtime, but cannot change once initialized.
// const int num3 = num1+5;



// std::cout << ++num1 << std::endl;
// std::cout << num2++ << std::endl;

// return 0;
    
// }

// ////////////////////////////////////////////////////////////////////////////////////////
// int main() {



// for (int i = 0; i < 100; ++i) {

//     std::cout << char(i) << "\t" << i << endl;
  
// }

// return 0;
    
// }

// ////////////////////////////////////////////////////////////////////////////////////////

// int square (int num) {


//     int square = 0;
//     for (int i = 0; i<num; ++i) square +=num;

//     return square;


// }

// int main() {


// int num = 7;
// cout << "square of " << num << " = " << square(num) << endl;

// return 0;
    
// }

// ////////////////////////////////////////////////////////////////////////////////////////


// bool ascending_sort(double i, double j) {return (i<j);}

// int main() {


// vector<int> nums {5,2,3,4}; // Initializing vector
// vector<string> words(1);    // Declaring vector of size 1

// // Range for loop, for each int x in nums
// for(int x : nums)
//     std::cout << x << std::endl;

// vector<double> temps;
// for(double temp; cin >> temp;)
//     temps.push_back(temp);

// double sum=0;
// for (double x: temps) sum+=x;
// cout << "average temp " << sum/temps.size() << endl;

// std::sort(temps.begin(), temps.end(),ascending_sort);
// std::cout << "median temp " << temps[temps.size()/2] << endl;

// return 0;
    
// }

////////////////////////////////////////////////////////////////////////////////////////
// The Drills

// template<class T>
bool ascending_sort(double i, double j) {return (i<j);}

double convert_to_meters(double num, char unit) {
    constexpr double cm_2_m{100};        // conversion cm to m
    constexpr double cm_2_in{2.54};      // conversion cm to inches
    constexpr double in_2_ft{12};        // conversion in to ft

    double conversion = 0;

    switch (unit)
    {
    case 'c':
        conversion = num/cm_2_m;
        break;
    case 'i':
        conversion = num*cm_2_in/cm_2_m;
        break;
    case 'f':
        conversion = num*in_2_ft*cm_2_in/cm_2_m;
        break;
    case 'm':
        conversion = num;
        break;
    default:
        conversion = NAN;
        break;
    }

    return conversion;

}

int main() {

    double smallest = NAN;
    double largest = NAN;
    double current = 0;
    char unit;

    vector<double> nums;

    while (cin >> current >> unit)
    {
        current = convert_to_meters(current, unit);
        if (isnan(current)) {
            cout << "The unit " << unit << " was not recognized" << endl;
        }
        else {
            nums.push_back(current);
            if (isnan(smallest)) {
                smallest = current;
                largest = current;

                // cout << current << " is the largest and smallest so far " << endl << endl;
            } 
            else if (current < smallest ) {
                smallest = current;
                // cout << smallest << " is the smallest so far " << endl << endl;
            } 
            else if (current > largest) {
                largest = current;
                // cout << largest << " is the largest so far " << endl << endl;
            } 
            else;
            // {
            //     // cout << current << " is neither the smallest or largest " << endl << endl;
            // }
        }  
        

    }

    double sum = 0;
    for (double val : nums) sum+=val;

    sort(nums.begin(),nums.end(),ascending_sort);

    std::cout << "Number of values entered " << nums.size() << endl;
    std::cout << "The smallest value enterd " << smallest << endl;
    std::cout << "The largest value entered " << largest << endl;
    std::cout << "The sum of the values entered " << sum << endl;


    return 0;
}