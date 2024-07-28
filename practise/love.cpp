#include <bits/stdc++.h>
using namespace std;

int calculateLovePercentage(const string& name1, const string& name2) {
    string combinedNames = name1 + "loves" + name2;
    transform(combinedNames.begin(), combinedNames.end(), combinedNames.begin(), ::tolower);

    int count1 = 0, count2 = 0;
    for (char c : combinedNames) {
        if (c == 'l' || c == 'o' || c == 'v' || c == 'e' || c == 's') {
            count1++;
        }
        if (c == 'l' || c == 'o' || c == 'v' || c == 'e') {
            count2++;
        }
    }

    int lovePercentage = (count2 * 100) / count1;
    return lovePercentage;
}

int main() {
    string name1, name2;
    cout << "Enter the name of person 1: ";
    cin >> name1;
    cout << "Enter the name of person 2: ";
    cin >> name2;

    int lovePercentage = calculateLovePercentage(name1, name2);

    cout << "Love percentage between " << name1 << " and " << name2 << " is: " << lovePercentage << "%" << endl;

    return 0;
}
