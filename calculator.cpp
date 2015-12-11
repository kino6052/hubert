#include "data.h"
#include "calculator.h"
#include <string>
using namespace std;

Calculator::Calculator(){arrayLength=0;};

void Calculator::addIdAndWeight(int idInput, int weightInput){
    int counter=0;
    while (counter<arrayLength){
        if (idArray[counter] == idInput){ //if id is in the array
            countArray[counter]++;
            return;
        }
        counter++;
    }
    countArray[arrayLength]++;
    idArray[arrayLength] = idInput;
    weightArray[arrayLength] += weightInput; // add weights to then divide by the number of times store shows up
    arrayLength++;
    
};

int Calculator::getIdArray(int index){
    return idArray[index];
}

int Calculator::getCountArray(int index){
    return countArray[index];
}

int Calculator::getWeightArray(int index){
    return weightArray[index];
}

void Calculator::calculateAverageWeight(){
    for (int i=0; i<arrayLength; i++){
        weightArray[i] = weightArray[i]/countArray[i];
    }
}

int Calculator::findDonorIdWithMaximumAverageDonationWeight(){
    int max = 0;
    int index = 0;
    for (int i=0; i<arrayLength; i++){
        if (weightArray[i] > max){
            max = weightArray[i];
            index = i;
        }
    }
    return idArray[index];
}