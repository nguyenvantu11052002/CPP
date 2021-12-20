#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin;
    fin.open("PTIT.in");
    ofstream fout;
    fout.open("PTIT.out");
    while (!fin.eof()) {
        string line;
        getline(fin, line);
        fout << line << endl;
    }
    fin.close();
    fout.close();
    return 0;
}
