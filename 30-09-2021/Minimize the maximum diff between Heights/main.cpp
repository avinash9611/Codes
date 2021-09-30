/*
Given an array arr[] denoting heights of N towers and a positive integer K,
you have to modify the height of each tower either by increasing or decreasing
them by K only once. After modifying, height should be a non-negative integer.
Find out what could be the possible minimum difference of the height of shortest
and longest towers after you have modified each tower.
*/

#include <bits/stdc++.h>

using namespace std;

int finddiff(int a[],int n,int k){
    sort(a,a+n);
    a[0]=a[0]+k;
    a[n-1]=a[n-1]-k;
    if(a[n-1]<0){
        a[n-1]=a[n-1]+2*k;
        return a[n-1]-a[0];
    }
    else
        return a[n-1]-a[0];
}

int main()
{
    int K = 3,N = 5;
    int arr[] = {3, 9, 12, 16, 20};
    cout<<"The minimum difference is:"<<finddiff(arr,N,K);
    return 0;
}
