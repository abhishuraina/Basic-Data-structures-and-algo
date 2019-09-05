#include <bits/stdc++.h>

using namespace std;
const int N = 1e6;
int arr[N];
int n;
void bubble()
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }

}


int main() 
{
   

    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];

    bubble();
    for(int i=0;i<n;i++)
    cout<<arr[i];



}
