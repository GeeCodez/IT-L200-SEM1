#include <iostream>
using namespace std;

void traversearray(int arr[], int size){
    cout<<"Array element are: ";

    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[5]={10,30,56,44,89};
    traversearray(arr,5);
    return 0;
    }
