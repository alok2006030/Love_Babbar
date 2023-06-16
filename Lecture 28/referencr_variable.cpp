#include<bits/stdc++.h>
using namespace std;

int main(){

int i=5;
//create reference variable
int &j=i;
i++;
cout<<i<<endl;
j++;
cout<<j<<endl;

return 0;
}