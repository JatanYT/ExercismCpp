#include "raindrops.h"
#include <string>

std::string raindrops::convert(int drops){
    std::string text = "";
    if (drops%3==0){
        text += "Pling";
    }
    if (drops%5==0){
        text += "Plang";
    }
    if (drops%7==0){
        text += "Plong";
    }
    if (text=="") {
        text = std::to_string(drops);
    }
    return text;
    }
 
