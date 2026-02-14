#include <iostream>
using namespace std;

void insertElement(int arr[], int &size, int element, int position) {
    for (int i = size - 1; i >= position - 1; i--)
        arr[i + 1] = arr[i];
    arr[position - 1] = element;
    size++;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5;

    insertElement(arr, size, 10, 2);

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}
