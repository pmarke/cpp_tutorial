// Print the words Hello World to the screen, 
// and waits for user input before terminating. 

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

inline void keep_window_open(){ char ch; cin >> ch;}

int main() {

    string first_name;
    string friend_name;
    char gender;
    int age;

    cout << "Enter the name of the person you want to write to.\n";
    cin >> first_name;

    cout << "Enter the name of a friend.\n";
    cin >> friend_name;

    cout << "What is the gender of your friend (m/f)?";
    cin >> gender;

    cout << "What is the age of the recipient?\n";
    cin >> age;

    cout << "\nDear " << first_name << ",\n\n";

    cout << "I think you are the most amazing person in the entire world! "
         << "What I am trying to say is that there isn't anyone better.\n";
    
    cout << "Have you seen " << friend_name << " lately? ";

    if (gender == 'm') 
        cout << "He is really happy right now.\n";
    else
    {
        cout << "She is really sad right now.\n";
    }

    cout << "Also, I heard that it was your birthday lately, and that you turned " << age << " .";

    if (age < 0 || age > 110) {
        cout << "I don't believe it!\n";
    }
    else {
        cout << "So Happy Birthday!\n";
    }

    cout << "\n\n Sincerly,\nYour Best Friend!\n";
    
}

