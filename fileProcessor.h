#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H
#include <string>
#include "boulderd.h"

using namespace std;

// Class Responsible for Reading Files and Returning Data in Convenient Format
class FileProcessor
{
    public:
        FileProcessor();
        string openFile(string); // takes filename, returns file content
        void processFile(string); // takes file content and sets the data array with data objects
        void pushData(Data*);
        Data* getData(int); // returns array with data objects

    private:
        Data* data[10000]; // array that will store data objects
        int arrayIndex; // index of the current open slot in the array
};

#endif // APPLEFARMER_H