/*
    Given two non-negative integers n1 and n2, where n1<n2.
    The task is to find the total number of integers in the range
    interval [n1,n2] (both inclusive) which have no repeated digits
*/

#include <bits/stdc++.h>

using namespace std;

int countingNonrepeat(int s,int e){
    int count=0;
    for(int i=s;i<=e;i++){
        int n=i;
        map<int,int> mp;
        while(n){
            int digit=n%10;
            mp[digit]++;
            n=n/10;
        }
        int flag=1;
        for(auto i:mp){
            if(i.second>1){
                flag=0;
                break;
            }
        }
        if(flag!=0){
            count++;
        }
    }
    return count;
}

int main()
{
    int n1, n2;
    cin>>n1>>n2;
    int count=countingNonrepeat(n1,n2);
    cout<<count;
    return 0;
}

