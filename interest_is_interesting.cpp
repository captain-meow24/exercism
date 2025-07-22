// interest_rate returns the interest rate for the provided balance.
double interest_rate(double balance) {
    // TODO: Implement the interest_rate function
    double bal[] = {0, 1000, 5000};
    double in[]= {3.213, 0.5, 1.621, 2.475};
   double idk;

    for(int i=2; i>=0; i--){
        
        if(balance>= bal[i]){
                
            idk= in[i+1];
            break;
        }
    }
    if(balance <0){
        idk= in[0];
    }
return idk;

}

// yearly_interest calculates the yearly interest for the provided balance.
double yearly_interest(double balance) {
    // TODO: Implement the yearly_interest function
    double bal[] = {0, 1000, 5000};
    double in[]= {3.213, 0.5, 1.621, 2.475};
   double idk;
    double ints;

    for(int i=2; i>=0; i--){
        
        if(balance>= bal[i]){
                
            idk= in[i+1];
            ints= balance*idk/100;
            break;
        }
    }
    if(balance <0){
        idk= in[0];
        ints = balance*idk/100;
    }
return ints;

}

// annual_balance_update calculates the annual balance update, taking into
// account the interest rate.
double annual_balance_update(double balance) {
    // TODO: Implement the annual_balance_update function
    
   
    // TODO: Implement the yearly_interest function
    double bal[] = {0, 1000, 5000};
    double in[]= {3.213, 0.5, 1.621, 2.475};
   double idk;
    double ints;
    double x;

    for(int i=2; i>=0; i--){
        
        if(balance>= bal[i]){
                
            idk= in[i+1];
            ints= balance*idk/100;
            x=balance+ints;
            break;
        }
    }
    if(balance <0){
        idk= in[0];
        ints = balance*idk/100;
        x=balance+ints;
    }
 return x;
}
   


// years_until_desired_balance calculates the minimum number of years required
// to reach the desired balance.
int years_until_desired_balance(double balance, double target_balance) {
    // TODO: Implement the years_until_desired_balance function
    double y=0;
    while(balance < target_balance){
         balance = annual_balance_update(balance);
        y++;
}
    return y;
}
