#include <iostream>
using namespace std;
int main(){

int arr[5]={1,2,3,4,5};
int i,j,k,sum=0,count=0;
for( i=0 ; i<5 ; i++)
{
	for(j=i;j<5;j++)
	{
			for(k=i;k<=j;k++)
			{
				sum=sum+arr[k];
				if(sum==7)
				{
					count++;
				}
			}	
	}
sum=0;	
}
cout<<"There are "<<count<<" subarrays that add up to 7";
return 0;
}
