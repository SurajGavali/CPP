#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> S;
    stringstream ss(str);
    char ch;
    int a;

    while(ss){
        ss >> a >> ch;
        S.push_back(a);
    }
    return S;    
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}