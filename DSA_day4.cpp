#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number of binary elements in your array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter your binary numbers";
	int i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]!=0 && arr[i]!=1)
		{
			cout<<"you are only supposed to enter binary data";
		return 0;
		}
	}
	int count0=0,count1=1;
	for(i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			arr[count0]=0;
			count0++;
		}
		if(arr[i]==1)
		{
			arr[n-count1]=1;
			count1++;
		}
	}
	cout<<"{";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<",";
	}
    cout<<"}";
}
