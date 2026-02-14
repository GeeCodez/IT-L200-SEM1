#include <iostream>
using namespace std;

// Function to sort an array in ascending order using Bubble Sort
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 8, 1, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, size);

    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}
