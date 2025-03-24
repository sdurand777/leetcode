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
        int removeElement(vector<int> & nums, int val)
        {
            nums.erase(std::remove(nums.begin(), nums.end(), val), nums.end());

            return nums.size();
        }

};

int main()
{
    vector<int> nums{3,2,2,3};
    int val = 3;

    Solution s;
    int output = s.removeElement(nums, val);

    return 0;
    
}
