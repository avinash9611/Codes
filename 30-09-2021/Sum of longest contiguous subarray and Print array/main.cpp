#include <bits/stdc++.h>

using namespace std;

void subArray(int a[],int n){
    int till_now=INT_MIN,curr_sum=0;
    int s=0;
    int starting,ending;
    for(int i=0;i<n;i++){
        curr_sum+=a[i];
        if(till_now<curr_sum){
            till_now=curr_sum;
            starting=s;
            ending=i;
        }
        if(curr_sum<0){
            curr_sum=0;
            s=i+1;
        }
    }
    cout<<"The sum of the longest contiguous sub array is: "<<till_now<<endl;
    cout<<"And the Array is:";
    for(int i=starting;i<=ending;i++){
        cout<<a[i]<<" ";
    }
}

int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int l=sizeof(a)/sizeof(a[0]);
    cout<<"Original Array is:";
    for (int i=0;i<l;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    subArray(a,l);
    return 0;
}
