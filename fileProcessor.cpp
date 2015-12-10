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
    arrayIndex = 0;
}

string FileProcessor::openFile(string fileName){
    ifstream inFile;
    string fileString;
    inFile.open("donationsData.csv");
    if(inFile.good()){
        getline(inFile, fileString); // we don't need the file topmost row
        while(getline(inFile, fileString)){
            processFile(fileString);
        }
    }
} // takes filename, returns file content
        
void FileProcessor::processFile(string fileString){
    stringstream csvData(fileString);
    string outputString;
    int counter=0;
    // Variables for dataObject
    int idInput; 
    double latInput; 
    double lngInput; 
    string nameInput; 
    string typeInput; 
    string donor_typeInput; 
    string donor_sqftInput;
    
    while(getline(csvData, outputString, '\t')){ // I want to store data in an array, to then do manipulations to it
        //cout<<outputString.c_str()<<endl;
        outputString.c_str();
        if (counter == 0) idInput = atoi(outputString.c_str());
        if (counter == 1) latInput = atof(outputString.c_str());
        if (counter == 2) lngInput = atof(outputString.c_str());
        if (counter == 3) nameInput = outputString.c_str();
        if (counter == 4) typeInput = outputString.c_str();
        if (counter == 5) donor_typeInput = outputString.c_str();
        if (counter == 6) donor_sqftInput = outputString.c_str();
        counter++;
    }
    Data dataObject(idInput, latInput, lngInput, nameInput, typeInput, donor_typeInput, donor_sqftInput);
    pushData(&dataObject);
    
} // takes file content and sets the data array with data objects
        
void FileProcessor::pushData(Data* dataObject){
    data[arrayIndex] = dataObject;
    arrayIndex++;
}

Data* FileProcessor::getData(int index){
    return data[index];
} // returns array with data objects