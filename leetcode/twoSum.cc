#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
class Solution {    
    public:
    Solution() {

    }
    vector<int> twoSum(vector<int> nums, int target) {
        unordered_map<int, int> hm;

        for (size_t j = 0; j < nums.size(); j++) {
            if (hm.find(target - nums[j])!= hm.end()) {
                vector<int> ans;
                ans.push_back(hm[target - nums[j]]);
                ans.push_back(j);
                return ans;
            }else{
                hm[nums[j]] = j;
            }
        }
        return vector<int> {-1};
    }

};

int main() {
    vector<int> nums {2, 7, 11, 15};
    int target = 9;
    vector<int> expected {0, 1};

    Solution s;
    vector<int> result = s.twoSum(nums, target);

    cout << "Input nums: ";
    for (int num : nums) {
        cout << num << ' ';
    }
    cout << "\nTarget: " << target << endl;

    cout << "Result: ";
    for (int index : result) {
        cout << index << ' ';
    }
    cout << endl;

    if (result == expected) {
        cout << "Test passed" << endl;
        return 0;
    }

    cout << "Test failed" << endl;
    return 1;
}
