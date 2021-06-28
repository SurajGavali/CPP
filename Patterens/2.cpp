/*

printing border elements of the matrix
    *****
    *   *
    *   *
    *   *
    *****
*/

#include<iostream>
using namespace std;
void border(int n) {
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            if(i == 0 || j == 0 || i == n-1 || j == n-1){
                cout << "*" << " ";
            }
            else {
                cout << " " << " ";
            }
        }
        cout << endl;
    }
}

int main(){

    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    border(n);

    cout << "\n\n*****By SurajGavali*****\n";
    return 0;
}