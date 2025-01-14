//Write a program to find the maximum element in an array.
int maxElement(int arr[], int N) {
    int largest = arr[0];
    
    for(int i=0;i<N;i++){
        if(largest<arr[i]){
            largest = arr[i];
        }
    }
    return largest;
  
}