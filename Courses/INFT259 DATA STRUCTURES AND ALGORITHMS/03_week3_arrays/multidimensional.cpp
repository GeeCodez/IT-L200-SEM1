#include <iostream>

int main() {
// declaration and initialization of a 3D array
int my3darray[2][3][4] = {
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    },
    {
        {13, 14, 15, 16},
        {17, 18, 19, 20},
        {21, 22, 23, 24}
    }
};
//print the elements of the 3D array
    cout<< my3darray[0][0][0] << endl; // Output: 1
    cout<< my3darray[0][1][2] << endl; // Output: 7
return 0;
}