#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 

   int m, number;
   cin >> m;
   vector<int> numbers;
   for (int i=0; i<m; i++){
       cin >> number;
       numbers.push_back(number);
   }
   int n, val;
   cin >> n;
   vector<int> vals;
   for (int i=0; i<n; i++){
       cin >> val;
       vals.push_back(val);
   }
   for(int i=0;i<n;i++){
       vector<int>::iterator low = lower_bound(numbers.begin(), numbers.end(), vals[i]);
       if (numbers[low - numbers.begin()] == vals[i])
           cout << "Yes " << (low - numbers.begin()+1) << endl;
       else
           cout << "No " << (low - numbers.begin()+1) << endl;
   }
   return 0;

}
