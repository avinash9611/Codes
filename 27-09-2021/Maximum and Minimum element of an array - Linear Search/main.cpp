#include <bits/stdc++.h>
using namespace std;

int findMax(int arr[],int len){    //Function to Find Maximum Value
    int maxEle=INT_MIN;
    for(int i=0;i<len;i++){
        if(maxEle<arr[i]){
            maxEle=arr[i];
        }
    }
    return maxEle;
}

int findMin(int arr[],int len){   //Function to Find Minimum Value
    int minEle=INT_MAX;
    for(int i=0;i<len;i++){
        if(minEle>arr[i]){
            minEle=arr[i];
        }
    }
    return minEle;
}

int main()
{
    int a[]={4,7,5,9,11,58,34};
    int l=sizeof(a)/sizeof(a[0]);
    cout<<"Array is:";
    for(int i=0;i<l;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int maxElement=findMax(a,l);    //Function Call
    int minElement=findMin(a,l);    //Function Call
    cout<<"Maximum element of an array is:"<<maxElement<<endl;
    cout<<"Minimum element of an array is:"<<minElement<<endl;
    return 0;
}
