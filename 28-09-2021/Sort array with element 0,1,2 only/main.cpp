/*
 Rather than this method wee can simply count the occurrence of each element
 then print them.
 There will be no change in the complexity.
*/

#include <bits/stdc++.h>

using namespace std;

void sorting(int a[],int length){
    int l=0;
    int m=0;
    int h=length-1;

    while(m<=h){
        if(a[m]==0){
            swap(a[l++],a[m++]);
        }
        else if(a[m]==1){
            m++;
        }
        else if(a[m]==2){
            swap(a[m],a[h--]);
        }
    }
}

int main()
{
    int a[]={0,0,1,1,2,0,1,1,0,0,2,1,1};
    int l=sizeof(a)/sizeof(a[0]);
    cout<<"Elements before sorting:";
    for(int i=0;i<l;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    sorting(a,l);
    cout<<"Elements after sorting:";
    for(int i=0;i<l;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
