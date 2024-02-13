class Solution{
public:
string firstPalindrome(vector<string>& words) 
{
  for(auto a:words)
    {
      string s = a;

      reverse(s.begin(),s.end());
      if(s==a)
      {
        return s;
      }
    }

  return "";
}
};
