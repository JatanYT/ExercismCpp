#include "darts.h"

int darts::score(double x, double y){
    double dist = sqrt(pow(x, 2) + pow(y, 2));
    int score; 
    if (dist <=1){
        score = 10;
    }
    else if (dist <=5){
        score = 5;
    }
    else if (dist <= 10){
        score = 1;
    }
    else{
        score = 0;
    }
    return score; 
}


