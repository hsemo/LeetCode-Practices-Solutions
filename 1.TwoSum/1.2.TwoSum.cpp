class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n1, n2; // for storing numbers that can add up to target
        int n1i, n2i; // for storing the indices
        vector<int> nis; // resulting indices
        for(int i=0; i<nums.size(); i++){
            n1 = nums[i];
            n1i = i;
            n2 = target - n1;
            // checking if n2 is present in the array or not
            for(int j=i+1; j<nums.size(); j++){
                if(j==i) continue;
                if(nums[j] == n2){
                    n2i = j;
                    nis.push_back(n1i);
                    nis.push_back(n2i);
                    return nis;
                }
            }
        }
        return nis;
    }
};
