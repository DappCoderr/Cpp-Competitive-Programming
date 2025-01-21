#include <iostream>
using namespace std;
#include <vector>

int main() {

    // Declare a vector to store the input integers
    vector<int> v; 

    // Get the size of the input from the user
    int size;
    cout << "Enter input: " << endl;
    cin >> size;

    // Read the input integers and store them in the vector
    for (int i = 0; i < size; i++) {
        int element;
        cin >> element;
        v.push_back(element); 
    }

    // Calculate the prefix sum of the vector
    int sum = 0; 
    for (int i = 0; i < size; i++) {
        // Update the current element with the sum of itself and all previous elements
        v[i] = v[i] + sum; 
        // Update the sum for the next iteration
        sum = v[i]; 
    }

    // Print the resulting vector (containing prefix sums)
    for (int i = 0; i < size; i++) {
        cout << v[i] << " ";
    }

    return 0;
}