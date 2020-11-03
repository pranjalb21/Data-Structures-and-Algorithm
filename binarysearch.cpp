#include<iostream>
using namespace std;

int main(){
    int *arr, size;
    cout << "Enter the array size:- ";
    cin >> size;
    arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element no. " << i + 1 << ":- ";
        cin >> arr[i];
    }
    int n, low = 0, middle, high = size - 1, f = 0;
    cout << "Enter the number to be searched:- ";
    cin >> n;
    while(low <= high){
        middle = (low + high) / 2;
        if (arr[middle] == n){
            cout << n << " is at position " << middle + 1 <<".";
            f = 1;
            break;
        }
        if (arr[middle] < n)
            low = middle + 1;
        else
            high = middle - 1;       
    }
    if(f != 1)
        cout << n << " is not found in the array.";
    return 0;

}