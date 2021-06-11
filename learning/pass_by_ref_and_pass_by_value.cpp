/*
    
    //pass by value which is default
    when we pass by value and we modified value of "a" in function do_something it will not be modified in the main function

    do_something(int a){

    }

    int main(0){

        int x;
        do_something(x);
    }

    //pass by reference
    hear when we change value of "a" in the function that value is going to use in the next calls in main function

    do_something(int &a){

    }

    int main(0){

        int x;
        do_something(x);
    }

 */

#include<iostream>

//pass by value
/* void swap(int a, int b){

    int temp;

    temp = a;
    a = b;
    b = temp;

    std::cout << "a: "<< a << ", " << "b: "<< b << std::endl;
} */

//pass by reference
void swap(int &a, int &b){

    int temp;

    temp = a;
    a = b;
    b = temp;

    std::cout << "a: "<< a << ", " << "b: "<< b << std::endl;
}
int main(){

    int n1 = 5,n2 = 9;

    std::cout << "a: "<< n1 << ", " << "b: "<< n2 << std::endl;
    swap(n1,n2);
    std::cout << "a: "<< n1 << ", " << "b: "<< n2 << std::endl;

    return 0;
}