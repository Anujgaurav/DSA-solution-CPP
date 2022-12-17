#include<iostream>
using namespace std;
int fibbnoci(int n){

    if(n<=1){
    return 1;
    }
    else {
        return fibbnoci(n-1) + fibbnoci(n-2);
    }
}
int main(){
int n;
cin>>n;
cout<<fibbnoci(n);
return 0;
}