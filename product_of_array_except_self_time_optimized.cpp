#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(int);

    vector<int> vec(size);
    vector<int> prefix(size);
    vector<int> suffix(size);

    prefix[0] = 1;
    for (int i = 1; i < size; i++) {
        prefix[i] = prefix[i - 1] * arr[i - 1];  
    }

    suffix[size - 1] = 1;
    for (int i = size - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] * arr[i + 1];
    }

    for (int i = 0; i < size; i++) {
        vec[i] = prefix[i] * suffix[i];
    }

    for (int i = 0; i < size; i++) {
        cout << vec[i] << endl;
    }
}
