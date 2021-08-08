#include<bits/stdc++.h>
using namespace std;

//complete your function here..

class Solution{
    public:
        int minRepeats(string A,string B){
            //code here
            int c=0,count;
            vector<char> vA,vB;
            for(int i=0;i<A.size();i++){
                vA.push_back(A[i]);
            }
            for(int i=0;i<B.size();i++){
                vB.push_back(B[i]);
            }
            for(int i=0;i<B.size();i++){

                size_t found = A.find(B[i]);
                if(found == string::npos){
                    return -1;
                }
                else{
                    continue;
                }
            }
            if(B == A){
                count = c;
            }
            else{
                size_t f = A.find(B);
                do{
                    if(f != string::npos){
                        count = c;
                    }
                    else{
                        A = A.append(A);
                        c++;
                    }
                    
                }while(f != string::npos);
            }

            return count;
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
        cout << ob.minRepeats(A,B) << endl;
    }
    return 0;
}