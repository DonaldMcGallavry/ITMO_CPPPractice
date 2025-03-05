#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string poem;  
    ofstream outFile("poem.txt");  


    if (!outFile) {
        cerr << "Error.Cannot open file\n";
        return 1; 
    }

    cout << "Enter text(Finish text with empty string):\n";

    while (true) {
        string line;
        getline(cin, line);  

        if (line.empty()) { 
            break;
        }
        poem += line + "\n"; 
    }

    outFile << poem;

    outFile.close();

    cout << "Text is saved in poem.txt.\n";

    return 0;
}