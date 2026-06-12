#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main() {
    string name;
    
    string userInput;
    while (name.empty()) {
        system("espeak 'Please enter your name'");
        cout << "Please enter your name: ";
        getline(cin, name);
        if (name.empty()) {
        cout << "Name is required!" <<endl;
        system("espeak -s 130 ' Name is required!'");
        cout << "Name is required!" <<endl;
    }
    }
    cout << "\nWelcome " <<name <<"!" <<endl;
    string welcome = "espeak \"Welcome ";
    welcome += name ;
    welcome += "\"";
    system(welcome.c_str());    
    int choice;
    cout << "Lesson-1 Home Row" <<endl;
    system("espeak -s 130 ' Lesson-1 Home Row'");
    cout << "Lesson-2. Home Row test" <<endl;
    system("espeak -s 130 ' Lesson-2 Home Row test'");
    cout << "Lesson-3 Upper Row" <<endl;
    system("espeak -s 130 ' Lesson-3 Upper Row'");
    cout << "Lesson-4 Upper Row test";
    system("espeak -s 130 ' Lesson-4 Upper Row test'");
    cin >> choice;
    if (choice == 1) {
        cout << "Starting Lesson-1" <<endl;
        system("espeak ' -s 130 Starting Lesson-1'");
    }
    else if (choice == 1) {
        cout << "Starting Lesson-2";
        system("espeak -s ' Starting Lesson-2'");
    }
    else if (choice == 1) {
        cout << "Starting Lesson-3";
        system("espeak -s ' Starting Lesson-3'");
    }
    else if(choice == 1) {
        cout << "Starting Lesson-4";
        system("espeak -s ' Starting Lesson-4'");
    }
    cout << "Please enter to next...";
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
    cout << "Type q:";
    system("espeak -s 130 ' Type, q:'");
    system("espeak -s 130 ' The q is second key in the Upper Row'");
    getline(cin, userInput);
    cout << "Type q:";
    getline(cin, userInput);
    return 0;
}