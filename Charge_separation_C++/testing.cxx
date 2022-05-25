#include <iostream>
#include "Padplane.h"
#include <string>
using namespace std;



int main() 
{ 
   electron el1=electron(0.0,0.0);  // 10 elements 
     el1.normal();
     cout<<el1.pointslist[0].charge;
    
    return 0;     
} 
