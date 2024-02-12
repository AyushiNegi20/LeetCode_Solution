class Solution{
public:

int majorityElement(vector<int>& nums)
{
  unordered_map<int, int> map;
  n = nums.size()/2;
  int maxi= -1e8;

  for(auto a:nums)
    {
      map[nums[a]++;
    }
  for(auto b:map)
    {
      if(b.second>n)
      {
        maxi = b.first;
      }
    }
  return maxi;
}
};
