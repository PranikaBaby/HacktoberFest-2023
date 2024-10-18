#include <iostream>
#include <vector>

int findMaximum(const std::vector<int>& arr) {
    if (arr.empty()) {
        return -1; // Return -1 if the array is empty
    }

    int maxElement = arr[0]; // Initialize maxElement with the first element
    for (int num : arr) { // Loop through the array
        if (num > maxElement) { // Compare each element with maxElement
            maxElement = num; // Update maxElement if the current element is larger
        }
    }
    return maxElement; // Return the maximum element
}

int main() {
    std::vector<int> array = {3, 5, 1, 8, 4};
    int maxValue = findMaximum(array);
    if (maxValue == -1) {
        std::cout << "Array is empty." << std::endl;
    } else {
        std::cout << "Maximum element: " << maxValue << std::endl; // Output: Maximum element: 8
    }
    return 0;
}
