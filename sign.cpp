#include <iostream>
#include <vector>
#include <stack>
#include <fstream>
using namespace std;

class Solution {
public:
    void perm(vector<vector<int>> &ans, vector<int>& nums, int j, int n) {
	    if(j == n){
		    ans.push_back(nums);
		    return;
	    }
	    for(int i = j; i < n; i++) {
		    swap(nums[i], nums[j]);
   		    perm(ans, nums, j+1, n);
   		    nums[j] = -nums[j];
   		    perm(ans, nums, j+1, n);
		    swap(nums[i], nums[j]);
	    }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> arr;vector<int> str;
        perm(arr,nums,0,nums.size());
        return arr;
    }
};

int main()
{
    cout << "Enter n:\n";
    int n;
    cin >> n;
    Solution s;
    vector<int> v;
    for(int i = 0;i < n;i++){
        v.push_back(i+1);
    }
    vector<vector<int>> vec;
    vec = s.permute(v);
    vector<int> v2;
    int num = vec.size();
    ofstream myfile;
    myfile.open ("rosalind_sign.txt");
    myfile << num << "\n";
    for(int i = 0;i < num;i++){
        for(int j = 0;j < vec[i].size();j++){
            myfile << vec[i][j] << " ";
        }
        myfile << "\n";
    }
    myfile.close();
    return 0;
}


