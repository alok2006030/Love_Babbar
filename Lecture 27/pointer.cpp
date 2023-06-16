#include<bits/stdc++.h>
using namespace std;

int main(){

int i=5;
int*p=&i;
int**p2=&p;
cout<<endl<<endl<<endl;
cout<<"print p: "<<p<<endl;
cout<<"print p: "<<&p<<endl;
cout<<"print p: "<<&p2<<endl;
cout<<"print p: "<<*p<<endl;
cout<<"print p: "<<*p2<<endl;
cout<<"print p: "<<**p2<<endl;

return 0;
}