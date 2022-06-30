#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <set>
#include <map>
using namespace std;
typedef long long int ll;

int check(string s1,string s2,int i){
    for(int j = 0;j < s2.size();j++){
        if(s1[j + i] != s2[j]){
            return 0;
        }
    }
    return 1;
}

int main(){
    fstream file;
    file.open("rosalind_subs.txt",ios::in); 
    if(file.is_open()){
        string s1,s2;
        vector<int> v;
        getline(file,s1,'\n');
        getline(file,s2);
        for(int i = 0;i < s1.size();i++){
            if(s1[i] == s2[0]){
                if(check(s1,s2,i)){
                    v.push_back(i + 1);
                }
            }
        }
        for(int i = 0;i < v.size();i++){
            cout << v[i] <<  " ";
        } 
        cout << "\n";
        file.close(); 
    }
    return 0;
}