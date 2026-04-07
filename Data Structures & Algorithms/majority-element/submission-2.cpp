class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int leader = 0;
        int lead = 0;
        for(int num : nums)
        {
            if(lead==0)
            {
                leader = num;
            }
            if(num==leader)
            {
                lead++;
            }
            else{
                lead--;
            }
        }
        return leader;
    }
};