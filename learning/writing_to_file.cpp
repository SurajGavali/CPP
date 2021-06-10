#include<iostream>
#include<fstream>
#include<vector>

int main(){

    std::ofstream file;
    std::string filename;
    std::cin >> filename;
    //std::ofstream file("demo.txt");
    file.open(filename,std::ios::app); //using std::ios::app we can able to append the file if its not there everytime execute the proram it will overwrite everthing in file
    if(!file.is_open()){
        std::cout << "Error while opening file\n";
    }
    std::vector<std::string> names;
    /* names.push_back("Suraj");
    names.push_back("M.");
    names.push_back("Gavali"); */
    std::cout << "Please enter any three names : ";
    for(int i=0; i< 3;i++){

        std::string word;
        std::cin >> word;
        names.push_back(word);
    }

    for(std::string name : names){

        file << name << "\n";
    }
    file.close();

}