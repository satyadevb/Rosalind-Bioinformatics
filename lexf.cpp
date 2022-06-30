#include <iostream>
#include <vector>
#include <stack>
#include <fstream>
#include <string>
using namespace std;

void perm(vector<string> &ans, vector<char>& nums, int j, int n,string str) {
    if(j == n){
        ans.push_back(str);
		return;
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
    myfile.open ("lexf_solution.txt");
    for(int i = 0;i < vec.size();i++){
        for(int j = 0;j < vec[i].size();j++){
            myfile << vec[i][j];
        }
        myfile << "\n";
    }
    myfile.close();
    return 0;
}
