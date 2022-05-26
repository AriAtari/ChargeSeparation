#include <iostream>

#include <string>
#include "Summing.h"
using namespace std;



int main() 
{ padplane testpad;
 testpad.initialize();
 electron ellist[1]={electron(0.04,0.04)};
 ellist[0].normal();
 //testpad.padlist[23].charge =300;
  summing(testpad,ellist);
   active(testpad);
      //cout<< testpad.padlist[1023].xcor[1];
    return 0;     
} 
























/*
electron(0.027,0.027),electron(0.027,0.024),electron(0.024,0.027),
                      electron(0.05,0.03),electron(0.035,0.065)
*/