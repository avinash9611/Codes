#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[]={4,6,2,1,5,8,9};
    int l=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array before Reverse:";
    for(int i=0;i<l;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<l-i-1;i++){
        int temp=arr[i];
        arr[i]=arr[l-i-1];
        arr[l-i-1]=temp;
    }
    cout<<"Array after Reverse:";
    for(int i=0;i<l;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
