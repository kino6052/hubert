#include <string>
#include <iostream>
#include "boulderd.h"
#include "fileProcessor.h"

using namespace std;

int main(){
    Data test(1, 1.0, 1.0, "test", "test", "test", "test");
    cout<<test.getDonorSqft()<<endl;
    FileProcessor fp;
    string str = "csv.csv";
    fp.openFile(str);
    return 0;
}





/*

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include "boulderd.h"

using namespace std;

int main()
{

    cout<<"Welcome message goes here."<<endl;
    //their program also needs a loop that will display the menu over and over
    cout<<"Select a store from the menu:"<<endl;
    cout<<"1. Alfalfa's"<<endl;
    cout<<"2. C4C"<<endl;
    cout<<"3. Sprouts Market Arapahoe"<<endl;
    int storeID;
    int searchID = 0;
    cin>>storeID;
    cin.ignore();
    //this only works for one store
    if(storeID == 1){
        searchID = 4;
    }
    Donor alfalfas("Alfalfa's");
    Donor C4C("C4C");
    Donor sprouts("Sprouts Market Arapahoe");

    ifstream inFile;
    string data;
    int counter = 0;
    inFile.open("donationDataFixed.csv");
    if(inFile.good()){
        cout<<"away we go"<<endl;
        getline(inFile, data); //header row
        int donorID;
        string date;
        while(getline(inFile, data)){
            stringstream csvData(data);
            string temp;
            counter = 0;
            while(getline(csvData, temp, ',')){
                if(counter == 0){
                    donorID = atoi(temp.c_str());
                }
                else if(counter == 1){
                    date = temp;
                }
                counter++;
            }

            if (donorID == searchID){
                //read the donation amount and write the date and amount to the arrays
                alfalfas.updateDayLabels(date);
                alfalfas.updateDaysOfData();
                cout<<"alfalfas found"<<endl;
            }

    }
    }
    cout<<alfalfas.getDaysOfData()<<" data points for "<<alfalfas.getName()<<endl;
    return 0;
}




*/