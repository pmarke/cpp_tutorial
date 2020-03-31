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

Token get_token() 
{
    
}

double expression() {
    double left = term();
    Token t = get_token();
    while(true) {
        switch (t.kind)
        {
        case '+':
            left+= term();
            t = get_token();
            break;
        case '-':
            left-=term();
            t = get_token();
            break;
        default:
            return left;
        }
    }
}

double term() {
    double left = primary();
    Token t = get_token();
    while(true) {
        switch (t.kind)
        {
        case '*':
            left*=primary();
            t=get_token();
            break;
        case '/':
            double d = primary();
            if (d==0) __throw_domain_error;
            left/=d;
            t=get_token();
            break;
        // case '%':
        //     left%=primary();
        //     t=get_token();
        //     break;
        default:
            return left;
        }
    }
}

double primary() {
    Token t = get_token();
    switch(t.kind) {
        case '(':
        {
            double d = expression();
            t=get_token();
            if(t.kind != ')') __throw_invalid_argument("no matching right parenthases");
            return d;
        }
        case '8':
            return t.val;
        default:
            throw std::invalid_argument("Primary expected");
    }
}

class Token_stream {
    public:
        Token get();
        void putback(Token t);

    private:
        bool full{false};
        Token buffer;

};

void Token_stream::putback(Token t) {
    if (full) throw std::logic_error("buffer is full");
    buffer = t;
    full = true;
}

Token Token_stream::get()
{
    if(full){
        full = false;
        return buffer;
    }

    char ch;
    cin >> ch;

    switch (ch)
    {
    case ';':     // for print
    case 'q':     // for quit
    case '(': case ')': case '+': case '-': case '*': case '/':
        return Token{ch};
    case '.':
    case '0': case '1': case '2': case '3': case '4': case '5':
    case '6': case '7': case '8': case '9':
    {
        cin.putback(ch);
        double val;
        cin >> val;       // read in a floating point number
        return Token{'8',val};
    }    
    default:
        __throw_invalid_argument("Bad Token");
    }
}

int main() {

char input;  // Operation
double result=0;

cout << "Please enter in an expression. (We can handle + and -)"<< endl;


try {
    while(cin)
        cout << expression() << std::endl;
}
catch (const exception& e) {
    std::cerr << e.what() << std::endl;
    return 1;
}
catch (...){
    cerr << "exception" << std::endl;
    return 2;
}


return 0;
    
}

