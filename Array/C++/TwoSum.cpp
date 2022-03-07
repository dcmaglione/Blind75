#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
// Brute Force O(n^2)
public:
    vector<int> twoSumBF(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) { return {i, j}; }
            }
        }
        return {};
    }

// Optimal Solution O(n)
public:
    vector<int> twoSumOPT(vector<int>& nums, int target) {
        map<int, int> dict;
        
        for (int i = 0; i < nums.size(); i++) {
            int comp = target - nums[i];
            
            if (dict.count(comp)) {
                return {dict.at(comp), i};
            }
            
            dict.insert({nums[i], i});
        }
        throw invalid_argument("No Match Found");
    }
};