#include<iostream>
#include<fstream>

using namespace std;

int main() {
    ifstream infile("test.txt");
    if(infile.is_open()) {
        string line;
        while(getline(infile,line)) {
            cout << line << endl;
        }
    }else {
        cerr << "Error Reading the File" << endl;
    }
    return 0;
}