#include <iostream>
using namespace std;

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int arr3[]) {
    int index = 0;
    for (int i = 0; i < size1; i++)
        arr3[index++] = arr1[i];
    for (int i = 0; i < size2; i++)
        arr3[index++] = arr2[i];
}

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6, 8};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int mergedSize = size1 + size2;
    int arr3[mergedSize];

    mergeArrays(arr1, size1, arr2, size2, arr3);

    cout << "Merged Array: ";
    for (int i = 0; i < mergedSize; i++)
        cout << arr3[i] << " ";

    return 0;
}
