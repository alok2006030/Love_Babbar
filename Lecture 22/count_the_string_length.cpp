#include<bits/stdc++.h>
using namespace std;
int getLength(char name[]){
int count=0;
for (int i = 0; name[i]!='\0'; i++)
{
    count=count+1;
}
return count;

}

int main(){

char name[20];
cin>>name;
cout<<getLength(name)<<endl;;


return 0;
}