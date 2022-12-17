#include<iostream>
using namespace std;
// int main(){
//  int a;
//  cin>>a;
//  if(a&1){
//     cout<<"odd"<<endl;
//  }
//  else {
//     cout<<"even"<<endl;
//  }
 int iseven(){
    int a;
    cin>>a;
    if(a&1){
        cout<<"odd"<<endl;
    }
    else{
        cout<<"even"<<endl;
    }
 }
int main(){
    iseven();
return 0;
}