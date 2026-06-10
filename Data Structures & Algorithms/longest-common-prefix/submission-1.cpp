class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string res;
        sort(strs.begin(),strs.end());
        string first = strs[0];
        string last = strs[n-1];
        for(int i=0;i<first.length();i++)
        {
            if(first[i]!=last[i]) break;
            res.push_back(first[i]);
        }
        return res;
    }
};