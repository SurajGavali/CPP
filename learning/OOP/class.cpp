#include<iostream>


//In class default variables are private and if we have to make any object public we mention that inside the public keyword
class User{
    
    std::string status = "model";
    
    public:
        std::string first_name;
        std::string last_name;
        
        std::string return_string(){

            return status;
        }
        
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