//Write a program to copy the elements of an array a to the another array b in reverse order.



#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int arr1[10];
    int arr2[10];
    for(int i=0;i<10;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<10;i++){
        arr2[10-i-1]=arr1[i];
    }
    for(int i=0;i<10;i++){
        cout<<arr2[i]<<endl;
    }
   return 0;
}


//see this why we use vector because we don't know the size know for size we will use vector see bola tha vector saada yaara hai yaara


#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr;  // Dynamic array
    vector<int> arr1; // For reversed elements

    int n; // Size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    arr.resize(n);  // Resize the vector to hold 'n' elements
    arr1.resize(n); // Resize arr1 to the same size

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input elements into the vector
    }

    // Reverse the elements into arr1
    for (int i = 0; i < n; i++) {
        arr1[n - i - 1] = arr[i];
    }

    // Output the reversed array
    cout << "Reversed array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << endl;
    }

    return 0;
}
