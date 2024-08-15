#include<bits/stdc++.h>
using namespace std;
class MaxHeap{
    vector<int>hp;
            void upHeapify(int ci){
        while(ci>0){
            int pi =( ci-1)/2;
            if(hp[ci]>hp[pi]){
                swap(hp[ci],hp[pi]);
                ci = pi;
            }else{
                break;
            }
        }
        }
        void downHeapify(int idx){
            while(idx<hp.size()){
                int lc = 2*idx+1;
                int rc = 2*idx+2;
                if(lc>=hp.size()) return;
                int maxEle = idx;
                if(hp[lc]>hp[maxEle]){
                    maxEle = lc;
                }
                if(hp[rc]>hp[maxEle]){
                    maxEle = rc;
                }
                
                if(maxEle!=idx){
                    swap(hp[maxEle],hp[idx]);
                    idx = maxEle;
                }else{
                 break;   
                }
            }
        }
    public:
        bool empty(){
            return hp.size()==0;
        }
        void display(){
            cout<<" [";
            for(int i=0;i<hp.size();i++){
                cout<<hp[i]<<" ";
            }
            cout<<"]";
        }
        void push(int ele){
            hp.push_back(ele);
            upHeapify(hp.size()-1);
        }
        int peak(){
            return hp[0];
        }
        void pop(){
            if(empty()) return;
            swap(hp[0],hp[hp.size()-1]);
            hp.pop_back();
            downHeapify(0);
        }
    };
int main(){
  MaxHeap hep;
   hep.push(200);
   hep.push(99);
   hep.push(101);
   hep.push(12);
   hep.push(15);
   hep.push(22);
   hep.display();
   cout<<endl;
   cout<<hep.empty()<<endl;
   cout<<hep.peak()<<endl;
   hep.pop();
   hep.display();
    return 0;

}   