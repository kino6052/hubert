using namespace std;
#include <iostream>
#include <string>
#include "fileProcessor.h"
#include "boulderd.h"
#include <fstream>
#include <sstream>
#include <cstdlib>

/*
*  FILE PROCESSOR
*/
FileProcessor::FileProcessor(){
}

string FileProcessor::openFile(string fileName){
    ifstream inFile;
    string fileString;
    inFile.open("csv.csv");
    if(inFile.good()){
        while(getline(inFile, fileString)){
            processFile(fileString);
        }
    }
} // takes filename, returns file content
        
void FileProcessor::processFile(string fileString){
    stringstream csvData(fileString);
    string outputString;
    int counter=0;
    while(getline(csvData, outputString, ',')){ // I want to store data in an array, to then do manipulations to it
        cout<<outputString.c_str()<<endl;
        fileArray[counter]=outputString.c_str();
        counter++;
    }
} // takes file content and sets the data array with data objects
        
void FileProcessor::pushData(const Data*){
}

const Data* FileProcessor::getData(){
} // returns array with data objects