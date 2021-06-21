/*

Credits : SurajGavali
Date : 21 jun 2021

for n=5

    #
   ##
  ###
 ####
#####

*/
#include<iostream>
using namespace std;
void staircase(int n) {
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i <= j-1){
                cout << " ";
            }
        }
        int k = n - 1;
        for (int p = 0; p < i+1; p++) {
            cout << "#";
            k--;
        }
        cout << endl;
    }
}

int main(){

    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    staircase(n);

    cout << "\n\n*****By SurajGavali*****\n";
    return 0;
}