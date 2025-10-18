#include "leap.h"
bool leap::is_leap_year(int year){
    bool islpyr;
    if (year % 4 == 0 && year % 100 !=0){
        islpyr = true;
    }
    else if(year % 100 == 0 && year % 400 == 0){
        islpyr = true;
    }
    else{
        islpyr = false;
    }
    return islpyr;
}

