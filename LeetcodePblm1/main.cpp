#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        unsigned int size;
        vector<int> ans;
        //size = nums.size()/nums.size([0]);

        for(i = 0; i < nums.size(); i++) {
            // if(nums[i] == target) {
            //     ans.push_back(i);
            //     return ans;
            // }
            if(nums[i] + nums[i + 1] != target) {
                continue;
            }
            else
                ans.push_back(i);
                ans.push_back(i+1);
                return ans;
        }
        return ans;
    }

int main() {
    vector<int> *nums;
    nums->push_back(2);
    nums->push_back(7);
    nums->push_back(11);
    nums->push_back(15);
    cout << twoSum(*nums, 9) << endl;
}
