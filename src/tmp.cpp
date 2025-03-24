#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <unordered_map>

using namespace std;

// class Solution {
//     public:
//     vector<int> twoSum(vector<int> nums, int target)
//     {
//         // int complement
//         int complement = target;
//         // unordered_map to store the index of the number
//         unordered_map<int, int> num_index;
//         // vector to store the result
//         vector<int> result;
//         
//         for (int i = 0; i < nums.size(); i++)
//         {
//             // update complement
//             complement = target - nums[i];
//
//
//             if (num_index.find(complement) != num_index.end())
//             {
//                 result.push_back(num_index.find(complement)->second);
//                 result.push_back(i);
//                 return result;
//             }
//
//             num_index[nums[i]] = i;
//         }
//
//         return result;
//     }
// };


// class Solution
// {
//     public:
//         bool isPalindrome(int x)
//         {
//             if (x < 0)
//                 return false;
//             
//             // convert to string
//             string x_str = std::to_string(x);
//
//             // below ten
//             if (x_str.size() == 1)
//                 return true;
//             
//             // check pair or impair case
//             string mid_first, mid_second;
//             int mid = 0;
//             if (x_str.size()%2 == 0)
//             {
//                 mid = x_str.size()/2;
//                 mid_first = x_str.substr(0, mid);
//                 mid_second = x_str.substr(mid, x_str.size());
//                 std::reverse(mid_second.begin(), mid_second.end());
//             }
//             else
//             {
//                 mid = (x_str.size()-1)/2;
//                 mid_first = x_str.substr(0, mid);
//                 mid_second = x_str.substr(mid+1, x_str.size());
//                 std::reverse(mid_second.begin(), mid_second.end());
//             }
//             
//             if (mid_first == mid_second)
//                 return true;
//             else
//                 return false;
//
//             return false;
//
//             
//         }
//
// };


// class Solution
// {
// public:
//     int romanToInt(string chaine)
//     {
//         std::map<int, string> Map;
//
//         Map[1] = "I";
//         Map[5] = "V";
//         Map[10] = "X";
//         Map[50] = "L";
//         Map[100] = "C";
//         Map[500] = "D";
//         Map[1000] = "M";
//
//         // Iterate over the map and print key-value pairs
//         for (const auto &pair : Map)
//         {
//             cout << pair.first << ": " << pair.second << endl;
//         }
//
//         int result = 0;
//         int previous = 0;
//         // loop over chaine
//         for (auto &c : chaine)
//         {
//             if (c == Map[1][0])
//             {
//                 result += 1;
//                 previous = 1;
//                 continue;
//             }
//
//             if (c == Map[5][0])
//             {
//                 if (previous == 1)
//                 {
//                     result += 3;
//                     previous = 5;
//                     continue;
//                 }
//                 result += 5;
//                 previous = 5;
//                 continue;
//             }
//
//             if (c == Map[10][0])
//             {
//                 if (previous == 1)
//                 {
//                     result += 8;
//                     previous = 10;
//                     continue;
//                 }
//                 result += 10;
//                 previous = 10;
//                 continue;
//             }
//
//             if (c == Map[50][0])
//             {
//                 if (previous == 10)
//                 {
//                     result += 30;
//                     previous = 50;
//                     continue;
//                 }
//                 result += 50;
//                 previous = 50;
//                 continue;
//             }
//
//             if (c == Map[100][0])
//             {
//                 if (previous == 10)
//                 {
//                     result += 80;
//                     previous = 100;
//                     continue;
//                 }
//                 result += 100;
//                 previous = 100;
//                 continue;
//             }
//
//             if (c == Map[500][0])
//             {
//                 if (previous == 100)
//                 {
//                     result += 300;
//                     previous = 500;
//                     continue;
//                 }
//                 result += 500;
//                 previous = 500;
//                 continue;
//             }
//
//             if (c == Map[1000][0])
//             {
//                 if (previous == 100)
//                 {
//                     result += 800;
//                     previous = 1000;
//                     continue;
//                 }
//                 result += 1000;
//                 previous = 1000;
//                 continue;
//             }
//         }
//         
//         return result;
//     }t
// };





int main() {

    vector<int> nums1 = {2, 7, 11, 15};
    vector<int> nums2 = {3, 2, 4};
    
    for (auto & n : nums2)
    {
        nums1.push_back(n);
    }
    
    std::sort(nums1.begin(), nums1.end());


   

   





        return 0;
    }