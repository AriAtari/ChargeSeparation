#include <iostream>
#include <cmath>
#include <string>
#include "Padplane.h"

void summing(padplane myPadplane,electron myElectronlist[]){
for(int e =0; e < (&myElectronlist)[1]-myElectronlist;e++){
   for(int pado =0; pado < (&myPadplane.padlist)[1]-myPadplane.padlist;pado++) {
        for(int po =0; po < (&myElectronlist[e].pointslist)[1]-myElectronlist[e].pointslist;po++){
            point curpoint = myElectronlist[e].pointslist[po];
            pad curpad = myPadplane.padlist[pado];
        
            if (curpoint.x > curpad.xcor[0]*1 && curpoint.x < curpad.xcor[1]*1 &&
            curpoint.y > curpad.ycor[0]*1 && curpoint.y < curpad.ycor[1]*1){
                curpad.charge += curpoint.charge; 
                };
            
            if(myPadplane.padlist[pado].charge != 0){
        cout << "pad " << pado << " has " <<myPadplane.padlist[pado].charge<<" columbs of charge \n";}


        };

    };

};

};

void active(padplane myPadplane){
for(int i =0 ; i <(&myPadplane.padlist)[1]-myPadplane.padlist;i++ ){
    if(myPadplane.padlist[i].charge != 0){
        cout << "pad " << i << " has " <<myPadplane.padlist[i].charge<<" columbs of charge \n";

    };

};
};