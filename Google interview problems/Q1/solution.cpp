#include<bits/stdc++.h>
using namespace std;

//complete your function here..

class Solution{
    public:
        int minRepeats(strig A,string B){
            //code here
            int count=0;

            do{
                size_t match = A.find(B);
                if(match != string::npos){
                    return count;
                }
            }while();
        }
};

int main(){

    int t;
    scanf("%d",&t);
    while(t--){
        string A,B;
        getline(cin,A);
        getline(cin,B);

        Solution ob;
        cout << ob.minRepeats() << endl;
    }
    return 0;
}