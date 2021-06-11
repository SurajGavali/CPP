#include<iostream>
#include "main_utils.h"
int main(){

    int c;
    Rectangle r;

    do{
        std::cout << "==============================\n";
        std::cout << "0. exit(press 0)\n";
        std::cout << "1. Area of rectangle(press 1)\n";
        std::cout << "2. Area of Square(press 2)\n";
        std::cout << "==============================\n";

        std::cin >> c;

        switch(c){

            case 0:
                std::cout << "Thank you..\n";
                break;

            case 1:

                std::cout << "\n\n";
                std::cout << "Length : ";
                std::cin >> r.length;
                std::cout << "Width : ";
                std::cin >> r.width;
                std::cout << "Area : " << rectangle_area(r.length,r.width) << std::endl;
                std::cout << "\n\n";
                //std::cout << "Area : " << rectangle_area(r) << std::endl; //alternative
                break;
            
            case 2:

                std::cout << "\n\n";
                std::cout << "Side length : ";
                std::cin >> r.length;
                std::cout << "Area : " << rectangle_area(r.length) << std::endl;
                std::cout << "\n\n";
                break;
            
            default:
                std::cout << "Please enter valid number!\n";
        }
    }while(c!=0);
    
    return 0;
}