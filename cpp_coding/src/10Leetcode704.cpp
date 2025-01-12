#include <vector>
#include <iostream>

using namespace std;


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int nums_size = nums.size();
        int left = 0;
        int right = nums_size - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }

        }
        return -1;

    }
};

int main(int argc, char const *argv[])
{
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 9;
    int result = solution.search(nums, target);
    cout << "result:" << result << endl;
    return 0;
}
