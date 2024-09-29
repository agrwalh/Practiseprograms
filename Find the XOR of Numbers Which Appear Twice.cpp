class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        
        map<int ,int> mp;
        vector<int> ans;
        for(auto i: nums)
        {
        mp[i]++;
        }  

        for(auto i:mp){
            if(i.second==2){
                ans.push_back(i.first);
            }
        
        }
        int k=0;
        if(ans.empty())
        {
            return 0;
        }
      for(auto i:ans){
        k=k^i;
      }
      return k;

    }}
};