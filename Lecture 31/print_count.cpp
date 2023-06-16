#include<bits/stdc++.h>
using namespace std;

int count(int n){
    if(n==0) return 1;
    cout<<n<<endl;
    count(n-1);
}

int main(){

int n;
cin>>n;
count(n);

return 0;
}