#include<iostream>
#include<string>
//I C U == Initialize Condition Update
int main(){

    //1. while loop
    int w = 0; //Initialization
    std::cout << "==== while loop output ====\n";
    while(w < 10){ //Condition

        std::cout << w << "\n";
        w++; //Update
    }

    //2. for loop
    std::cout << "==== For loop output ====\n";
    for(int l=0; l < 10; l++){ // Intilization and Condition and Update

        std::cout << l << "\n";
    }

    // Factorial using for loop
    int fact;
    std::cout << "==== Factorial Calculator ====\n\n";
    std::cout << "Enter a number to calculate factorial : ";
    std::cin >> fact;
    int factorial = fact;

    for(int f = fact-1;f > 1;f--){

        fact = fact * f;
    }
    std::cout << "Factorial of " << factorial << " : " << fact << "\n";

    //Factorial using while loop
    int fact_w,factorial_w;
    std::cout << "Enter a number to calculate factorial : ";
    std::cin >> fact_w;
    factorial_w = fact_w-1;

    while(factorial_w > 1){
        
        fact_w *= factorial_w;
        factorial_w--;
    }

    std::cout << "While loop output of factorial : " << fact_w << "\n";

    //do while loop
    //we use do while loop when we want the code should execute atleast once
    std::string password = "S21u@raJ";
    std::string match_p;

    std::cout << "==== do while loop ====\n";
    do{

        std::cout << "Password : ";
        std::cin >> match_p;
    }while(password != match_p);

    std::cout << "Logged in successfully!\n";
    return 0;
}