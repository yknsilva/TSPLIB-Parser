#ifndef TSPLIB_H
#define	TSPLIB_H

#include <string>
#include <iostream>
#include <fstream>
#include "./Matrix.h"

using namespace std;

class Tsplib {
private:
    const char delimiter = ':';

    string name;
    string type;
    string comment;
    int dimension;
    string edgeWeightType;
    string edgeWeightFormat;
    
    vector<int> numbers;    // Submitted matrix in the TSP file, on only one line
    Matrix<int> matrix;     // Interpreted Matrix, usable for the Little algorithm
    
    void readProblem(ifstream&);
    bool checkKeyword(string, string);
    string trim(string);
    bool fillMatrix();
    void fullMatrix();
    void upperRow();
    void lowerRow();
    void upperDiagRow();
    void lowerDiagRow();
    void printMatrix();
    
public:
    Tsplib(ifstream&);
};

#endif	/* TSPLIB_H */