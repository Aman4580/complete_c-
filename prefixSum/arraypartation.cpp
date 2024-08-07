#include<bits/stdc++.h>
using namespace std;
void printPermutation(vector<int> nums, vector<vector<int>> &ans ,int ind){
    if(ind >= nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int k = ind; k < nums.size(); k++){
        swap(nums[ind], nums[k]);
        printPermutation(nums, ans, ind + 1); // Increment ind
        // Backtrack
        swap(nums[ind], nums[k]);
    }
}

int main(){
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans;
    int ind = 0;
    printPermutation(nums, ans, ind);
    
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}
