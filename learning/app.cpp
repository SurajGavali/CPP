#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<limits>//for the ignore function
#include<vector>
#include<fstream>

/*
    Tempatized array(STL stanadard template library)

    -statically sized
    -when passed to the function remembers the length
    -passed by value(copied)
 */

//For clering the junk in cin 
//std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

void save_score(int guess_count){
    std::ifstream input;

    //std::string filename;
    input.open("bestscore.txt");

    if(!input.is_open()){
        std::cout << "Soomething went wrong please try again!\n";
    }
    int bestScore;
    input >> bestScore;

    std::ofstream output;
    output.open("bestscore.txt");

    if(!output.is_open()){
        std::cout << "Soomething went wrong please try again!\n";
    }
    if(guess_count < bestScore){

        output << guess_count;
    }
    else{

        output << bestScore;
    }
}

//using array print_array(int array[],int size)
void print_vector(std::vector<int> vector){

    std::cout<<"Your total guesses : ";
    for(int i =0;i<vector.size();i++){
        std::cout<<vector[i]<<"\t";
    }
    std::cout << "\n";
}

void start_game(){
    int random = rand() % 251;
    std::vector<int> guesses;
    //int count =0; for array

    while(true){

        int guess;
        std::cout << "Guess the number : ";
        std::cin >> guess;

        //guesses[count] = guess; //using array
        //count++;//usng array
        
        guesses.push_back(guess);

        if(guess == random){
            std::cout << "Hurray you win....\n\n";
            break;
        }
        else if(guess < random){
            std::cout << "Ohoo number entered was smaller than actual..\n";
        }
        else{
            std::cout << "Number enteerd was ti high\n";
        }
    }
    save_score(guesses.size());

    print_vector(guesses);
    //print_array(guesses,count); //using array
}
int main(){

    //When we run the application everytime it will generate same random number as
    //previously executed to avoid this we use srand function 
    //it generates the number according to time of a system which changes evertime
    srand(time(NULL));
    int choice;
    
    do{
        std::cout << "1. Play Game(Press 1 to play game)\n2. Quit(Press 2 to quit)\n";
        std::cin >> choice;

        switch(choice){

            case 1:
                start_game();
                break;

            case 2:
                std::cout << "Thank you! Good bye..\n";
                return 0;
            
            default:
                std::cout << "Please Enter correct value!\n";
                break;
        }
    }while(choice != 0);

    
    return 0;
}