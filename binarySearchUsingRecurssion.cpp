#include<iostream>
using namespace std;

int binSearch(int arr[], int low, int high, int value){
    while (low <= high)
    {
        int middle = (low + high) / 2;
        if(arr[middle] == value)
            return middle;
        else if(arr[middle] < value)
            return binSearch(arr, middle + 1, high, value);
        else
            return binSearch(arr, low, middle - 1, value);
        
    }
    return -1;
    
}
int main(){
    int *arr, size, n, result;
    cout << "Enter the array size:- ";
    cin >> size;
    arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element no. " << i + 1 << ":- ";
        cin >> arr[i];
    }
    cout << "Enter the number to be searched:- ";
    cin >> n;
    result = binSearch(arr, 0, size, n);
    if (result < 0)
        cout << n << " is not found in the array.";
    else
        cout << n << " is found at position " << result + 1;
    return 0;
}