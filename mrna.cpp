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

int code(char s){
    map<char,int> m;
    m['F'] = 2;m['L'] = 6;m['I'] = 3;m['V'] = 4;
    m['M'] = 1;m['A'] = 4;m['S'] = 6;m['Y'] = 2;
    m['P'] = 4;m['T'] = 4;m['H'] = 2;m['N'] = 2;
    m['D'] = 2;m['Q'] = 2;m['E'] = 2;m['K'] = 2;
    m['C'] = 2;m['R'] = 6;m['G'] = 4;m['W'] = 1;    
    return m[s];
}

int main(){
    fstream file;
    file.open("rosalind_mrna.txt",ios::in); 
    string s;
    int m = 1;
    if (file.is_open()){
        getline(file, s);
        for(int i = 0;i < s.size();i++){
            m = (m * code(s[i])) % 1000000;
        } 
        cout << 3*m << "\n";
        file.close(); 
    }
    return 0;
}