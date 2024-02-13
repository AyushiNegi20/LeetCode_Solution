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


\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
Two pointer approach
\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

class Solution{

  public:

  bool isPalindrome(string& s)
{
  int start = 0;
  int end = s.size()-1;

  while(start<=end)
    {
      if(s[start] != s[end])
        return false;
      start++;
      end--;
    }
  return true;
}
  string firstPalindrome(vector<string>& words) 
{
  for(string s:words)
    {
      ispalindrome(s);
      return s    
    }

  return "";
}
};
