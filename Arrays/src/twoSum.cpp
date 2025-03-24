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
        vector<int> twoSum(vector<int>& nums, int target)
        {
            int complement = 0;
            std::unordered_map<int, int> Map;

            for (int i = 0; i < nums.size(); i++)
            {
                complement = target - nums[i];

                if (Map.find(complement) != Map.end())
                {
                    
                    return {Map[complement], i};
                }
                
                Map[nums[i]] = i;
                    
            }
            
            return {};
            
        }

};


int main()
{

    vector<int> nums{2,7,11,15};
    int target = 9;

    Solution s;
    vector<int> result = s.twoSum(nums, target); 

    
    for (auto & id : result)
        cout << id << " ";
    cout << endl;

    return 0;
}