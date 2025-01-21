#include<iostream>
using namespace std;

// Function to calculate the prefix sum of an array
void getPrefixSum(int array[], int size, int prefixArray[]) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];          // Add the current element to the cumulative sum
        prefixArray[i] = sum;     // Store the cumulative sum in the prefixArray
    }
}

// Function to calculate the suffix sum of an array
void getSuffixSum(int array[], int size, int suffixArray[]) {
    int sum = 0;
    for (int i = size - 1; i >= 0; i--) {
        sum += array[i];          // Add the current element to the cumulative sum
        suffixArray[i] = sum;     // Store the cumulative sum in the suffixArray
    }
}

int main() {
    // Input array and size
    int array[] = {2, 3, 1, 2, 6, 2};
    int size = sizeof(array) / sizeof(array[0]); // Calculate the number of elements in the array

    // Arrays to store prefix and suffix sums
    int prefixArray[size];
    int suffixArray[size];

    // Calculate prefix and suffix sums
    getPrefixSum(array, size, prefixArray);
    getSuffixSum(array, size, suffixArray);

    // Print the prefix sum array
    cout << "Prefix Sum Array: " << endl;
    for (int i = 0; i < size; i++) {
        cout << prefixArray[i] << " ";
    }
    cout << endl;

    // Print the suffix sum array
    cout << "Suffix Sum Array: " << endl;
    for (int i = 0; i < size; i++) {
        cout << suffixArray[i] << " ";
    }
    cout << endl;

    // Find indices where prefix sum equals suffix sum, excluding boundary indices
    for (int i = 0; i < size; i++) {
        if (i == 0 || i == size - 1) {
            continue; // Skip the first and last indices
        }
        for (int j = 0; j < size; j++) {
            if (j == 0 || j == size - 1) {
                continue; // Skip the first and last indices
            }
            // Check if prefix sum at index i equals suffix sum at index j and i < j
            if (prefixArray[i] == suffixArray[j] && i < j) {
                cout << "Matching Sum: " << prefixArray[i] << endl;
                cout << "Yes" << endl; // Print "Yes" if the condition is met
            }
        }
    }
}
