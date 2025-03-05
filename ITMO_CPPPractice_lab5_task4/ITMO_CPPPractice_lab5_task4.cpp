#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int performOperation(const vector<string>& args) {

    if (args.size() != 4) {
        cerr << "Error.Incorrect number of elements\n";
        return -1; 
    }
    if (args[1] != "-a" && args[1] != "-m") {
        cerr << "Error. Incorrect flag\n";
        return -1;  
    }
   

    int num1 = stoi(args[2]);  
    int num2 = stoi(args[3]);

    if (num1 == 0 && args[2][0] != '0') {
        std::cerr << "Error. Incorrect first number\n";
        return -1;
    }
    if (num2 == 0 && args[3][0] != '0') {
        std::cerr << "Error. Incorrect second number\n";
        return -1;
    }

    if (args[1] == "-a") {
        return num1 + num2;  
    }
    else if (args[1] == "-m") {
        return num1 * num2;  
    }

    return -1;  
    
}

int main() {
    string input;
    cout << "Enter the elements: ";
    getline(cin, input); 

    vector<string> args;
    stringstream ss(input);
    string token;

    while (ss >> token) {
        args.push_back(token); 
    }


    int result = performOperation(args);

    if (result != -1) {
       cout << "Result: " << result << "\n";
    }
    else {
        cerr << "Error.\n";
    }

    return 0;
}