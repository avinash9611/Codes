/*
 A company is transmitting data to another server. The server is in the form of numbers to secure
 the data during transmission. They plan to obtain a security key that will be sent along with the
 data. The security is identified as the count of the repeating digits in the data.
 write an algorithm to find the security key for the data.


 Example: I/  578378923
          O/   3    since, 7,8 and 3 are repeating
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<endl;
    unordered_map<int,int> mp;
    while(n){
        int digit=n%10;
        mp[digit]++;
        n/=10;
    }
    int count=0;
    for(auto i:mp){
        if(i.second>1){
            count++;
        }
    }
    cout<<count;
    return 0;
}
