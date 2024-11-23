#include<iostream>
using namespace std;
int main()
{
	int arr[5]={1,6,4,3,8};
	int n,i,j,k;
	cout<<"Enter your target element: ";
	cin>>n;
	for(i=0;i<5;i++)
	{
		if(arr[i]==n)
		{
			cout<<"Target element found at index "<<i;
			return 0;
		}
	}
	cout<<"Target element not found";
	return 0;
}
