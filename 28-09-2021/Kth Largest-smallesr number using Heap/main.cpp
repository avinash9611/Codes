#include <bits/stdc++.h>

using namespace std;

int kSmallest(int a[],int length,int k){
    priority_queue<int> maxh;
    for(int i=0;i<length;i++){
        maxh.push(a[i]);
        if((int)maxh.size()>k){
            maxh.pop();
        }
    }
    return maxh.top();
}

int kLargest(int a[],int length,int k){
    priority_queue<int,vector<int>,greater<int> > minh;
    for(int i=0;i<length;i++){
        minh.push(a[i]);
        if((int)minh.size()>k){
            minh.pop();
        }
    }
    return minh.top();
}

int main()
{
    int a[]={32,33,4,67,52,34,11,26,24,14};
    int l=sizeof(a)/sizeof(a[0]);
    int k=4;
    int kLarge=kLargest(a,l,k);
    int kSmall=kSmallest(a,l,k);
    cout<<k<<" th Largest number is:"<<kLarge<<endl;
    cout<<k<<" th Smallest number is:"<<kSmall<<endl;
    return 0;
}
