// interest_rate returns the interest rate for the provided balance.
double interest_rate(double balance) {
    double ir;
    if (balance < 0){
        ir = 3.213;
    }
    else if (balance >=0 && balance <1000){
        ir = 0.5;
    }
    else if (balance >=1000 && balance <5000){
        ir = 1.621;
    }
    else{
        ir = 2.475;
    }
    return ir;
}

// yearly_interest calculates the yearly interest for the provided balance.
double yearly_interest(double balance) {
    double yi = balance*interest_rate(balance)/100;
    return yi;
}

// annual_balance_update calculates the annual balance update, taking into
// account the interest rate.
double annual_balance_update(double balance) {
    double a_b_u = yearly_interest(balance) + balance;
    return a_b_u;
}

// years_until_desired_balance calculates the minimum number of years required
// to reach the desired balance.
int years_until_desired_balance(double balance, double target_balance) {
    double bal = balance; 
    int x = 0;
    while(bal<target_balance){
        bal += yearly_interest(bal);
        x++;
    }
    return x;
}
