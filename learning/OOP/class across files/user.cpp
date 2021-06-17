/*
    Encapsulation - 

            Means all the things in the private part of the class need not to be understand by the object.

            Abstraction - Means Need not to know all the inner working of the class;
            Control - controling what user can use of the class

            We achieve encapsulation by

            1. Access modifiers(private,public,protected)
            2. getters and setters

    Friend function:

        function which is defined outside of the class and we can access the private members of the class by granting th 
 */
#include<iostream>
#include "user.h"

    
    

        int User::get_user_count(){

            return user_count;
        }

        User::User(){

            user_count++;
        }

        User::~User(){

            user_count--;
        }


        //getter
        std::string User::get_status(){

            return status;
        }

        //setter
        void User::set_status(std::string s){

            if(s == "Gold" || s == "Silver"){
                
                this->status = s;
            }
            else{

                this->status = "No status\n";
            }
        }

        void output_status(User user);
        std::ostream& operator << (std::ostream &output, User user);
        std::istream& operator >> (std::istream &input,User &user);

void output_status(User user){

    std::cout << user.status;
}

std::ostream& operator << (std::ostream &output, User user) {

    output << "First Name : " << user.f_name << "\nLast name : " << user.l_name << "\nstatus : " << user.status;
    return output;
}

std::istream& operator >> (std::istream &input,User &user){

    std::cout << "Enter user first name and last name respectively : ";
    input >> user.f_name >> user.l_name >> user.status;

    return input;
}
int User::user_count = 0; //You have to assign a value to the static members outside of the class