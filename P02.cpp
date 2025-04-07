#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    unordered_set<int> unique_elements;
    for (int i = 0; i < size; ++i) {
        unique_elements.insert(arr[i]); // Automatically ignores duplicates
    }

    cout << "Array without duplicates: ";
    for (int num : unique_elements) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
