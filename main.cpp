#include <iostream>
using namespace std;

void printArr(int arr[], int size){
    int i = 0;
    do{
        cout << arr[i] << " ";
        i++;
    }while(i<size); 
    cout << endl;
}

void bubbleSort(int arr[], int size){
    for(int i = 0 ; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j+1]){
                int temp  = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                // printArr(arr, size);
            }
        }
    }
}

void selectionSort(int arr[], int size){
    int lowest;
    for(int i = 0; i<size-1; i++){
        lowest = i;
        for(int j = i+1; j<size; j++){
            if(arr[j]<arr[lowest]){
                lowest = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[lowest];
        arr[lowest] = temp;
        printArr(arr, size);
    }
}




int main(){

    int size = 0;
    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size];
    for(int i = 0; i<size; i++){
        cout << "Enter a number for index [" << i << "]: ";
        cin >> arr[i];
    }

    cout << "Array before sorting: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << "Array before sorting: ";
    cout << endl;

    // bubbleSort(arr, size);
    selectionSort(arr, size);

    cout << "Array after sorting: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << "Array after sorting: " ;
    cout << endl;

    return 0;
}