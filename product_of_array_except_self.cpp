#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(int);

    vector<int> vec(size);

    for (int i = 0; i < size; i++) {
        int prod = 1;
        for (int j = 0; j < size; j++) {
            if (i != j) {
                prod *= arr[j];
            }
        }
        vec[i] = prod;
    }

    for (int i = 0; i < size; i++) {
        cout << vec[i] << endl;
    }
}
