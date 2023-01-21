#include <iostream>
#include <fstream>
#include <vector>
#include <bits/stdc++.h>


using namespace std;

int main () {
    // Opening the file
    ifstream file("datalocations.txt");
    ifstream InFile;
    ofstream OutFile("combined.txt");

    vector<string> v;
    vector<string> v2;
    string str;
 
    // Read the next line from File until it reaches the
    // end.
    while (file >> str) {
        // Now keep reading next line
        // and push it in vector function until end of file
        v.push_back(str);
    }

    file.close();
    int data;
    for (auto name : v){

        file.open(name);
        while (file >> data) {
            OutFile << data << " ";
        }
        file.close();

    }

    OutFile.close();
    return 0;
}