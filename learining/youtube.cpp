#include<iostream>
#include<climits>
#include<cmath>
#include<float.h>
#include<string>
/*
    integral - int;
    character - char;
    floating point - float,double;
    boolean - bool;

*/

//you can declare this to get rid of "std::", you can just mention cout or anything in standard library
using std::cout;
using std::cin;

double power(int base, int power){

    double result = 1;
    for(int i=0;i<power;i++){
        result *= base;
    }

    return result;
}

int multiply(int n1, int n2){

    return n1*n2;
}

void func(double base,int exponent){

    double ans;

    ans = power(base,exponent);
    cout << base <<" power "<< exponent << " is: " << ans << std::endl;

}

int main()
{   
    int p;
    double base;
    // Integral data types
    int int_size;
    short short_size;
    long long_size;
    long long long_long_size;

    unsigned int unsigned_int_size;
    unsigned short unsigned_short_size;
    unsigned long unsigned_long_size;
    unsigned long long unsigned_long_long_size;
    char c = 'S';
    // Integral data types

    /*=====================================================*/

    //boolean data types

    bool flag = true;

    //boolean data types

    //floating point

    float float_size;
    double double_size = 2.1E5; // 2.1 * 10^5 i.e. 210000
    double d = 10.0/3;
    d = d*10000000000000;
    long double long_double_size;

    //floating point
    
    //Constants

    const int constant = 4; //creates readonly variable
    enum {y = 100};

    //Constants

    //Numeric functions

    //sqrt
    //if you put -ve number in sqrt function it will output as "nan"
    std::cout <<"Square root of 100 : "<< sqrt(100 ) << "\n" ;

    //pow
    //If you power to the largest power it will print inf(infinity) or -inf

    std::cout << "10 power 100 is : " << pow(10,1000) << "\n\n";

    //remainder
    //we can use modulo(%) but in the case of division with floating number we will get an error so
    //there we can use remainder function

    std::cout << "10 divided by 3 remainder is(using remainder function) : " <<remainder(10,3) << "\n";
    std::cout << "10 divided by 3.25 remainder is(using remainder function) : " <<remainder(10,3.25) << "\n";
    std::cout << "10 divided by 3 remainder is(using %) : " << 10%3 << "\n\n";

    //fmax
    //returns maximum of arguments
    std::cout << fmax(10,125) << "\n";

    //fmin
    //returns minimum of arguments
    std::cout << fmin(10,125) << "\n\n";

    //floor
    std::cout << floor(fmin(10.25,125)) << "\n";

    //trunc
    //just cuts of the numbers next to the point
    std::cout << trunc(fmin(10.25,125)) << "\n";
    std::cout << trunc(fmin(-10.25,125)) << "\n";

    //ceil
    std::cout << ceil(fmin(10.25,125)) << "\n";

    //round
    //rounds off the number
    std::cout << round(fmin(10.25,125)) << "\n\n";

    //Numeric functions

    //Strings

    std::string name = "Suraj";
    std::cout << name + " Gavali" << "\n";//string concatination
    std::cout << "String length : " << name.length() << "\n"; //here length is the member of the class string ,,, You can also use .size()
    //method == member function == functions attached to objects.

    //taking string from user
    std::string output;
    /* std::cin >> output; */
    //std::cout << output << "\n";//it will print upto the first space

    //for outputing entire string use getline() function

    getline(std::cin, output);
    

    /* String Methods */
    //1. length() outputs size of the string

    std::cout << "length of a string : " << output.length() << "\n";

    //2. append() appends to the string

    output.append(" appended");
    

    //3. insert() inserts at any index

    output.insert(2, " inserted ");
    

    //4. erase(index, number of characters) erases the mentioned characters

    output.erase(2,10);
    //If we just mention the index number then it will get rid of entire string from there
    //for erasing last character we can do something like this output.erase(output.length() -1)
    //Or else we can use "pop_back()" for removing last character

    //5. find()
    //for finding the word in the string we can use find() function
    /* int index = output.find("hell"); */

    //replace(index,size,"string")
    /* output.replace(index,4,"****");
    std::cout << output << "\n"; */

    //6. substr()
    //for extracting the sub part of the string

    std::cout << "substring of the entire string : " << output.substr(4,3) << "\n";

    //7. find_first_of()
    std::cout << output.find_first_of("aeiou") << "\n";
    std::cout << output.find_first_of("!") << "\n";
    //find_first_of() function gives a -1 output if its not get matched and its type of unsigned long so it will return a huge number

    //8. compare() for string comparison

    if(output.compare("matched appended") == 0){
        std::cout << "matched\n" << "\n\n";
    }
    //Strings

    //literals

    //auto x = 5U; //5UL,5ULL,5.0L,5.L;

    //literals

    //Hexadecimal and octal

    int hex_number 0x30; //hexadecimal
    int oct_number 030; //octal
    int deci_number 30;
    std::cout << hex_number << "\n"; //this will print decimal value equivalent to 0x30.
    std::cout << oct_number << "\n"; //this will print decimal value equivalent to 030.

    std::cout << std::hex << "30 in hexadecimal : " << deci_number << "\n";
    std::cout << std::oct << "30 in octal : " <<deci_number << "\n";

    //Hexadecimal and octal


    //Expressions,operators and operator precedence associativity

    /* double ex_x;
    double ex_y;
    ex_x = 10;
    ex_y = ex_x = 100 //here ex_x = 100 and ex_y = 100 basically it will execute from right to left
    (ex_y = ex_x) = 100 */ //here ex_x = 10 and ex_y = 100 basically this will first execute whats there in bracket


    //Expressions,operators and operator precedence associativity

    //control flow

    //1. branching --> if and switch
    //2. looping --> while and for

    /* if(expressions){

        statements
    } */

    /* 
    
    switch(argument){ // argument has to be int type
        case 1:
            //code
            break;
        case 2:
            //code
            break;
            .
            .
            .
        case n:
            //code
            break;

        default:
            //code
            break;
    }

     */

    //control flow
    
    cout << "size of int               : " <<sizeof(int_size)<<" RANGE(" <<INT_MIN <<", "<<INT_MAX<<")" <<"\n";
    cout << "size of short             : " <<sizeof(short_size) << " RANGE(" <<SHRT_MIN <<", "<<SHRT_MAX<<")" <<"\n";
    cout << "size of long              : " <<sizeof(long_size) << " RANGE(" <<LONG_MIN <<", "<<LONG_MAX<<")"<< "\n";
    cout << "size of long long         : " <<sizeof(long_long_size) << " RANGE(" <<LLONG_MIN <<", "<<LLONG_MAX<<")"<< "\n";
    cout << "size of unsigned int      : " <<sizeof(unsigned_int_size) << "\n";
    cout << "size of unsigned short    : " <<sizeof(unsigned_short_size) <<"\n";
    cout << "size of unsigned long     : " <<sizeof(unsigned_long_size) << "\n";
    cout << "size of unsigned long long: " <<sizeof(int_size) << "\n";
    cout << "size of char              : " <<sizeof(c) << "\n";
    cout << "printing boolean value : " << std::boolalpha <<flag << "\n";
    cout << "size of float              : " <<sizeof(float_size) << "\n";
    cout << "size of double             : " <<sizeof(double_size) << "\n";
    cout << "size of long double              : " <<sizeof(long_double_size) << "\n\n";

    cout << "Number of digits you can trust upto in float : " << FLT_DIG << "\n";
    cout << "Number of digits you can trust upto in double : " << DBL_DIG << "\n";
    cout << "Number of digits you can trust upto in double : " << LDBL_DIG << "\n\n";
    // cout << c << "\n";
    // cout << (int)c << "\n"; //for printing charater value to int

    if(flag == false){

        cout << "hey you you are false\n";
    }
    else{
        cout << "hey you are true\n";
    }

    cout << "value in double : "<< double_size << "\n";

    cout << d << "\n";

    cout << std::fixed << d << "\n"; // if you want to print the output in zero form instead of e power
    cout << "Enter base : ";
    cin >> base;
    cout << "Enter power : ";
    cin >> p;
    func(base,p);
}