#include<iostream>

namespace suraj{

    //pass by reference
    void swap(int &a, int &b){

        int temp;

        temp = a;
        a = b;
        b = temp;

        std::cout << "a: "<< a << ", " << "b: "<< b << std::endl;
    }
}

//using namespace suraj;

int main(){

    int n1 = 5,n2 = 9;

    std::cout << "a: "<< n1 << ", " << "b: "<< n2 << std::endl;
    suraj::swap(n1,n2);
    //std::cout << "a: "<< n1 << ", " << "b: "<< n2 << std::endl;

    return 0;
}