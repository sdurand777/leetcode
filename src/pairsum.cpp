
#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap; // Stocke la valeur et son index

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i]; // Valeur nécessaire pour atteindre target

        // Vérifier si le complément est déjà dans la map
        if (numMap.find(complement) != numMap.end()) {
            return {numMap[complement], i}; // Retourne les indices trouvés
        }

        numMap[nums[i]] = i; // Stocker l'élément avec son index
    }

    return {}; // Ce cas ne devrait jamais arriver car on suppose une solution unique
}

int main() {
    std::vector<int> nums = {3,2,3};
    int target = 6;
    
    std::vector<int> result = twoSum(nums, target);
    
    std::cout << "Indices: [" << result[0] << ", " << result[1] << "]\n";
    
    return 0;
}


