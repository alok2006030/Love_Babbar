#include<bits/stdc++.h>
using namespace std;

//print row wise sum
void printSum(int arr[][4], int row, int col){
int sum=0;
for (int col=0; col<4; col++)
{
    sum+=arr[row][col];
}
cout<<sum<<" "<<endl;

}
int main(){



return 0;
}