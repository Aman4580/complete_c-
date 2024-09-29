#include <bits/stdc++.h>
using namespace std;

int main() {
    int row, col;
    cin >> row >> col;
    vector<vector<int>> vec;

    for (int i = 0; i < row; i++) {
        vector<int> temp;
        for (int j = 0; j < col; j++) {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        vec.push_back(temp);
    }

    vector<pair<int, int>> p;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (vec[i][j] == 0) {
                p.push_back({i, j});
            }
        }
    }

    for (int i = 0; i < p.size(); i++) {
        int x = p[i].first; 
        int y = p[i].second; 

        if (x - 1 >= 0 && y - 1 >= 0) {
            vec[x - 1][y - 1] = 0; 
        }
        if (x - 1 >= 0 && y + 1 < col) {
            vec[x - 1][y + 1] = 0; 
        }
        if (x + 1 < row && y - 1 >= 0) {
            vec[x + 1][y - 1] = 0; 
        }
        if (x + 1 < row && y + 1 < col) {
            vec[x + 1][y + 1] = 0; 
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << vec[i][j] << "   ";
        }
        cout << endl;
    }

    return 0;
}
