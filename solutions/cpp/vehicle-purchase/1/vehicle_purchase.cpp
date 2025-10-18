#include "vehicle_purchase.h"

namespace vehicle_purchase {

// needs_license determines whether a license is needed to drive a type of
// vehicle. Only "car" and "truck" require a license.
bool needs_license(std::string kind) {
    return kind=="car" || kind=="truck";
}

// choose_vehicle recommends a vehicle for selection. It always recommends the
// vehicle that comes first in lexicographical order.
std::string choose_vehicle(std::string option1, std::string option2) {
    std::string decision = "";
    if (option1<option2) {
        decision = option1 + " is clearly the better choice.";
    }
    else{
        decision = option2 + " is clearly the better choice.";
    }
    return decision;
}

// calculate_resell_price calculates how much a vehicle can resell for at a
// certain age.
double calculate_resell_price(double original_price, double age) {
    // TODO: Return the age-corrected resell price.
    double r_price;
    if (age < 3.0) {
        r_price = original_price * 80/100;
    }
    else if ( age >= 3.0 && age < 10){
        r_price = original_price * 70/100;
    }
    else {
        r_price = original_price * 50 / 100;
    }
    return r_price;
}

}  // namespace vehicle_purchase
