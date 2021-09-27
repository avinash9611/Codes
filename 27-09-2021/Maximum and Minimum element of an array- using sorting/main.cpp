#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[]={4,5,33,1,7,88,55,2};
    int l=sizeof(a)/sizeof(a[0]);
    cout<<"Array is";
    for(int i=0;i<l;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    sort(a,a+l);                     //Sorting the array in ascending order
    cout<<"Maximum Element is:"<<a[0]<<endl;
    cout<<"Minimum Element is:"<<a[l-1]<<endl;
    return 0;
}
