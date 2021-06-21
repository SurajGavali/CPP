#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,number;
    vector<int> numbers,sorted_numbers;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> number;
        numbers.push_back(number);
    }
    
    sort(numbers.begin(),numbers.end());
    
    for(int i =0;i<n;i++){
        
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}
