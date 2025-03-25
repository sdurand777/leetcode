#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <stack>

using namespace std;


class Solution
{
    public:
        bool isValid(string s)
        {
            if (s.size()%2 != 0 || s.empty())
                return false;
            
            char c = ' ';

            stack<char> Stack;
            
            for (int i = 0; i < s.size(); i++)
            {
                c = s[i];

                if (c == '(' || c == '[' || c == '{')
                {
                    Stack.push(c);
                }
                else if (c == ')')
                {
                    if (Stack.empty())
                        return false;
                    if (Stack.top() == '(')
                    {
                        Stack.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else if (c == ']')
                {
                    if (Stack.empty())
                        return false;

                    if (Stack.top() == '[')
                    {
                        Stack.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else if (c == '}')
                {
                    if (Stack.empty())
                        return false;

                    if (Stack.top() == '{')
                    {
                        Stack.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }

            // if (Stack.empty())
            //     return true;
            // else
            //     return false;
            return Stack.empty();
           
        }

};


int main()
{
    string s = "([])";


    // stack<int> Stack;
    // Stack.push(1);
    // Stack.push(2);

    // cout << Stack.top() << endl;


    Solution sol;
    bool out = sol.isValid(s);

    cout << "res : " << out << endl;

    return 0;
}