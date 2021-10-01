#include <bits/stdc++.h>

using namespace std;

void findDuplicate(string s,int n){
    map<char,int> mp;
    for(auto i:s){
        mp[i]++;
    }
    for(auto i:mp){
        if(i.second>1){
            cout<< i.first<<","<<i.second<<"\n";
        }
    }
}

int main()
{
    cout<<"Enter the string:";
    string s;
    cin>>s;
    int len=s.length();
    findDuplicate(s,len);
    return 0;
}
