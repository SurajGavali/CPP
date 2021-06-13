#include<iostream>
#include<vector>


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

void add_user_if_not(std::vector<User> &users, User user){

    for(int i=0;i<users.size();i++){

        if(users[i].first_name == user.first_name && users[i].last_name == user.last_name){

                std::cout << "\n\n" << "Hey \"" << user.first_name << " " << user.last_name << "\". " << "You are already registered" << std::endl;
                return;
                
        }

    }

    users.push_back(user);
    std::cout << "\n\n" << "Hey \"" << user.first_name << " " << user.last_name << "\". " << "You are registered successfully" << std::endl;


}
int main(){

    User u;
    User u1,u2,u3;

    //vectors
    std::vector<User> users; //creating vectors using class
    users.push_back(u);
    //users.push_back(User()); //just creates an new user and prints nothing

    u1.first_name = "Suraj";
    u1.last_name = "Gavali";

    u2.first_name = "Abhishek";
    u2.last_name = "Kalkutki";

    u3.first_name = "Raibhan";
    u3.last_name = "Sarnobat";


    users.push_back(u1);
    users.push_back(u2);
    users.push_back(u3);

    std::cout << "First name : ";
    std::cin >> u.first_name;
    std::cout << "Last name : ";
    std::cin >> u.last_name;


    add_user_if_not(users,u);

    std::cout << users.size() << std::endl;
    //std::cout << users[0].first_name << std::endl;

    
    return 0;
}