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

string code(string s){
    map<string,string> m;
    m["UUU"] = "F";m["CUU"] = "L";m["AUU"] = "I";m["GUU"] = "V";
    m["UUC"] = "F";m["CUC"] = "L";m["AUC"] = "I";m["GUC"] = "V";
    m["UUA"] = "L";m["CUA"] = "L";m["AUA"] = "I";m["GUA"] = "V";
    m["UUG"] = "L";m["CUG"] = "L";m["AUG"] = "M";m["GUG"] = "V";
    m["UCU"] = "S";m["CCU"] = "P";m["ACU"] = "T";m["GCU"] = "A";
    m["UCC"] = "S";m["CCC"] = "P";m["ACC"] = "T";m["GCC"] = "A";
    m["UCA"] = "S";m["CCA"] = "P";m["ACA"] = "T";m["GCA"] = "A";
    m["UCG"] = "S";m["CCG"] = "P";m["ACG"] = "T";m["GCG"] = "A";
    m["UAU"] = "Y";m["CAU"] = "H";m["AAU"] = "N";m["GAU"] = "D";
    m["UAC"] = "Y";m["CAC"] = "H";m["AAC"] = "N";m["GAC"] = "D";
    m["UAA"] = "";m["CAA"] = "Q";m["AAA"] = "K";m["GAA"] = "E";
    m["UAG"] = "";m["CAG"] = "Q";m["AAG"] = "K";m["GAG"] = "E";
    m["UGU"] = "C";m["CGU"] = "R";m["AGU"] = "S";m["GGU"] = "G";
    m["UGC"] = "C";m["CGC"] = "R";m["AGC"] = "S";m["GGC"] = "G";
    m["UGA"] = "";m["CGA"] = "R";m["AGA"] = "R";m["GGA"] = "G";
    m["UGG"] = "W";m["CGG"] = "R";m["AGG"] = "R";m["GGG"] = "G";    
    return m[s];
}

int main(){
    fstream file;
    file.open("rosalind_prot.txt",ios::in); 
    string s,s1,str = "";
    if (file.is_open()){
        getline(file, s);
        for(int i = 0;i < s.size();i = i + 3){
            s1 = code(s.substr(i,3));
            if(s1 == ""){
                break;
            }else{
                str = str + s1;
            }
        } 
        cout << str << "\n";
        file.close(); 
    }
    return 0;
}