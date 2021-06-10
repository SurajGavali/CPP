#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q,value,index,element;
    cin >> n >> q;

    std::vector<std::vector<int>> vector_i;

    for(int row =0; row < n;row++){

        int size;
        cin >> size;

        std::vector<int> vector_c;
        for(int col=0;col < size;col++){

            cin >> value;
            vector_c.push_back(value);
        }
        vector_i.push_back(vector_c);
    }

    std::vector<int> output;

    for(int i = 0;i<q;i++){

            cin >> index >> element;
            output.push_back(vector_i[index][element]);
    }

    for(int j = 0; j < q;j++){

        cout << output[j] << "\n";
    }
    return 0;
}