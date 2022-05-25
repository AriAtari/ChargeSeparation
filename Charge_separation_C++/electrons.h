#include <iostream>
#include <cmath>
#include <string>
#include "points.h"

using namespace std;



// electron class
class electron{
public:
    float x;
    float y;
    point pointslist[89];
    // constructor
    electron(float xposi,float yposi) {
        x = xposi;
        y = yposi;
    }

    //charge spreading
    void normal(){
        double valuesr[6] = {1.00000000e-05, 2.80807594e-05, 7.88529046e-05, 2.21424944e-04,6.21778057e-04, 1.74600000e-03};
        double pirange[15] ={ 1.00000000e-05, 4.48808236e-01, 8.97606472e-01, 1.34640471e+00,1.79520294e+00, 2.24400118e+00, 2.69279942e+00, 3.14159765e+00,3.59039589e+00, 4.03919413e+00, 4.48799236e+00, 4.93679060e+00,5.38558883e+00, 5.83438707e+00, 6.28318531e+00} ;
        int counter = 0 ;
        for(int r=0;r< 6;r++){
            for(int pi=0;pi<15;pi++){
                double pointx = valuesr[r]*cos(pirange[pi])+x;
                double pointy = valuesr[r]*sin(pirange[pi])+y;
                pointslist[counter]=point(pointx,pointy);
                //cout<<pointx<<","<<pointy<<","<<counter<<endl;

            counter +=1;
            }
            

        };
        Charge_per_point(valuesr,Radius,pointslist);

        

    };

    void regular(){
        double valuesr[6]={1.0000e-05, 3.5720e-04, 7.0440e-04, 1.0516e-03, 1.3988e-03,1.7460e-03};
        double pirange[15] ={ 1.00000000e-05, 4.48808236e-01, 8.97606472e-01, 1.34640471e+00,1.79520294e+00, 2.24400118e+00, 2.69279942e+00, 3.14159765e+00,3.59039589e+00, 4.03919413e+00, 4.48799236e+00, 4.93679060e+00,5.38558883e+00, 5.83438707e+00, 6.28318531e+00} ;
        int counter=0;
        for(int r=0;r< 6;r++){
            for(int pi=0;pi<15;pi++){
                double pointx = valuesr[r]*cos(pirange[pi])+x;
                double pointy = valuesr[r]*sin(pirange[pi])+y;
                pointslist[counter]=point(pointx,pointy);
                //cout<<pointx<<","<<pointy<<","<<counter<<endl;

            counter +=1;
            }
            

        };
        Charge_per_point(valuesr,Radius,pointslist);

    };
};


