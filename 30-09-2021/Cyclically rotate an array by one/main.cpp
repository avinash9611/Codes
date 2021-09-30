#include <bits/stdc++.h>

using namespace std;

void cyclicallyRotate(int a[],int n){
    int temp=a[n-1];                //Store the last value in one temporary value
    for(int i=n-1;i>0;i--){
        a[i]=a[i-1];                //Move each element by one place
    }
    a[0]=temp;                      //Store last element value in the first element
}

int main()
{
    int a[]={1,2,3,4,5,6,7,8};
    int len=sizeof(a)/sizeof(a[0]);
    cout<<"Original array is:";
    for(int i=0;i<len;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cyclicallyRotate(a,len);
    cout<<"Cyclically rotated array is:";
    for(int i=0;i<len;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
