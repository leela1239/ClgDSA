 
 #include<bits/stdc++.h>
using namespace std;
bool containsNearbyDuplicate(vector<int>& nums, int k) {    
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(nums[i])==m.end())
            {
                m[nums[i]]=i;
            }
            else
            {
                if(abs(i-m[nums[i]])<=k)
                {
                    return true;
                }
                else
                {
                    m[nums[i]]=i;
                }
            }
        }
        return false;
    }
    int main()
    {
        int k=2;
        vector<int>nums={1,2,3,1,2,3};
        cout<<containsNearbyDuplicate(nums,k);
    }