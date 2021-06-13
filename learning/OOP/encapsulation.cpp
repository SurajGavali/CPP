/*
    Encapsulation - 

            Means all the things in the private part of the class need not to be understand by the object.

            Abstraction - Means Need not to know all the inner working of the class;
            Control - controling what user can use of the class

            We achieve encapsulation by

            1. Access modifiers(private,public,protected)
            2. getters and setters
 */
#include<iostream>

class User{

    std::string status = "Gold";

    public:
        std::string f_name;
        std::string l_name;

        //getter
        std::string get_status(){

            return status;
        }

        //setter
        void set_status(std::string s){

            if(s == "Gold" || s == "Silver"){
                
                this->status = s;
            }
            else{

                this->status = "No status\n";
            }
        }
};
int main(){

    User u1;

    u1.set_status("Model");

    std::cout << u1.get_status() << std::endl;
    return 0;
}