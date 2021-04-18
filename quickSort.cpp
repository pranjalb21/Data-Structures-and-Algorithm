#include <iostream>
using namespace std;

int QuickSort(int arr[], int start, int end);
int Partition(int arr[], int start, int end);
void swap(int *a, int *b);

int main(){
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout << "\nArray before sorting:-\n";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    QuickSort(arr, 0, size - 1);
    cout << "\nArray after sorting:-\n";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }


}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int QuickSort(int arr[], int start, int end){
    if(start < end){
        int q = Partition(arr, start, end);
        QuickSort(arr, start, q - 1);
        QuickSort(arr, q + 1, end);
    }
}

int Partition(int arr[], int start, int end){
    int x = arr[end];
    int i = start - 1;
    for(int j = start; j <= end - 1; j++){
        if(arr[j] <= x){
            swap(arr[j], arr[++i]);
        } 
    }
    swap(arr[++i], arr[end]);
    return i;
}