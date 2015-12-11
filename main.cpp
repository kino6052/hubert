#include <string>
#include <iostream>
#include "data.h"
#include "fileProcessor.h"
#include "calculator.h"

using namespace std;

int main(){
    string goodByeMsg="";
    // Create File Processing Object to Open File and Read Contents
    FileProcessor fp;
    // Open File
    fp.openFile();
    // Get Length of the Resulting Array with Objects Representing Data
    int objectArrayLength = fp.getArrayIndex();
    char input;
    while(true){
        cout<<"#############\n\nWELCOME!\n\nThis program calculates what store (by Id) donates most (lbs) on average.\n\nDo you want to know what store it is?\n\nType Y or N."<<endl;
        cin>>input;
        cin.ignore();
        if (input == 'N') {
            break;
        }
        else {
            // Create Object That Will Perform Calculations
            Calculator calculator;
            for (int i=0; i<objectArrayLength; i++){
                // For Every Data Object Add Data in Arrays That Will be Used for Calculations
                calculator.addIdAndWeight(fp.getData(i).donorId, fp.getData(i).partWeight);
            }
            // Devide resulting sum of donation weights by how many times the store donated (countArray)
            calculator.calculateAverageWeight();
            cout<<"The store id that donates most on average: "<<calculator.findDonorIdWithMaximumAverageDonationWeight()<<endl<<endl;
            cout<<"Do you want to Quit or Restart? Type Q to exit.";
            cin>>input;
            cin.ignore();
            if (input == 'Q'){
                break;
            }
        }
    }
    return 0;
}