#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
    
        nums.erase(std::remove(nums.begin(), nums.end(), val), nums.end());
        return nums.size();
    }
};




int main() {
    std::vector<int> nums1 = {1, 2, 3, 0,0,0};
    std::vector<int> nums2 = {2,5,6};
    
    // insert the second vector array into the first vector array
    nums1.insert(nums1.end(), nums2.begin(), nums2.end());
    
    for (int i : nums1) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    // sort the first vector array
    std::sort(nums1.begin(), nums1.end());

    // display the first vector array
    for (int i : nums1) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    nums1.erase(std::remove(nums1.begin(), nums1.end(), 0), nums1.end());
    
    // display the first vector array
    for (int i : nums1) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    


    // vector array sorted
    std::vector<int> v = {1, 2, 3, 4, 5};
    
    // inverse the vector array
    std::reverse(v.begin(), v.end());
    // dsplay the vector array
    for (int i : v) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // target value
    std::vector<int> targets = {3, 6};
    
    for (int target : targets) {
        // find the target value in the vector array
        auto it = std::find(v.begin(), v.end(), target);
        
        // if the target value is found
        if (it != v.end()) {
            // display the index of the target value
            std::cout << "Element found at index: " << it - v.begin() << std::endl;
        } else {
            // display the target value is not found
            std::cout << "Element not found" << std::endl;
            // if the target value is not found, display the index of the next greater value
            it = std::lower_bound(v.begin(), v.end(), target);
            std::cout << "Next greater element at index: " << it - v.begin() << std::endl;  
        }
    }

    
    string haystack = "hello";
    string needle = "ll";
    int pos = haystack.find(needle);
    cout << "Position of needle in haystack: " << pos << endl;
    
    auto it = std::find(haystack.begin(), haystack.end(), needle[0]);
    
    while(it != haystack.end()) {
        if (std::equal(it, it + needle.size(), needle.begin())) {
            break;
        }
        it = std::find(it + 1, haystack.end(), needle[0]);
    }

    cout << "Position of needle in haystack: " << it - haystack.begin() << endl;



    // vector [0,1,2,2,3,0,4,2]
    std::vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    // bad value = 2
    int val = 2;
    
    Solution s;
    int result = s.removeElement(nums, val);
    // display the result
    std::cout << "Result: " << result << std::endl;








    return 0;
}