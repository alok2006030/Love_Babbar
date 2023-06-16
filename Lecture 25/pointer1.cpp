#include<bits/stdc++.h>
using namespace std;

int main(){
// int *p=0;

// cout<<*p<<endl;
/*
int i=5;
int *p=0;
p=&i;
cout<<p<<endl;
cout<<&p<<endl;
*/
int n=5;
int *p=&n;
cout<<n;
(*p)++;
cout<<n<<endl;
return 0;
}