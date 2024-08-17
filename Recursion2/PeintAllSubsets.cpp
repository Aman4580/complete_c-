#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void helper(vector<int>& nums, vector<int>& ans, vector<vector<int>>& finalAns, int idx) {
        if (idx == nums.size()) {
            finalAns.push_back(ans);
            return;
        }

        // Include the current element
        ans.push_back(nums[idx]);
        helper(nums, ans, finalAns, idx + 1);

        // Exclude the current element (backtrack)
        ans.pop_back();
        helper(nums, ans, finalAns, idx + 1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> finalAns;
        helper(nums, ans, finalAns, 0);
        return finalAns;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 2, 3};

    vector<vector<int>> result = sol.subsets(nums);

    cout << "Subsets:" << endl;
    for (const auto& subset : result) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}
