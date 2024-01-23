//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.    //
//                                                                                                                              //
//You may assume that each input would have exactly one solution, and you may not use the same element twice.                   //
//                                                                                                                              //
//You can return the answer in any order.                                                                                       //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



/*                                                    APPROACH 1
#include <iostream>
#include <vector>
class Solution {
public:
    std::vector<int> twoSum(vector<int>& nums, int target) {
        int i;
        for (i = 0; i < nums.size(); i++) {
            int j;
            for (j = i + 1; j < nums.size(); j++) {
                if (nums[j] == target - nums[i]) {
                    return { i, j };
                }
            }
        }
        return {};
    }
};*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
                                                    APPROACH 2
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {

public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int> map;
        int i;
        for (int i = 0; i < nums.size(); ++i) {
            map[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (map.count(complement) && map[complement] != i) {
                return { i, map[complement] };
            }
        }
        return {};
    }
};

*/


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                  /* APPROACH 3*/
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {

public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int> map;
        int i;
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (map.count(complement) && map[complement] != i) {
                return { i, map[complement] };
            }
            map[nums[i]] = i;
        }
        return {};
    }
};


