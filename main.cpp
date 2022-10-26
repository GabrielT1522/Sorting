// CSCE 3301 - Algorithms and Data Structures
// main.cpp
// Sorting
//
// Created by Gabriel Torres on 10/26/22.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int sortType, n;
    srand(time(NULL));   // Initiate random generator seed
    sortType = rand() % 3; // First random number is either 0, 1, or 2
    n = rand() % 20 + 2; // Second random number is between 1 and 20
    ofstream outFile("/Users/gabrieltorres/CLionProjects/Sorting/numbers.txt");
    outFile << sortType << endl << n << endl;
    // Insert n random numbers between 1 and 100 into the file
    for (int i = 0; i < n; i++) {
        outFile << rand() % 100 + 1 << endl;
    }
    outFile.close();

    int dataArray[n];

    ifstream inFile("numbers.txt");
    inFile >> sortType >> n;
    for (int i = 0; i < n; i++) {
        inFile >> dataArray[i];
    }
    inFile.close();

    return 0;
}
