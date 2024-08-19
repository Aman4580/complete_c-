#include<bits/stdc++.h>
using namespace std;

void printPermutation(vector<int> nums, int ind, vector<vector<int>> &ans) {
    if(ind >= nums.size()) {
        ans.push_back(nums);
        return;
    }
    for(int k = ind; k < nums.size(); k++) {
        swap(nums[ind], nums[k]);
        printPermutation(nums, ind + 1, ans); // Increment ind to move to the next index
        // backtrack
        swap(nums[ind], nums[k]);
    }
}

int main() {
    vector<int> nums = {1, 1, 3};
    vector<vector<int>> ans;
    int ind = 0;
    printPermutation(nums, ind, ans);
    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j];
        }
        cout << endl;
    }

    return 0;
}
