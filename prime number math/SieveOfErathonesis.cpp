#include<bits/stdc++.h>
using namespace std;
 void fillsieve( vector<bool> &sieve){
     int n= sieve.size()-1;
     for(int i=2;i<=sqrt(n);i++){
         for(int j=i*2;j<=n;j=j+i){
             sieve[j]=0;
         }
     }
 }
int main(){
    // Given an integer n, return the number of prime numbers that are strictly less than n.
int n;
cout<<"enter the number for count prime "<<endl;
cin>>n;
n=n-1;
int count =0;
if( n ==0 || n==1 || n==2 ) return 0;
 vector<bool>sieve(n+1,1);  // 1 for prime 
      fillsieve(sieve);
      sieve[0]=0;
      sieve[1]=0;
      for(int i=2;i<=n;i++){
          if(sieve[i]==1){
              count++;
          }
}
cout <<count<<endl;
return 0;
}