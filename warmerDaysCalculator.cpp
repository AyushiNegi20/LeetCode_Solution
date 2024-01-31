#include<iostream>
#include<vector>
#include<stack>

using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>answer(temperatures.size(),0);
        stack<int>Stack;
         int i;
        for(i=temperatures.size()-1; i>=0; i--){
        if(Stack.empty())
        {
            Stack.push(i);
            answer[i]=0;
        }
        else
        {
            while(!Stack.empty() && temperatures[i]>=temperatures[Stack.top()] ){
                Stack.pop();
            }
        

       if(Stack.empty())
       {
           answer[i] = 0;
       }
        
       else
       {
         answer[i] = Stack.top() - i;

       }

        Stack.push(i);
       }
    }
      return answer;
    }
};
