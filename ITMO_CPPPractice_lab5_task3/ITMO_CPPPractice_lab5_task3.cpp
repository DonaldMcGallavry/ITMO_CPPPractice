#include <iostream>

using namespace std;

int searchWithTransposition(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            if (i > 0) {
                swap(arr[i], arr[i - 1]);
            }
            return i;
        }
    }
    return -1;
}

int main() {
    const int size = 10;
    int arr[size] = { 5, 3, 8, 4, 2, 7, 1, 9, 6, 0 };

    int key;
    cout << "Enter element for search: ";
    cin >> key;

    int index = searchWithTransposition(arr, size, key);

    if (index != -1) {
        cout << "Element is found under index: " << index << endl;
    }
    else {
        cout << "Element is not found." << endl;
    }

    cout << "Array after search: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}