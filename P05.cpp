#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeSortedArrays(const vector<int>& arr1, const vector<int>& arr2) {
    vector<int> merged;
    auto it1 = arr1.begin(), it2 = arr2.begin();

    // Merge by comparing elements
    while (it1 != arr1.end() && it2 != arr2.end()) {
        merged.push_back((*it1 < *it2) ? *it1++ : *it2++);
    }

    // Add remaining elements
    merged.insert(merged.end(), it1, arr1.end());
    merged.insert(merged.end(), it2, arr2.end());

    return merged;
}

int main() {
    // Input first sorted array
    cout << "Enter size of first array: ";
    int size1; cin >> size1;
    vector<int> arr1(size1);
    cout << "Enter sorted elements: ";
    for (int& x : arr1) cin >> x;

    // Input second sorted array
    cout << "Enter size of second array: ";
    int size2; cin >> size2;
    vector<int> arr2(size2);
    cout << "Enter sorted elements: ";
    for (int& x : arr2) cin >> x;

    // Merge and print
    vector<int> result = mergeSortedArrays(arr1, arr2);
    cout << "Merged array: ";
    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}
