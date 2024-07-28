#include <bits/stdc++.h>
using namespace std;

int main() {
    //  int arr[] = {1,2,3,1,2,3,4,5,5};
    //  int n= sizeof(arr)/sizeof(arr[0]);
    //  sort(arr,arr+n);
    //  int res = 0;
    //  for(int i=0;i<n;i++){
    //    res = res ^ arr[i];
    //  }
    //   cout<<res<<endl;
    string s = "Hello World";
    cout<<s<<endl;
    reverse(s.begin(),s.end());
      cout<<s<<endl;
       string ans;
        string word;
        stringstream str(s);
        while (str >> word) {
            ans += word + " ";
        }
        cout<<ans<<endl;
       int count =0;
       for (int i = 0; i < ans.size(); i++) {
            if (ans[i]!=' '){
                  count++;
            }else{
                break;
            }
        }
        cout<<count;
    return 0;
}
