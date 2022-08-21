// Kadane's Algorithm is used to find the maximum sum of the subarray in O(n) Time complexity.

// The principle of Kadane's Algorithm is that we are gonna do a linear search and add the values to sum. I sum is negative in any case then we will put sum = 0. We will be checking for maximum sum
// in every step


#include <iostream>
#include <algorithm>

int main(){
    int arr[5] = {5, 4, -1, 4, 10}; // Maximum sum Subarray = 14 [4, 10]
    int n = 5, sum = 0, maxx = arr[0];
    for(int i = 0; i<n; i++){
        sum += arr[i];
        maxx = std::max(maxx, sum);
        sum = (sum<0?0:sum);
    }
    std::cout << sum;
}

