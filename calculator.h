#ifndef CALCULATOR_H
#define CALCULATOR_H
#include "fileProcessor.h"
#include <string>
using namespace std;

class Calculator
{
    public: 
        Calculator();
        
        // SET METHODS
        void addIdAndWeight(int, int);
        void averageWeight();
        void calculateAverageWeight();
        
        // GET METHODS
        int getIdArray(int);
        int getCountArray(int);
        int getWeightArray(int);
        int findDonorIdWithMaximumAverageDonationWeight();
        
    private:
        int arrayLength;
        int idArray[10000]; // array with unique ids of stores
        int countArray[10000]; // array with unique ids of stores
        int weightArray[10000]; // array with weight sum
};
#endif