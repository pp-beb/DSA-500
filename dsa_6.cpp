#include<iostream>
using namespace std;

	int main()
	{
		int n;
		cout<<"enter the numbers of elements : ";
		cin>>n;
		int arr[n];
		int temp,i,j,k;
		cout<<"enter your elements :"<<endl;
		for(k=0;k<n;k++)
		{
			cin>>arr[k];
		}
		temp=arr[0];
		for(i=0;i<n-1;i++)
		{
			arr[i]=arr[i+1];
		}
		arr[n-1]=temp;
	
	for(j=0;j<n;j++)
	{
		cout<<arr[j]<<endl;
	}
	return 0;
}
	

