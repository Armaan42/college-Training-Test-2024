// Write a program to display the array element.

#include<iostream>
using namespace std;

int main(){
    int size;
    cin >> size;

    int arr[size];

    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    cout << "Array element: ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }cout << endl;
    return 0;
}
