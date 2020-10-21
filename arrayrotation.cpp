#include <iostream>
using namespace std;

void leftRotateByOne(int arr[], int size){
    int temp = arr[0], i;
    for(i = 0; i < size - 1; i++)
        arr[i] = arr[i + 1];
    arr[i] = temp;
}

void leftRotate(int arr[], int size, int n){
    for(int i = 0; i < n; i++)
        leftRotateByOne(arr, size);
}

void printarray(int arr[], int size){
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(){
    int *arr, n, d;
    cin >> n;
    arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> d;
    if(d <= n){
        printarray(arr, n);
        leftRotate(arr, n, d);
        printarray(arr, n);
    }
    else
        cout << "You have entered a wrong size";    
}