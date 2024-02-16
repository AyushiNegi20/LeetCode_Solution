//To be continued

class Solution{
public:
int findLeastNumOfUniqueInts(vector<int>& arr, int k)
{
  unordered_map<int,int> map;
  vector<int> freqArray;
  int elementsRemoved = 0;


  for(int i: arr)
    {
      map[i]++;
    }

  for(auto j:map)
    {
      freqArray.psuh_back(j.second);
    }
  
  sort(freqArray.begin(), freqArray.end());

  for(int i=0; i<)
}
}:
