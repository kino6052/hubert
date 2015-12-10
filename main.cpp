#include <string>
#include <iostream>
#include "boulderd.h"

using namespace std;

int main(){
    Data test(1, 1.0, 1.0, "test", "test", "test", "test");
    cout<<test.getDonorSqft()<<endl;
    return 0;
}