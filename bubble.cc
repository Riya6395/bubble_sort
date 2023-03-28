#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n);
int main()
{
    int arr[50];
    int i,n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubble_sort(arr,n);
    for(i=0;i<n;i++)
    {
       cout<<arr[i];
    }
    return 0;
}
void bubble_sort(int arr[],int n)
{
    int temp,i;
    for(int r=1;r<=n-1;r++)
    { 
        for(i=0;i<=n-1-r;i++)
        {
           if(arr[i]>arr[i+1])
         {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
         }
        }   
    }
}
