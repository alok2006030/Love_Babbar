#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;
int i=2;
while (i<n)
{
    if (n%2==0)
    {
        cout<<"Not prime"<<endl;
    }
    else
    {
        cout<<"Prime"<<endl;
    }
    i++;
    
}


return 0;
}