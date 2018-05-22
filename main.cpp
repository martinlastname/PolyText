#include "Director.h"

#include <iostream>
#include <stdio.h>


using namespace std;
int main(int argc, const char* argv[]) {

    Director d;
    char input;

    while (d.running()) {

        cout << "::";
        cin >> input;
        cout << endl;

        switch(input) {
            case 'c':
                cout << "Creating node..." << endl;
                break;
            case 'd':
                cout << "Deleting node.." << endl;
                break;
            case 's':
                cout << "Stopping..." << endl;
                d.stopRunning();
                break;
            default:
                cout << "Invalid statement." << endl;
                break;
        }


    }


    cout << "Closing..." << endl;
    return 0;
}