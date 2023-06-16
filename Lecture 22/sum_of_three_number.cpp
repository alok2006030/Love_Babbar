#include<bits/stdc++.h>
using namespace std;

int sumNumber(int num1, int num2,int num3){
    int add=num1+num2+num3;
    return add;
}

int main(){

int a, b, c;
cin>>a>>b>>c;
cout<<sumNumber(a,b,c);
return 0;
}