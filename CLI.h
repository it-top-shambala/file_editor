#ifndef FILE_EDITOR_CLI_H
#define FILE_EDITOR_CLI_H

#include <string>
#include <iostream>

using namespace std;

class CLI {
public:
    static string Input(string message) {
        string str;
        cout << message;
        cin >> str;
        return str;
    }

    static void ShowMessage(string message) {
        cout << message << endl;
    }
};


#endif //FILE_EDITOR_CLI_H
