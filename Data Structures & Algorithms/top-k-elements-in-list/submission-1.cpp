class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        vector<int>ans;
        int n=nums.size();
        vector<vector<int>>bucket(n+1);
        for(int x : nums)
        {
            map[x]++;
        }
        for(auto p : map)
        {
            int num = p.first;
            int f = p.second;
            bucket[f].push_back(num);
        }
        for(int i=n;i>=0;i--)
        {
            for(int num : bucket[i])
            {
                ans.push_back(num);
                if(ans.size()==k)
                {
                    return ans;
                }
            }
        }
        return ans;
    }
};
