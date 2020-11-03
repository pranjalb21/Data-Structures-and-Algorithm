#include<iostream>
using namespace std;
int main()
{
    int arr1[] = {1,5,9, 10}, arr2[] = {2,6,7,20};
    cout << arr1[(sizeof(arr1) / sizeof(arr1[0])) / 2] << endl;
    cout << arr2[(sizeof(arr2) / sizeof(arr2[0])) / 2] << endl;
    return 0 ;
}