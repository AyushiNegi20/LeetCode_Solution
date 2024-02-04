#include<iostream>
#include<unordered_map>

using namespace std;

class Solution{

public:
string minWindow(string s, string t)
{
 unordered_map<char,int> hash_s;
 unordered_map<char,int> hash_t;

  int m = s.size();
  int n = t.size();

  if(n > m)
  {
    retrun "";
  }

  for( int i=0; i<n; i++)
    {
      hash_t[t[i]]++;
    }

  int count=0, start = 0, min_length=INT_MAX, start_ind = -1;

  for(int j=0; j<m; j++)
    {
      hash_s[s[j]]++;
      if(hash_s[s[j]] <= hash_t[s[j]])
      {
        count++;
      }
    }
  if(count = n)
  {
    while(hash_s[s[start]] > hash_t[s[start]] || hash_t[s[start]] == 0)
      {
        hash_s[s[start]]--;
        start++;
      }
    if(min_length> j-start+1)
    {
      min_length=  j-start+1;
      start_ind= start;
    }
  }
  if(start_ind == -1)
    retrun "";
    return s.substr(start_ind, min_length);
  
}
};
