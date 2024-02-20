class Solution
{
    public:
     int missingNumber(vector<int>& nums)
    {
      int n = nums.size();
      int TotalSum = (n * (n + 1)) / 2;
      int Sum = accumulate(nums.begin(), nums.end(), 0);
      return TotalSum - Sum;
    }
};
