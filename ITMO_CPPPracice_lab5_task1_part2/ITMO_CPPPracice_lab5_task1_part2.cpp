#include <iostream>

using namespace std;

void selectionSort(int size, int arr[]) {
    int min = 0;
    int buf = 0;

    for (int i = 0; i < size; i++) {
        min = i; 

        for (int j = i + 1; j < size; j++) {

            min = (arr[j] < arr[min]) ? j : min;
        }
      
        if (i != min) {
            buf = arr[i];
            arr[i] = arr[min];
            arr[min] = buf;
        }
    }
}

void printArray(int size, int arr[]) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << '\t';
    }
    cout << endl;
}

int main() {
    const int N = 10;
    int a[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };

    cout << "Original array " << endl;
    printArray(N, a);
    selectionSort(N, a);
    cout << "Sorted array " << endl;
    printArray(N, a);

    return 0;
}