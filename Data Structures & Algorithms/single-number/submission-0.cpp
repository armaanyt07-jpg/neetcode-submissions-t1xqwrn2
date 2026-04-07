class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int singNum=0;
        for(int i=0;i<nums.size();i++)
        {
            singNum^=nums[i];
        }
        return singNum;
    }
};
