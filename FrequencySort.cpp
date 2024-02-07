#include<iostream>
#include<unordered_map>
#include<algorithm>

using namespace std;

class Solution{

string frequencySort(string s){
  unordered_map<char,int>freq_map;
  priority_queue<pair<int,char>> pq;
  string ans="";

  for(char a:s){
    freq_map[a]++;
  }

  for(auto b:freq_map){
    pq.push({b.second,b.first});
  }

  while(!pq.empty()){
    auto temp = pq.top();
    int freq = temp.second;
    char ch = temp.first;

    ans+=string(freq,ch);
    pq.pop();
  }
   return ans;
}
};
