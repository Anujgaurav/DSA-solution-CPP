#include<iostream>
using namespace std;
int main()
{
int a;
 int b;
cout<<"enter the value of a"<<endl;
cin>>a;
cout<<"enter the value of b"<<endl;
cin>>b;
char op;
cout<<"enter any operation +,-,*,/,%"<<endl;
cin>>op; 
 switch(op){
    case '*':cout<<a*b<<endl;
    break;
    case '+': cout<<a+b<<endl;
    break;
    case '-': cout<<a-b<<endl;
    break;
    case '/': cout<<a/b<<endl;
    break;
    case '%': cout<<a%b<<endl;
    break;
   default :cout<<" bhai chuttiya buttiya hai kya tu"<<endl<<endl;
 }

}