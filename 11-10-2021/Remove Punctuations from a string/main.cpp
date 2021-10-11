/*
 Remove all punctuations from any given string
 Like: !,*,& etc.
*/

#include <iostream>

using namespace std;

int main()
{
    string str;
    cout<<"Enter the string with punctuations: ";
    getline(cin,str);
    int len=str.size();
    for(int i=0;i<len;i++){
        if(ispunct(str[i])){
            str.erase(i--,1);
            len=str.size();
        }
    }
    cout<<"\nString after removing punctuation is: "<<str<<endl;
    return 0;
}
