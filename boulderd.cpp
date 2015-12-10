///this is from boulderd.cpp

using namespace std;
#include <iostream>
#include <string>
#include "boulderd.h"

Data::Data(int idInput, double latInput, double lngInput, string nameInput, string typeInput, string donor_typeInput, string donor_sqftInput){
    id = idInput;
    lat = latInput;
    lng = lngInput;
    name = nameInput;
    type = typeInput;
    donor_type = donor_typeInput;
    donor_sqft = donor_sqftInput;
}

int Data::getId(){
    return id;
}

double Data::getLat(){
    return lat;
}

double Data::getLng(){
    return lng;
}

string Data::getName(){
    return name;
}

string Data::getType(){
    return type;
}

string Data::getDonorType(){
    return donor_type;
}

string Data::getDonorSqft(){
    return donor_sqft;
}