/*
    struct :
        -The access modifiers are public
        -Plane odd data structs (PODS)

    class:
        -The access modifiers are private
*/

#include<iostream>
#include<string>
/*
    If we want to make any struct value private we can put it into private
*/
struct User{

    std::string first_name;
    std::string last_name;
    
    std::string return_string(){

        return status;
    }
    private:
        std::string status = "model";
};

int main(){

    User u;

    std::cout << "First name : ";
    std::cin >> u.first_name;
    std::cout << "Last name : ";
    std::cin >> u.last_name;

    std::cout << "\n\n" << "Hey \"" << u.first_name << " " << u.last_name << "\". " << "You are " << u.return_string() << std::endl;
    return 0;
}