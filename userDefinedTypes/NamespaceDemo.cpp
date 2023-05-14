#include <iostream>
#include <string>
#include "AnimalsNamespace.h"

using namespace std;
using namespace AnimalNames;

int main(){

     for(int i=0; i<sizeof(cows)/sizeof(cows[0]); i++){
         cout<<cows[i]<<endl;
     }

    return 0;
}

