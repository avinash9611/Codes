#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[]={32,5,76,8,7,56,46,46,4};
    int l=sizeof(a)/sizeof(a[0]);
    cout<<"Original Array:";
    for(int i=0;i<l;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int k;
    cin>>k;
    k=k%l;
    while(k){
        int temp=a[l-1];
        for(int i=l-1;i>0;i--){
            a[i]=a[i-1];
        }
        a[0]=temp;
        k--;
    }
    cout<<"\nRotated Array:";
    for(int i=0;i<l;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
