#include <iostream>

using namespace std;

int main()
{
    int a[]={34,5,4,3,4,24,2,42,42,56};
    int l=sizeof(a)/sizeof(a[0]);
    cout<<"Array Before deletion is:";
    for(int i=0;i<l;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int x;
    cout<<"Enter the position from where element is to be deleted:";
    cin>>x;
    l--;
    for(int i=x-1;i<l;i++){
        a[i]=a[i+1];
    }
    cout<<"\nArray after deletion is:";
    for(int i=0;i<l;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
