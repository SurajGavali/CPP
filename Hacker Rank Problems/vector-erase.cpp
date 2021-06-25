#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,number,q1,q2_1,q2_2;
    vector<int> numbers;
    
    cin >> n;
    for(int i =0;i<n;i++){
        cin >> number;
        numbers.push_back(number);
    }
    
    cin >> q1;
    cin >> q2_1;
    cin >> q2_2;
    
    numbers.erase(numbers.begin()+(q1-1));
    numbers.erase(numbers.begin()+(q2_1-1),numbers.begin()+(q2_2-1));
    
    cout << numbers.size() << endl;
    
    for(int i=0;i<numbers.size();i++){
        cout << numbers[i] << " ";
    }
    
    cout << endl;
    
    return 0;
}