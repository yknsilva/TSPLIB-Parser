#include "TSPLibParser.h"
#include <ctime>
#include <algorithm>

using namespace std;


// TSPLIB input file constructor
Tsplib::Tsplib(ifstream& inputFile) {
    readProblem(inputFile);
}

// Display full matrix after parser
void Tsplib::printMatrix() {
    for (int i = 0; i < this->dimension; i++) {
        for (int j = 0; j < this->dimension; j++) {
            printf("%d ", this->matrix.getValue(i, j));
        }
        printf("\n");
    }
    printf("\n");
}

// Read the submitted TSPlib file
void Tsplib::readProblem(ifstream& inputFile) {
    string line = "";
    bool isMatrix = 0, successRead = 1;

    while(inputFile) {
        getline(inputFile, line);

        if (line == "EOF" || line == "DISPLAY_DATA_SECTION") {
            break;
        }

        if (line == "EDGE_WEIGHT_SECTION") {
            isMatrix = 1;
        }

        if (line.find(delimiter) != string::npos) {
            string keyword = line.substr(0, line.find(delimiter));
            string value = line.substr(line.find(delimiter) + 1, line.npos);
            
            if (!checkKeyword(trim(keyword), trim(value))) {
                successRead = 0;
                break;
            }
        }

        if (isMatrix) {
            stringstream stream(line);
            int n;
            while (stream >> n) {
                this->numbers.push_back(n);
            }
        }
        
    }
    
    if (!fillMatrix()) {
        successRead = 0;
    }
    
    if (!successRead) {
        cout << "No success on read input file. Exiting..." << endl;
        exit(0);
    }

    Tsplib::printMatrix();
}

// Check and store the value of each keyword
bool Tsplib::checkKeyword(string keyword, string value) {
    if (keyword == "NAME") {
        this->name = value;
    }
    else if (keyword == "TYPE") {
        if ((value == "TSP") || (value == "ATSP")) {
            this->type = value;
        }
        else {
            cout << keyword << " not supported" << endl;
            return 0;
        }
    }
    else if (keyword == "COMMENT") {
        this->comment = value;
    }
    else if (keyword == "DIMENSION") {
        this->dimension = stoi(value);
    }
    else if (keyword == "EDGE_WEIGHT_TYPE") {
        if (value == "EXPLICIT") {
            this->edgeWeightType = value;
        }
        else {
            cout << keyword << " not supported" << endl;
            return 0;
        }
    }
    else if (keyword == "EDGE_WEIGHT_FORMAT") {
        if ((value == "FULL_MATRIX")  || 
                (value == "UPPER_ROW") || 
                (value == "LOWER_ROW") || 
                (value == "UPPER_DIAG_ROW") || 
                (value == "LOWER_DIAG_ROW") || 
                (value == "UPPER_COL") || 
                (value == "LOWER_COL") || 
                (value == "UPPER_DIAG_COL") || 
                (value == "LOWER_DIAG_COL")) {
            this->edgeWeightFormat = value;
        }
        else {
            cout << keyword << " not supported" << endl;
            return 0;
        }
    }
    else if (keyword == "DISPLAY_DATA_TYPE") {
        
    }
    else {
        cout << "Error : Unknown keyword: " << keyword << endl;
        return false;
    }
    return true;
}

string Tsplib::trim(string s) {
    s.erase(std::find_if(s.rbegin(), s.rend(), std::not1(std::ptr_fun<int, int>(std::isspace))).base(), s.end());
    s.erase(s.begin(), std::find_if(s.begin(), s.end(), std::not1(std::ptr_fun<int, int>(std::isspace))));
    return s;
}

// Call the matrix parser function corresponding to the submitted matrix type
bool Tsplib::fillMatrix() {
    Matrix<int> matrix(this->dimension, this->dimension, 999999999);
    this->matrix = matrix;
    
    if (edgeWeightFormat == "FULL_MATRIX") {
        fullMatrix();
    }

    if ((edgeWeightFormat == "UPPER_ROW") or (edgeWeightFormat == "LOWER_COL")) {
        upperRow();
    }

    if ((edgeWeightFormat == "LOWER_ROW") or (edgeWeightFormat == "UPPER_COL")) {
        lowerRow();
    }

    if ((edgeWeightFormat == "UPPER_DIAG_ROW") or (edgeWeightFormat == "LOWER_DIAG_COL")) {
        upperDiagRow();
    }

    if ((edgeWeightFormat == "LOWER_DIAG_ROW") or (edgeWeightFormat == "UPPER_DIAG_COL")) {
        lowerDiagRow();
    }
    
    return true;
}

// Full matrix parser
void Tsplib::fullMatrix() {
    for (int i = 0; i < this->dimension; i++) {
        for (int j = 0; j < this->dimension; j++) {
            if (i != j) {
                matrix.setValue(i, j, this->numbers[i * this->dimension + j]);
            }
        }
    }
}

// Upper diagonal matrix without center diagonal parser
void Tsplib::upperRow(){
    int counter = 0;
    
    for (int i = 0; i < this->dimension - 1; i++) {
        for (int j = i + 1; j < this->dimension; j++) {
            matrix.setValue(i, j, this->numbers[counter]);
            matrix.setValue(j, i, this->numbers[counter]);
            counter++;
        }
    }
}

// Lower diagonal matrix without center diagonal parser
void Tsplib::lowerRow(){
    int counter = 0;
    
    for (int i = 1; i < this->dimension; i++) {
        for (int j = 0; j < i; j++) {
            matrix.setValue(i, j, this->numbers[counter]);
            matrix.setValue(j, i, this->numbers[counter]);
            counter++;
        }
    }
}

// Upper diagonal matrix parser
void Tsplib::upperDiagRow(){
    int counter = 0;
    
    for (int i = 0; i < this->dimension; i++) {
        for (int j = i; j < this->dimension; j++) {
            if (i != j) {
                matrix.setValue(i, j, this->numbers[counter]);
                matrix.setValue(j, i, this->numbers[counter]);
            }
            counter++;
        }
    }
}

// Lower diagonal matrix parser
void Tsplib::lowerDiagRow(){
    int counter = 0;
    
    for (int i = 0; i < this->dimension; i++) {
        for (int j = 0; j < i + 1; j++) {
            if (j != i) {
                matrix.setValue(i, j, this->numbers[counter]);
                matrix.setValue(j, i, this->numbers[counter]);
            }
            counter++;
        }
    }
}