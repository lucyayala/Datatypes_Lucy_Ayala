

   //Datatypes Unit 2 assignment
   // Date: 1-22-2020 IDE: Repl.it tool
   //This program calculates the number of dollars, quarters, dimes, nickels, and pennies Joe will receive when he trades in his jar of pennies at the bank.
   #include <iostream>
   using namespace std;
 
   int main()
   {
    // decalre variables
     int pennies; 
     int dollars;
     int quarters;
     int nickles;
     int dimes;

    // constant variables
     const int dollarvalue = 100;
     const int quartervalue = 25;
     const int dimevalue = 10;
     const int nicklevalue = 5;

    // Get the amount of pennies
     cout << "Enter the amount of pennies: ";
     cin >> pennies;
    
    // Calculate the amount of total dollars, quarters, dimes, nickles, and pennies.
     dollars = pennies / dollarvalue;
     quarters = (pennies % dollarvalue) / quartervalue;
     dimes =  ((pennies % dollarvalue) % quartervalue) /dimevalue;
     nickles = ((((pennies % dollarvalue) % quartervalue) % dimevalue) / nicklevalue);
     pennies = (((pennies % dollarvalue)% quartervalue % dimevalue));

    // Output the amount
     if (dollars == 1) 
     { cout << "You have " << dollars << " dollar. " << endl;}
     else
     { cout << "You have " << dollars << " dollars. " << endl;}

     if (quarters == 1) 
     { cout << "You have " << quarters << " quarter. " << endl;}
     else
     { cout << "You have " << quarters << " quarters. " << endl;}

     if (dimes == 1) 
     { cout << "You have " << dimes << " dime. " << endl;}
     else
     { cout << "You have " << dimes << " dimes. " << endl;}

     if (nickles == 1) 
     { cout << "You have " << nickles << " nickle. " << endl;}
     else
     { cout << "You have " << nickles << " nickles. " << endl;}

     if (pennies == 1) 
     { cout << "You have " << pennies << " penny. " << endl;}
     else
     { cout << "You have " << pennies << " pennies. " << endl;}
    

    
    return 0;
  
   }