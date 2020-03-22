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

class Token {
    public:
        char kind;
        double val;
};

// Computes the bilinear operations (+,-,*,/)
double bilinear_operation(double lval, char op, double rval)
{
    double result;
    switch (op)
    {
    case '+' :
        result = lval+rval;
        break;
    case '-' :
        result = lval-rval;
        break;
    case '*' :
        result = lval*rval;
        break;
    case '/' :
        if (rval == 0)
            throw domain_error{"Can't divide by zero!"};
        else
            result = lval / rval;
        break;
    default:
        throw invalid_argument{"operator: " + string{&op} + " not understood!"};
        break;
    }
    return result;
}

Token get_token(char input) 
{
    
}

int main() {

char input;  // Operation
double result=0;

vector<Token> toks;

cout << "Please enter in an expression. (We can handle + and -)"<< endl;

while(cin >> input)
{
    toks.push_back(get_token(input));
}

try {
    result = bilinear_operation(lval,op,rval);
}
catch (const exception& e) {
    std::cerr << e.what() << std::endl;
}

std::cout << "Result: " << result << std::endl;
std::cout << "token val: " << t.val << std::endl;


return 0;
    
}

