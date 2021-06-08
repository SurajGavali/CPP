//Run as > g++ enum_in_switch.cpp 
#include<iostream>
/* 
 using "enum" we can overcome the limitation of using integer as argument in switch
 */
int main(){

    enum season{summer,spring,fall,winter};// declaring cases
    season now; //creating variable "now"
    now = winter; //assigning winter as value

    switch(now){

        case summer:
            std::cout << "hurry its summer\n";
            break;
        case spring:
            std::cout << "hurry its spring\n";
            break;
        case fall:
            std::cout << "hurry its fall\n";
            break;
        case winter:
            std::cout << "stay warm!\n";
            break;

    }
    //using enum class
    //for running using this run as >g++ enum_in_switch.cpp -std=c++11

    /* enum class Season{summer,spring,fall,winter};//make first letter capital
    Season now;
    now = Season::winter;
    switch(now){

        case Season::summer:
            std::cout << "hurry its summer\n";
            break;
        case Season::spring:
            std::cout << "hurry its spring\n";
            break;
        case Season::fall:
            std::cout << "hurry its fall\n";
            break;
        case Season::winter:
            std::cout << "stay warm!\n";
            break;

    } */
    return 0;
}