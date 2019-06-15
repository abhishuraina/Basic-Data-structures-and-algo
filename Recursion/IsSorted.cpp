//Check if the array is sorted or not using recursion


#include<bits/stdc++.h>
using namespace std;
bool issorted(long int arr[],int n)
{	
	if(n==1)
	return 1;
	
	
	if(arr[0]<arr[1] && issorted(arr,n-1))
		return 1;
		
		else 
		return false;
}

int main(){
	long int arr[1000];
	int n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	if(issorted(arr,n))
	cout<<"array is sorted";
	else
	cout<<"array is not sorted";
	return 0;
	
}
