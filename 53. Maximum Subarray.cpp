class Solution {
public:
    int maxSubArray(vector<int>& nums) {
            int arr[nums.size()];
    copy(nums.begin(), nums.end(), arr);
 
            int ans=arr[0],i,j,sum=0;
        for(i=0;i<nums.size();i++){
            sum+=arr[i];
            ans=max(sum,ans);
            sum=max(sum,0);
        }
        return ans;
    }
};
