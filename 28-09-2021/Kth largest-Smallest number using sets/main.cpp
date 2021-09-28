#include <bits/stdc++.h>

using namespace std;

int kLargest(int a[],int length,int k){
    set<int> s(a,a+length);
    set<int>::iterator it=s.end();
    for(int i=0;i<k;i++){
        it--;
    }
    return *it;
}

int kSmallest(int a[],int length,int k){
    set<int> s(a,a+length);
    set<int>::iterator it=s.begin();
    for(int i=0;i<k-1;i++){
        it++;
    }
    return *it;
}

int main()
{
    int a[]={43,6,7,21,35,83,57,33};
    int l=sizeof(a)/sizeof(a[0]);
    int k=4;
    int kLarge=kLargest(a,l,k);
    int kSmall=kSmallest(a,l,k);
    cout<<k<<" th Largest number is:"<<kLarge<<endl;
    cout<<k<<" th smallest number is:"<<kSmall<<endl;
    return 0;
}
