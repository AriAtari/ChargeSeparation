#include <iostream>
#include <cmath>
#include <string>
#include "variables.h"
using namespace std;






// Points object
class point{
public:

    float x;
    float y;
    double charge=0;

// constructor
    point(float xpos=0.0,float ypos=0.0){
        x = xpos;
        y = ypos;
    }
};

//charge per point
void Charge_per_point(double valuesr[],double Radius[],point pointslist[]){
    // Charge per point
        int count = 0;
        int multi = 0;
        for(int i =1;i<306;i++){
            for (int cur=0;cur<6;cur++){
                if (valuesr[cur]> Radius[i-1] && valuesr[cur] < Radius[i]){
                    count +=ppa;
                
                } else if(count>1){
                    for(int j=multi;j<multi+count;j++){
                        pointslist[j].charge = Tot_charge[i]/count;

                    };
                    multi+=count;
                    count = 0;

                }
            }

        };

};
