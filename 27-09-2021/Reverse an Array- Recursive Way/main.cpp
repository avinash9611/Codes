#include <bits/stdc++.h>

using namespace std;

void reverseTheArray(int arr[],int start,int last){     //Function to reverse the Array
    if(start<last){
        int temp=arr[start];
        arr[start]=arr[last];
        arr[last]=temp;
        reverseTheArray(arr,start+1,last-1);
    }
}

int main()
{
    int a[]={6,7,4,3,2,1,9};
    int l=sizeof(a)/sizeof(a[0]);
    cout<<"Array before reverse:";
    int i;
    for(i=0;i<l;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    reverseTheArray(a,0,l-1);    //Function Calling
    cout<<"Array after reverse:";
    for(i=0;i<l;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
