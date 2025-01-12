#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slow_index = 0;
        for (int fast_index = 0; fast_index < nums.size(); fast_index++) {
            if (nums[fast_index] != val) {
                nums[slow_index] = nums[fast_index];
                slow_index++;
            }
        }
        return slow_index;
    }
};  

int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;
    int new_length = s.removeElement(nums, val);
    cout << "New length: " << new_length << endl;
    for (int i = 0; i < new_length; i++) {
        cout << nums[i] << " ";

    }
    cout << endl;
    return 0;
}
