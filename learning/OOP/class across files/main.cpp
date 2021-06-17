#include<iostream>
#include<string>
#include "user.h"
int main(){

    User u1,u2,u3;

    u1.set_status("Gold");
    u1.f_name = "Suraj";
    u1.l_name = "Gavali";

    std::cout << u1.get_status() << std::endl;
    std::cout << User::get_user_count() << std::endl;
    u1.~User();
    std::cout << User::get_user_count() << std::endl;

    //for outputing u1 directly we can use operator overloading

    std::cin >> u1;
    std::cout << u1 << std::endl;

    //for accessing the data of private variables

    output_status(u1);
    return 0;
}