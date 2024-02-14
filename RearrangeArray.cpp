class Solution{
public:

vector<int> rearrangeArray(vector<int>& nums)
{
  n = nums.size();
  int posIdx = 0, negIdx = 1;
  vector<int> answer(n,0);

  for(int i=0; i<n; i++)
  {
    if(nums[i] < 0){
    answer[negIdx] = nums[i];
    negIdx +=2;
     }
     else
     {
       answer[posIdx] = nums[i];
        posIdx +=2;
     }
  }

    return answer;
}
};
