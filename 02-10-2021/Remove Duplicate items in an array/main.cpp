#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[]={45,32,45,6,65,32,56,44,65};
    int l=sizeof(a)/sizeof(a[0]);
    cout<<"Array before is:";
    for(int i=0;i<l;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n\nInitial size of array is:"<<l;
    unordered_set<int> s;
    for(auto i:a){
        s.insert(i);
    }
    cout<<"\n\nArray after is:";
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<"\n\nFinal size of array is:"<<s.size()<<endl;
    return 0;
}
