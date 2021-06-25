/*
    void swap(int &a, int &b){

    } // normal declaration

    //using template

    template<typename T>

    void swap(T &a, T &b){

    }
*/

#include<iostream>

//pass by reference

template<typename T>
void swap(T &a, T &b){

    T temp;

    temp = a;
    a = b;
    b = temp;

    //std::cout << "a: "<< a << ", " << "b: "<< b << std::endl;
}

//function overloading in template

/* template<typename T>
void swap(T a[], T b[], int size){

    for(int i =0; i< size;i++){

        T temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
} */
int main(){

    int n1 = 5, n2 = 9;
    std::string name1 = "suraj";
    std::string name2 = "gavali";

    std::cout << "\n\n";

    std::cout << "Before  :  "<< "a: "<< n1 << ", " << "b: "<< n2 << std::endl;
    swap(n1,n2);
    std::cout << "After  :  "<< "a: "<< n1 << ", " << "b: "<< n2 << std::endl;

    std::cout << "\n\n";

    std::cout << "Before  :  "<< "name1: "<< name1 << ", " << "name2: "<< name2 << std::endl;
    swap(name1,name2);
    std::cout << "After  :  "<< "name1: "<< name1 << ", " << "name2: "<< name2 << std::endl;

    std::cout << "\n\n";

    /* int arr1[] = {1,1,1,1,1,1};
    int arr2[] = {2,2,2,2,2,2};

    for(int i =0; i<6;i++){

        std::cout << "Before :  " << arr1[i] << " " << arr2[i] << "\t";
    }
    std::cout << "\n";

    swap(arr1,arr2,6);

    for(int i =0; i<6;i++){

        std::cout << "After :  " << arr1[i] << " " << arr2[i] << "\t";
    }
    std::cout << "\n"; */

    return 0;
}