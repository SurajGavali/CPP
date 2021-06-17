/*

    //Inheritance
    if suppose there is User class within that class there are two other classes
    1. Teacher
    2. Student

    we make the connection between child and parent class as

    class Teacher : public User{

    }

    class Student : public User{

    }

    //Polymorphism


 */

#include<iostream>
#include<string>
#include<vector>

class User{

    public:
        std::string f_name;
        std::string l_name;

        void output(){

            std::cout << "I am a user\n";
        }
};

class Teacher : public User{

    public:
        std::vector<std::string> classes_teaching;

        virtual void output(){
            std::cout << "I am a teacher\n";
        }
};
int main(){

    Teacher teacher;
    teacher.f_name = "Suraj";
    teacher.l_name = "Gavali";
    std::cout << teacher.f_name << " " << teacher.l_name << std::endl;
    teacher.output();

    User &u = teacher;
    u.output();

    return 0;

}