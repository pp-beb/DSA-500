#include<iostream>
using namespace std;
int main()
{
	int arr[10]={ 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
	int i,j,k;
	for (i=0;i<10;i++)
	{
		int sum=0;
		for(j=i;j<10;j++)
		{
		
		sum=sum+arr[j];
		if(sum==0)
		{
			cout<<"{";
			 for(k=i;k<=j;k++)
			 {
				cout<<arr[k];
				if(k<j)
				 {
					cout<<",";
				 }
			
			 } 
		cout<<"}"<<endl;	
		}
	 }
	}
	return 0;
}
