
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    { vector<int>arr;                  
        unordered_map<int,int>m;
        
        for(int i=0;i<nums.size();i++)    
        {
            int val = target-nums[i];
            if(m.find(val)!=m.end())  
            {
                arr.push_back(m.find(val)->second);
                arr.push_back(i);
                break;
            }
            m.insert({nums[i],i});
        }
        return arr;}
};
