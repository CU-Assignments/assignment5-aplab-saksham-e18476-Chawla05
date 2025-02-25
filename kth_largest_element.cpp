#include <iostream>
#include <queue>
#include <vector>

using namespace std;
int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int, vector<int>, greater<int>> minHeap; 

    for (int num : nums) {
        minHeap.push(num);
        if (minHeap.size() > k) { 
            minHeap.pop(); 
        }
    }
    return minHeap.top(); 
}
int main() {
    vector<int> nums = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    int k = 4;

    cout << "The " << k << "th largest element is: " << findKthLargest(nums, k) << endl;
    return 0;
}
