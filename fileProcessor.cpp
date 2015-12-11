using namespace std;
#include <iostream>
#include <string>
#include "fileProcessor.h"
#include "data.h"
#include <fstream>
#include <sstream>
#include <cstdlib>

FileProcessor::FileProcessor(){
    arrayIndex = 0;
}

void FileProcessor::openFile(){
    ifstream inFile;
    string fileString;
    inFile.open("donationsData.csv");
    if(inFile.good()){
        getline(inFile, fileString); // we don't need the file topmost row
        while(getline(inFile, fileString)){
            processFile(fileString);
            arrayIndex++;
        }
    }
} // takes filename, returns file content
        
void FileProcessor::processFile(string fileString){
    stringstream csvData(fileString);
    string outputString;
    int counter=0;
    
    while(getline(csvData, outputString, '\t')){ // I want to store data in an array, to then do manipulations to it
        outputString.c_str();
        if (counter==0) data[arrayIndex].donorId = atoi(outputString.c_str());
        if (counter==1) data[arrayIndex].date = outputString.c_str();
        if (counter==2) data[arrayIndex].volunteerId = atoi(outputString.c_str());
        if (counter==3) data[arrayIndex].recipientId = atoi(outputString.c_str());
        if (counter==4) data[arrayIndex].partFoodType = outputString.c_str();
        if (counter==5) data[arrayIndex].partWeight = atoi(outputString.c_str());
        if (counter==6) data[arrayIndex].transport = outputString.c_str();
        if (counter==7) data[arrayIndex].scale = outputString.c_str();
        counter++;
    }
} // takes file content and sets the data array with data objects

Data FileProcessor::getData(int index){
    return data[index];
} // returns array with data objects

int FileProcessor::getArrayIndex(){
    return arrayIndex;
}