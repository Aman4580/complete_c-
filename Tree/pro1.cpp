#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool check(ListNode* head, TreeNode* root) {
        if (!root) return false;
        if (head->val != root->val) return false;
        if (head->next == NULL) return true;
        bool ans1 = false;
        bool ans2 = false;
        if (head->next && root->left && head->val == root->val) {
            ans1 = check(head->next, root->left);
        }
        if (head->next && root->right && head->val == root->val) {
            ans2 = check(head->next, root->right);
        }
        return ans1 || ans2;
    }

    bool isSubPath(ListNode* head, TreeNode* root) {
        if (!root) {
            return false;
        }  
        if (head->val == root->val) {
            if (check(head, root)) {
                return true;
            }
        }
        return isSubPath(head, root->left) || isSubPath(head, root->right);
    }
};

int main() {
    // Creating a linked list: 4 -> 2 -> 8
    ListNode* head = new ListNode(4);
    head->next = new ListNode(2);
    head->next->next = new ListNode(8);

    // Creating a binary tree:
    //         1
    //        / \
    //       4   4
    //      /   / \
    //     2   2   8
    //    /   /
    //   1   6
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(4);
    root->left->left = new TreeNode(2);
    root->left->left->left = new TreeNode(1);

    root->right = new TreeNode(4);
    root->right->left = new TreeNode(2);
    root->right->left->left = new TreeNode(6);
    root->right->right = new TreeNode(8);

    Solution sol;
    bool result = sol.isSubPath(head, root);
    
    if (result) {
        cout << "The linked list is a subpath of the binary tree." << endl;
    } else {
        cout << "The linked list is NOT a subpath of the binary tree." << endl;
    }

    return 0;
}
