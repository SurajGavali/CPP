#include<iostream>
#include<vector>

int main(){

    int array[][3] = {{1,2,3},
                      {4,5,6},
                      {7,8,9}}; //You have to mention how many arrays you want to include

    std::cout << "=== Output Using array ===\n";
    for(int row=0; row<3;row++){

        for(int col=0;col<3;col++){

            std::cout << array[row][col] << "\t";
        }
        std::cout << "\n";
    }

    std::vector<std::vector<int>> vector_array = {{1,2,3},
                                                  {4,5,6},
                                                  {7,8,9}};;

    std::cout << "=== Output using vectors ===\n";
    for(int v_row=0; v_row<3;v_row++){

        for(int v_col=0;v_col<3;v_col++){

            std::cout << vector_array[v_row][v_col] << "\t";
        }
        std::cout << "\n";
    }

}