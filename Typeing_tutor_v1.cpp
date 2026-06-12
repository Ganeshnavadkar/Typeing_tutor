#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main() {
    string name;
    string practiceText = "q w e r t y u i o p";
    string userInput;
    cout << "\nTypeing tutor Game " <<endl;
    system("espeak 'Please enter your name'");
    cout << "Please enter your name: ";
    getline(cin, name);
    cout << "\nWelcome " <<name <<"!" <<endl;
    string welcome = "espeak \"Welcome ";
    welcome += name ;
    welcome += "\"";
    system(welcome.c_str());
    cout << "Please enter to start the Game...";
    system("espeak  'Press enter key to next...'");
    cin.get();
    system("espeak ' We are Practiceing only Upper Row'");
    system("espeak 'The Upper Row is our 3th line of thekeybord Is call as Upper Row'");
    system("espeak 'q, w, e, r, t, y, u, i, o, p' ");
    system("espeak 'This Is call Upper Row' " "!");
    system("espeak 'Press enter to start the Game... ' ");
    cin.get();
    system("espeak 'We are practiceing fingerposition on the Row'");
    system("espeak 'Left Little Finger  : q'");
    system("espeak ' Ring finger   : w'");
    system("espeak ' Left Middle Finger  : e'");
    system("espeak ' Left Index finger  : r and t'");
    system("espeak ' Right Index Finger  : y & u'");
    system    ("espeak ' Right Middle Finger  : i'");
    system("espeak ' Right Ring Finger  : 'o");
    system("espeak ' Right Little Finger  : p'");
    
    system("espeak ' Please enter to Next...'");
    cin.get();
    system("espeak ' Type q'");
    getline(cin, userInput);
    if  (userInput == " q '") {
        system("espeak ' Good job'" "!" "Your answer is correct");
    }
    else{
        system("espeak ' Your answer is Incorrect'");
        system("espeak ' Correct answer is: '" "q");
    }
    getline(cin, userInput);
    return 0;
}