#include<bits/stdc++.h>
using namespace std;

int main(){

int n=5;
cout<<n<<endl;
//address of this number -&
cout<<"address of n"<<endl<<&n<<endl;


//pointer
int *ptr=&n;
cout<<*ptr<<endl;
cout<<ptr<<endl;
cout<<sizeof(n)<<endl;

return 0;
}