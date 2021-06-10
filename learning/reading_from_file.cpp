#include<iostream>
#include<vector>
#include<fstream>

int main(){

    std::string filename;
    std::cout << "Enter a file name : ";
    std::cin >> filename;

    std::ifstream file;
    file.open(filename);

    if(!file.is_open()){

        std::cout << "Error while opening the file\n";
    }

    std::vector<std::string> names;
    std::string input;
    while(file >> input){

        names.push_back(input);
    }

    for(std::string name : names){

        std::cout << name<< "\n";
    }
    /*
        If you want to print line by line

        std::string line;
        getline(file,line);

        std::cout << line << "\n";
     */
    return 0;
}