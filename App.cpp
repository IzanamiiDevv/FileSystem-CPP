#include<iostream>
#include<fstream>

using namespace std;

int main() {

    std::string text = "";
    std::string file = "names.txt";



    ifstream infile(file);
    if(infile.is_open()) {
        string line;
        while(std::getline(infile, line)) {
            if(line == "justine") {
                cout << "bakulaw" << "\n" << endl;
            }
            line += "\n";
            text += line;
        }
        infile.close();
    }
    
    ofstream outfile(file);
    if(outfile.is_open()) {
        outfile << text << "newtext";
    }
    cout << text << endl;
    return 0;
}