#include<bits/stdc++.h>
using namespace std;
int fact={0:0 , 1:1}
primefact(int n){
    if(n%1==0){
        return 1;
    }
    else return n*primefact(n-1);

  }
int main(){
 int n;
 cin>>n;
 cout<<primefact(n);




}