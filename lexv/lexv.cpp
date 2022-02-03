#include <iostream>
#include <vector>
#include <stack>
#include <fstream>
#include <string>
using namespace std;

void perm(vector<string> &ans, vector<char>& nums, int j, int n,string str) {
    if(j > 3){
        return;
    }
    if(str !=  ""){
        ans.push_back(str);
    }
    for(int i = 0; i < nums.size(); i++) {
        perm(ans, nums, j+1, n,str + nums[i]);
    }
}

int main()
{
    int k;
    string s;
    vector<char> v;
    getline(cin,s);
    for(int i = 0;i < s.size();i++){
        if(s[i] != ' '){
            v.push_back(s[i]);
        }
    }
    vector<string> vec;
    cin >> k;
    perm(vec,v,0,k,"");
    ofstream myfile;
    myfile.open ("lexv_solution.txt");
    for(int i = 0;i < vec.size();i++){
        for(int j = 0;j < vec[i].size();j++){
            myfile << vec[i][j];
        }
        if(i != vec.size()-1){
            myfile << "\n";
        }
    }
    myfile.close();
    return 0;
}
