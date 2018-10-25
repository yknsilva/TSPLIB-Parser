#include "./commons/TSPLibParser.h"
#include <string>
#include <unistd.h>
#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
    string file = argv[1];

    ifstream inputFile(file);

    if (!inputFile) {
        cout << "Error : Input file not found" << endl;
        exit(0);
    }

    Tsplib parser(inputFile);
}