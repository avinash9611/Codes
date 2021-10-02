#include <iostream>

using namespace std;

int main()
{
    int arr[]= { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int l=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array Before insertion is:";
    for(int i=0;i<l;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nEnter the element to be inserted:";
    int n;
    cin>>n;
    cout<<"\nEnter the position:";
    int x;
    cin>>x;
    l++;
    for(int i=l;i>=x-1;i--){
        arr[i]=arr[i-1];
    }
    arr[x-1]=n;
    cout<<"\nArray after insertion is:";
    for(int i=0;i<l;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
