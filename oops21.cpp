#include <iostream>
#include <string>
using namespace std;

// NonType Parameters
// Template can have multiple arguments (they can be anything constants also)

template <typename T, int size>
void print(T (&arr)[size]) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Integer array
    int arr[] = {1, 2, 3, 4, 5};
    print(arr);

    // Float array
    float arr_float[] = {1.1, 1.2, 0.3, 4.55, 1.56, 0.6};
    print(arr_float);

    // Character array
    char arr1[] = {'a', 'b', 'c'};
    print(arr1);

    return 0;
}
