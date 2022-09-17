class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> isn; // for storing the elements that will be checked again
        int n1, n2;
        for(int i{0}; i<nums.size(); i++){
            n2 = nums[i]; // first number
            n1 = target - n2; // second number
            if(isn.count(n1)){ // checking second number is present or not in the hash_map isn
                return {isn[n1], i};
            }
            isn[nums[i]] = i;
        }
        return {0, 0};
    }
};
