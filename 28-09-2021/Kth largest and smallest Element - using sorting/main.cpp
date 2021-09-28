#include <bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
    int a[]={10,5,13,68,46,31,67,33,14};
    int k=4;
    int l=sizeof(a)/sizeof(a[0]);
    sort(a,a+l,greater<int>());       //Sorted in descending order
    cout<<k<<" Largest Element is: "<<a[k-1]<<endl;
    reverse(a,a+l);                   //Reversed the array
    cout<<k<<" smallest Element is: "<<a[k-1]<<endl;
    return 0;
}
