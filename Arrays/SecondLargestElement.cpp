#include<bits/stdc++.h>
using namespace std;

int SecondLargestElement(int arr[], int n){
    if(n<2){
        return -1;
    }

    int largest=-1 , slargest=-1;
    for(int i=0; i<n; i++){
        if(arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        } else if(arr[i] > slargest && arr[i] != largest){
            slargest = arr[i];
        }
    }
    return slargest;
}

int main(){
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = SecondLargestElement(arr, n);
    if(result != -1){
        cout << "The second largest element is: " << result << endl;
    } else {
        cout << "There is no second largest element." << endl;
    }
    return 0;
}

// this is the most optimal solution with O(n) time complexity and O(1) space complexity
// it works by iterating through the array once, keeping track of the largest and second largest
// Bruteforce solution can go with O(nlog(n)+n) time complexity and O(1) space complexity
// Better solution is transversing array twice and time complexity is O(2n)
// this solution is optimal and works for all cases including negative numbers and duplicates