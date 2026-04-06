class Solution {
public:
    void heapify(vector<int>&nums,int n , int i)
        {
            int p=i;
            int l=2*i+1;
            int r=2*i+2;
            if(l<n && nums[l]>nums[p])
            {
                p=l;
            }
            if(r<n && nums[r]>nums[p])
            {
                p=r;
            }
            if(p!=i)
            {
                swap(nums[p],nums[i]);
                heapify(nums,n,p);
            }
        }
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        for(int i=n/2-1;i>=0;i--)
        {
            heapify(nums,n,i);
        }
        for(int i=n-1;i>0;i--)
        {
            swap(nums[i],nums[0]);
            heapify(nums,i,0);
        }
        return nums;
    }
};