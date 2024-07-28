#include<bits/stdc++.h>
using namespace std;

// int main() {
//     string temp = "Aman is a good great boy";
//     vector<string> st;
//     string a = "";

//     for (int i = 0; i < temp.size(); i++) {
//         if (temp[i] == ' ') {
//             st.push_back(a);
//             a = "";
//         } else {
//             a += temp[i];
//         }
//     }

//     // Push the last word
//     st.push_back(a);

//     sort(st.begin(), st.end());

//     for (int i = 0; i < st.size(); i++) {
//         cout << st[i] << " ";
//     }

//     return 0;
// }


bool compareDictionaryOrder(const string& a, const string& b) {
    if (tolower(a[0]) != tolower(b[0]))
        return tolower(a[0]) < tolower(b[0]);

  
    return a < b;
}

int main() {
    string sentence = "Aman is a good great boy";
    vector<string> words;
    string word;
    for (char c : sentence) {
        if (isspace(c)) {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }

    sort(words.begin(), words.end(), compareDictionaryOrder);

    for (const auto& w : words) {
        cout << w << " ";
    }
    cout << endl;
    return 0;
}
