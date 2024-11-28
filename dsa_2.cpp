#include <iostream>
using namespace std;
int main(){

int arr[5]={1,2,3,4,5};
int i,j,k;
for( i=0 ; i<5 ; i++)
{
	for(j=i;j<5;j++)
	{
			for(k=i;k<=j;k++)
			{
				cout<<arr[k]<<" ";
			}
	cout<<endl;	
	}
	
}
	cout<<"taking a day off";
return 0;
}
