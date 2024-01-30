#include<iostream>
#include<stack>
#include<vector>
#include<string>

using namespace std;

class Answer
{
  int evaluate(int a, int b, string Operator)
{
  if(Operator == '+') return a+b;
  else if(Operator == '-') return a-b;
  else if (Operator == '*') return (long)a*b;
  return a/b;
}

public:

int evalRPN(vector<string>& tokens) {
stack<long> Stack;
int n = tokens.size();
int i;
for(i=0; i<n; i++)
  {
    if(tokens[i].size() == 1 and tokens[i][0] < 48)
      {
       long integer2 = Stack.top();
       Stack.pop();
      long integer1 = Stack.top();
       Stack.pop();
      string Operator = tokens[i];
      long evaluateRPN = evaluate(integer1, integer2, Operator[0]);
      Stack.push(evaluateRPN);
      }
    else
      Stack.push(stol(tokens[i]));
    }
    return Stack.top();

}

};
