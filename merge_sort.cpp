#include<iostream>
using namespace std;

int merge_sort(int, int, int);
int merge(int arr[], int, int, int);
int main(){
    int arr[] = {9, 8, 5, 0, 1, 2};
    cout << "Unsorted array:-\n";
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        cout << arr[i] << " ";
    }
    merge_sort(arr, 0, sizeof(arr)/sizeof(arr[0]))
}

int merge_sort(int arr[], int start, int end){
    if(start < end){
        int mid = (start + end)/2;
        merge_sort(arr, start, mid);
        merge_sort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int merge(int arr[], int start, int mid, int end){
    
}