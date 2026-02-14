#include <iostream>
using namespace std;

void updateElement(int arr[], int size, int position, int element) {
    if (position >= 1 && position <= size) {
        arr[position - 1] = element;
    } else {
        cout << "Invalid position!" << endl;
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    updateElement(arr, size, 3, 10); // Update 3rd element to 10

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}
