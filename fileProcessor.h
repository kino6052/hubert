#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H
#include <string>
#include "data.h"

using namespace std;

// Class Responsible for Reading Files and Returning Data in Convenient Format
class FileProcessor
{
    public:
        FileProcessor();
        
        // SET METHODS
        void openFile(); // takes filename, returns file content
        void processFile(string); // takes file content and sets the data array with data objects
        
        // GET METHODS
        Data getData(int); // returns array with data objects
        int getArrayIndex();
    private:
        Data data[10000]; // array that will store data objects
        int arrayIndex; // index of the current open slot in the array
};

#endif // APPLEFARMER_H