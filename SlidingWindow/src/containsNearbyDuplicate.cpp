#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <stack>

using namespace std;

class Solution {
    public:
        bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
            std::unordered_map<int, int> lastIndex; // Map pour stocker l'index des éléments
            
            for (int i = 0; i < nums.size(); ++i) {
                if (lastIndex.find(nums[i]) != lastIndex.end() && (i - lastIndex[nums[i]]) <= k) {
                    return true;
                }
                lastIndex[nums[i]] = i; // Mettre à jour l'index
            }
            
            return false;
        }
};
// // construct a linked list class 
// class Solution {
//     public:
//         bool containsNearbyDuplicate(vector<int>& nums, int k)
//         {
//              // Transformation en valeurs positives
//             std::transform(nums.begin(), nums.end(), nums.begin(), [](int n) {
//                 return std::abs(n);
//             });           
//             // convert to string an array
//             string str;
//             for (auto & i : nums)
//                 str.append(std::to_string(i));
//             
//             vector<int> nums_clean;
//             for (auto & c : str)
//                 nums_clean.push_back(c-'0');
//
//             nums = nums_clean;
//
//             int i = 0;
//             int j = k;
//             for (int i = 0; i < nums.size()-k; i++)
//             {
//                 j = i + k;
//                 if (nums[i] == nums[j])
//                     return true;
//             }
//             return false;
//            
//         }
// };

int main()
{
    // vector<int> nums{1,2,3,1};
    // int k = 3;
    // vector<int> nums1{1,0,1,1};
    // int k1 = 1;
    vector<int> nums2{13,23,1,2,3};
    int k2 = 5;

    Solution s;
    // cout << s.containsNearbyDuplicate(nums, k) << endl;
    // cout << s.containsNearbyDuplicate(nums1, k1) << endl;
    cout << s.containsNearbyDuplicate(nums2, k2) << endl;
    

    return 0;
}