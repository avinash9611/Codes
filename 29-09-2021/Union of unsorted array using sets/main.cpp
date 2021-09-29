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
    set<int> s;
    for(int i=0;i<m;i++){
        s.insert(arr1[i]);
    }
    for(int i=0;i<n;i++){
        s.insert(arr2[i]);
    }
    set<int>::iterator i;
    cout<<"Union of both the array is:";
    for (i=s.begin();i!=s.end();i++){
        cout<<*i<<" ";
    }
    return 0;
}
