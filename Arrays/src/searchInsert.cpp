#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <unordered_map>

using namespace std;

class Solution
{
    public:
        int searchInsert(vector<int> & nums, int target)
        {
            if (nums[0] == target)
                return 0;

            if (nums[nums.size()-1] == target)
                return nums.size()-1;
            
            auto res = std::find(nums.begin(), nums.end(), target);

            if (res != nums.end())
            {
                return res - nums.begin();
                    
            }
            else
            {

                auto it = std::lower_bound(nums.begin(), nums.end(), target);
                return it - nums.begin();                
            }
            
        }

};

int main()
{
    vector<int> nums{1,2,4};
    int val = 3;

    Solution s;
    int output = s.searchInsert(nums, val);

    return 0;
    
}
