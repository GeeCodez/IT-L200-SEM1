#include <iostream>
using namespace std;

void deleteElement(int arr[], int &size, int position) {
    if (position < 1 || position > size) {
        cout << "Invalid position!" << endl;
        return;
    }

    for (int i = position - 1; i < size - 1; i++) {
        arr[i] = arr[i + 1]; // Shift elements to the left
    }

    size--; // Reduce the effective size
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    deleteElement(arr, size, 3); // Delete element at position 3

    cout << "Array after deletion: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}
