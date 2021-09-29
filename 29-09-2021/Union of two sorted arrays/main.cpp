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
    cout<<"Union of both the array is:";
    int i=0,j=0;
    while(i<m && j<n){
            if(arr1[i]<arr2[j]){
                cout<<arr1[i]<<" ";
                i++;
            }
            else if(arr1[i]>arr2[j]){
                cout<<arr2[j]<<" ";
                j++;
            }
            else{
                cout<<arr1[i]<<" ";
                i++; j++;
            }
        }
    while(i<m){
        cout<<arr1[i++]<<" ";
    }
    while(j<n){
        cout<<arr2[j++]<<" ";
    }
    return 0;
}
