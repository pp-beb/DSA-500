#include<iostream>
using namespace std;
int main()
{
	int arr[10]={0,1,2,3,4,5,6,7,8};
		int i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(arr[i]==arr[j] && i>j)
			{
				cout<<"The repeated element is: "<<arr[i]<<" which is the "<<i<<"th and "<<j<<"th term."<<endl;
			}
		}
	}
	return 0;
}
