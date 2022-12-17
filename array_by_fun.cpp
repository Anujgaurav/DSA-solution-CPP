#include<iostream>
using namespace std;
int printsum(){
int n;
cin>>n;
int a[n];
for(int i=0; i<n; ++i){
    cin>>a[i];
}
int sum=0;
for(int i=0;i<n; ++i){
    sum=sum+a[i];
}
return sum;
}
int main(){
cout<<printsum();
return 0;
}