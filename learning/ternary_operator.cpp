#include<iostream>
#include<string>
int main(){

    int ans = 11;
    int score;
    int guess;

    std::cout << "Guess the number : ";
    std::cin >> guess;
    //using the if loop
    /* if(guess == ans){

        score = 10;
    } */

    //Ternary operator
    //syntax --- condition ? value(if condition is true) : value(if it false)

    score = guess == ans ? 10 : 0; //stores value in the score variable

    std::cout << "Hurrah your score is : " << score;
}