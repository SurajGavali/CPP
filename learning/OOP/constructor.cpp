/*
    constructor a special type of function which is called when the class object is instanciated
    name - should be same as class
    return type - nothing
    The default constructor only called when there is no another explicitly constructor

    Destructor- its by default
    But we can also define it explicitly
    like- ~User(){//code}

 */
#include<iostream>

class User{

    public:
        std::string f_name;
        std::string l_name;

        User(){

            std::cout << "Created a user\n";
        }

        User(std::string f, std::string l){

            this->f_name = f;
            this->l_name = l;
        }

        ~User(){

            std::cout << "Destructor called\n";
        }

};
int main(){

    User u1,u2,u3;
    User u4("Suraj","Gavali");

    u1.f_name = "Suraj";
    u1.l_name = "Gavali";

    u2.f_name = "Model";
    u2.l_name = "Gavali";

    u3.f_name = "Gavali";
    u3.l_name = "Model";

    std::cout << u4.f_name << " " << u4.l_name << std::endl;

    return 0;
}