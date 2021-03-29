#include<iostream>
using namespace std;

int main(){
    int arr[] = {5, 6, 3, 1, 9, 0};
    cout << "Unsorted array:-\n";
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        cout << arr[i] << " ";
    }
    for(int i = 1; i < sizeof(arr)/sizeof(arr[0]); i++){
        int key = arr[i];
        int j = i - 1;
        while(j >=0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j + 1] = key;
    }
    cout << "Unsorted array:-\n";
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        cout << arr[i] << " ";
    }
}