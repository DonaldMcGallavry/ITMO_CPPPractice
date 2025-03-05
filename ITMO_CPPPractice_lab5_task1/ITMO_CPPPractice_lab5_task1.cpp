#include <iostream>

using namespace std;

int sumAll(int size, int arr[]) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int sumNegative(int size, int arr[]) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            sum += arr[i];
        }
    }
    return sum;
}
int sumPositive(int size, int arr[]) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            sum += arr[i];
        }
    }
    return sum;
}
int sumEvenIndex(int size, int arr[]) {
    int sum = 0;
    for (int i = 0; i < size; i += 2) {
        sum += arr[i];
    }
    return sum;
}
int sumUnevenIndex(int size, int arr[]) {
    int sum = 0;
    for (int i = 1; i < size; i += 2) {
        sum += arr[i];
    }
    return sum;
}
double calculateAverage(int size, int arr[]) {
    int sum = sumAll(size, arr);
    return static_cast<double>(sum) / size; //(double)sum
}

int main() {
    const int n = 10;
    int mas[n];

    for (int i = 0; i < n; i++) {
        cout << "mas[" << i << "]=";
        cin >> mas[i];
    }

    cout << "Sum all: " << sumAll(n, mas) << endl;
    cout << "Sum negative: " << sumNegative(n, mas) << endl;
    cout << "Sum positive: " << sumPositive(n, mas) << endl;
    cout << "Sum even index: " << sumEvenIndex(n, mas) << endl;
    cout << "Sum uneven index: " << sumUnevenIndex(n, mas) << endl;
    cout << "Среднее значение: " << calculateAverage(n, mas) << endl;

    return 0;
}