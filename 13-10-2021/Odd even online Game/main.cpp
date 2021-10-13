/*
  Take array as an input and then put all even numbers before odd numbers
*/


#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<endl;
    int start=0;
    int ending=0;
    while(ending<n){
        if(a[ending]%2==0){
            swap(a[start++],a[ending++]);
        }
        else
            ending++;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
