#include <bits/stdc++.h>
using namespace std;

// Global dp array
vector<vector<int>> dp;

// Function to compute the length of LCS
int lcs(string &s1, string &s2, int i, int j) {
    if (i >= s1.size() || j >= s2.size()) return 0;
    if (dp[i][j] != -1) return dp[i][j];
    if (s1[i] == s2[j]) {
        return dp[i][j] = 1 + lcs(s1, s2, i + 1, j + 1);
    } else {
        return dp[i][j] = max(lcs(s1, s2, i + 1, j), lcs(s1, s2, i, j + 1));
    }
}

// Function to reconstruct the LCS
string printLcs(string &s1, string &s2, int i, int j) {
    if (i >= s1.size() || j >= s2.size()) return "";
    if (s1[i] == s2[j]) {
        return s1[i] + printLcs(s1, s2, i + 1, j + 1);
    } else {
        if (dp[i + 1][j] > dp[i][j + 1]) {
            return printLcs(s1, s2, i + 1, j);
        } else {
            return printLcs(s1, s2, i, j + 1);
        }
    }
}

int main() {
    dp.clear();
    dp.resize(1005, vector<int>(1005, -1));

    string s1 = "abcdabc";
    string s2 = "bcbcda";

    // Compute the length of LCS
    int lcsLength = lcs(s1, s2, 0, 0);
    cout << "Length of LCS: " << lcsLength << endl;

    // Print the LCS
    string lcsString = printLcs(s1, s2, 0, 0);
    cout << "LCS: " << lcsString << endl;

    return 0;
}
