
#include <array>
#include <vector>
#include <iostream>

int binary_search(std::vector<int> &arr, int size, int target) {
    int left = 0; int right = size-1;
    int result = -1;

    while (left<=right) {
        int mid = left + (right-left) / 2;
        std::cout << left << " " << right << " " << mid << "\n";
        if (arr[mid] == target) {
            result = mid;
            return result;
        } 
        else if (mid > target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }

    }
    return result;
}



int main() { 

    std::vector<int> arr = {1,2,3,4,5,6,7,8,9,10};

    int res = binary_search(arr, arr.size(), 10);

    std::cout << res << "\n";

    return 0;
}