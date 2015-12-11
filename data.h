#ifndef DATA_H
#define DATA_H
#include <string>
using namespace std;

struct Data {
    int donorId;
    string date;
    int volunteerId;
    int recipientId;
    string partFoodType;
    int partWeight;
    string transport;
    string scale;
};

#endif