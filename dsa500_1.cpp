#include <iostream>
using namespace std;
int main(){
int arr[10]={0,1,2,3,4,5,6,7,8,9};
int i,j;
for ( i = 0; i < 10; i++)
{
    for ( j = 0; j < 10; j++)
{
    if (arr[i]+arr[j]==10 && i!=j && arr[i]<arr[j])
    {
        cout<<i<<" and "<<j<<endl;
    }
    
}
}
return 0;
}

