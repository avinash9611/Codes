#include <iostream>

using namespace std;

int main()
{
    string s="Tower";
    cout<<"Original string is:"<<s<<endl;
    int len=s.length();
    for(int i=0;i<len/2;i++){
        swap(s[i],s[len-i-1]);
    }
    cout<<"Reverse string is:"<<s<<endl;
    return 0;
}
