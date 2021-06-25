#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void miniMaxSum(vector<int> arr) {
    
    //solution - 1
    long sum=0;
    for(int i=0;i<arr.size();i++){
        sum += arr[i];
    }
    
    sort(arr.begin(),arr.end());
    
    cout << sum - arr[arr.size()-1] << " " << sum - arr[0] << endl;
    
    
    //solution - 2
    /* vector<long> v;
    for(int i=0;i<arr.size();i++){
        
        long sum=0;
        switch(i){
            
            case 0:
                
                for(int i=1;i<arr.size();i++){
                    sum += arr[i];
                }
                v.push_back(sum);
                break;
                
            case 1:
                for(int i=0;i<arr.size();i++){
                    if(i==1){
                        continue;
                    }
                    sum += arr[i];
                }
                v.push_back(sum);
                break;
            
            case 2:
                for(int i=0;i<arr.size();i++){
                    if(i==2){
                        continue;
                    }
                    sum += arr[i];
                }
                v.push_back(sum);
                break;
            case 3:
                for(int i=0;i<arr.size();i++){
                    if(i==3){
                        continue;
                    }
                    sum += arr[i];
                }
                v.push_back(sum);
                break;
            case 4:
                for(int i=0;i<arr.size();i++){
                    if(i==4){
                        continue;
                    }
                    sum += arr[i];
                }
                v.push_back(sum);
                break;
            
        }
    }
    sort(v.begin(),v.end());
    cout << v[0] << " " << v[arr.size()-1] << endl; */
}

int main()
{

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(5);

    for (int i = 0; i < 5; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    miniMaxSum(arr);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
