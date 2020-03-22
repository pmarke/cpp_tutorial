// Print the words Hello World to the screen, 
// and waits for user input before terminating. 

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <math.h>
#include <stdexcept>

using namespace std;

inline void keep_window_open(){ char ch; cin >> ch;}

class My_exception : public logic_error {

public: 
    My_exception(string what) : logic_error(what) {
        foo = 2;
    }

    int foo;


};

int area(int length, int width) {
    if(length<=0 || width <=0) throw My_exception{"At least one argument is not positive"};
    return length*width;
}

int main() {

try{
    int x = -1;
    int y = 2;
    int z = 4;

    int area1 = area(x,y);
}
// catch(const out_of_range& e){}
catch(const My_exception& ia) {
    cout << ia.what() << endl;
    cout << ia.foo << endl;
}


return 0;
    
}

