#include<bits/stdc++.h>
using namespace std;

int main(){

/*
int arr[10]={2,3,4};
cout<<"address of arr:"<<arr<<endl;
cout<<"address of arr:"<<arr[0]<<endl;
cout<<"address of arr:"<<arr[1]<<endl;
cout<<"address of arr:"<<&arr<<endl;
cout<<"address of arr:"<<*arr<<endl;
cout<<"address of arr:"<<*arr+1<<endl;

cout<<endl<<endl;

int i=3;
cout<<i[arr]<<endl;
cout<<*(i+arr)<<endl;


int temp[10]={1,3,5,7};
cout<<sizeof(temp)<<endl;
cout<<sizeof(*temp)<<endl;
cout<<sizeof(&temp)<<endl;

*/

int a[20]={3,4,6,7};
cout<<&a[0]<<endl;
cout<<&a<<endl;
cout<<a<<endl;

int *p=&a[0];
cout<<p<<endl;
cout<<*p<<endl;
cout<<&p<<endl;

return 0;
}