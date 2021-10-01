#include <bits/stdc++.h>

using namespace std;

bool check(string s,int n){
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1])
            return false;
    }
    return true;
}

int main()
{
    cout << "Enter the String:";
    string s;
    getline(cin,s);
    int len=s.length();
    bool val=check(s,len);
    if(val==true){
        cout<<"String is Palindrome\n";
    }
    else{
        cout<<"String is not Palindrome\n";
    }
    return 0;
}
