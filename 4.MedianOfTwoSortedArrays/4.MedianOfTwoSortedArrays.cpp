class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> combined;
        int combinedHalfLen = (nums1.size() + nums2.size())/2;
        int j=0,k=0;
        for(int i=0; i<=combinedHalfLen; i++){
            if(k >= nums2.size() || (j < nums1.size() && nums1[j] < nums2[k])){
                combined.push_back(nums1[j]);
                j++;
            } else {
                combined.push_back(nums2[k]);
                k++;
            }
        }
        if((nums1.size() + nums2.size())%2 == 0){
            return (double)(combined[combinedHalfLen] + combined[combinedHalfLen-1]) / 2;
        }
        return (double) (combined[combinedHalfLen]);
    }
};
