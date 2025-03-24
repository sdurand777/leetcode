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

        int removeDubplicates(vector<int> & nums)
        {
            // il faut passer par un set
            std::set<int> uniqueset(nums.begin(), nums.end());

            vector<int> tmp(uniqueset.begin(), uniqueset.end());
            nums = tmp;
            
            return nums.size();
        }
};

int main()
{
    vector<int> nums{1,1,2};

    Solution s;
    int output = s.removeDubplicates(nums);
    
    cout << output << endl;

    for (auto & id : nums)
    {
        cout << id << " ";
    }
    cout << endl;

    return 0;
}