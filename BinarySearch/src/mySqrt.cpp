#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <stack>

using namespace std;

// construct a linked list class 
class Solution {
    public:
        int mySqrt(int x)
        {
            if (x == 0) return 0;
            if (x == 1) return 1;


            int mid = x/2;
            // recup mid tel que mid*mid <= x
            while (mid*mid > x)
                mid /=2;
            
            if (mid*mid == x) 
            {
                return mid;
            }
            else 
            {
                while (mid*mid < x)
                    mid+=1;
                if (mid*mid == x) return mid;
                else return mid - 1;
            }
            
        }
};

int main()
{
    int test = 9;
    Solution s;
    int res = s.mySqrt(test);

    return 0;
}