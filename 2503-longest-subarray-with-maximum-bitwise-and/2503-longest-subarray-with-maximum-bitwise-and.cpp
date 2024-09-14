class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        vector<int>subarray;
        int n=nums.size();
        int len=0;
        int count=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]==maxi){
                len++;
            }
            else{
                len=0;
            }
            count=max(count,len);
        }
        return count;
    }
};