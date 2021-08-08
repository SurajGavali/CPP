#include<iostream>  
using namespace std; 

int main()  
{  
    string str1="Welcome to C++ programming";  
    string str2="language";  
    cout<<str1<<'\n';  
    str1.append(str2);  
    cout<<str1<<'\n';  
    return 0;
}