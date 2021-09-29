#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr1[] = { 1, 2, 4, 5, 6 };
    int arr2[] = { 2, 3, 5, 7 };
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);
    cout<<"First Array:";
    for (int i=0;i<m;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    cout<<"Second Array:";
    for (int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    cout<<"Intersection of both arrays is:";
    int i=0,j=0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else{
            cout<<arr1[i]<<" ";
            i++; j++;
        }
    }
    return 0;
}
