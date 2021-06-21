#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int number_of_queries,query_type,val;
    cin >> number_of_queries;
    set<int> s;
    
    while(number_of_queries > 0){
        
        cin >> query_type >> val;
        
        if(query_type == 1){
            s.insert(val);
        }
        if(query_type == 2){
            s.erase(val);
        }
        if(query_type == 3){
                    
            if(s.find(val) == s.end()){
                cout << "No\n";
            }
            else{
                cout << "Yes\n";
            }
        }
        number_of_queries--;
    }
    return 0;
}