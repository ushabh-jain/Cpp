//Write a program to find the sum of all the elements of an array.
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    const int n = 10;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum =0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<sum<<endl;
   return 0;
}