#include<iostream>
#include<fstream>

using namespace std;

int main() {
    ofstream outfile("test.txt");
    if(outfile.is_open()) {
        outfile << "Hello World" << endl;
        outfile.close();
    } else {
        cerr << "Error On Writing File" << endl;
    }
    return 0;
}