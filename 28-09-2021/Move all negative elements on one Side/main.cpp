#include <bits/stdc++.h>

using namespace std;

void switching(int a[],int length){
    int l=0;
    int r=0;
    while(r<=length){
        if(a[r]<0){
            swap(a[r++],a[l++]);
        }
        else{
            r++;
        }
    }
}

int main()
{
    int a[]={23,-5,-34,-23,56,-1,44,-21,12,76};
    int l=sizeof(a)/sizeof(a[0]);
    cout<<"Elements Before:";
    for(int i=0;i<l;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    switching(a,l);
    cout<<"Elements After:";
    for(int i=0;i<l;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
