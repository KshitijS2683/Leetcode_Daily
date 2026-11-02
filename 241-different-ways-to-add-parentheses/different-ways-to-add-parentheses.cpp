class Solution {
public:
    int compute(int a , char op , int b)
    {
        if(op == '+')
        {
            return a + b;
        }
        else if(op == '-')
        {
            return a - b;
        }
        else if(op == '*')
        {
            return a * b;
        }
        else if(op == '/')
        {
            return a/b;
        }
        return 0;
    }
    vector<int> diffWaysToCompute(string expression) {
        // int n = expression.size();
        // vector<vector<int>> dp(n+1,0);
        unordered_map<string,vector<int>> dpMap;
        return ans(expression,dpMap);
        // dp[n] = {expression[n-1] - '0'};
        // for(int i = n- 1;i>=0;i--)
        // {
        //     if(expression[i] < '0' && expression[i] > '9')
        //     {

        //     }
        // }
    }
    vector<int> ans(string exp,unordered_map<string,vector<int>> &dpMap)
    {
        vector<int> result;
        int n = exp.size();
        for(int i = 0;i<n;i++)
        {
            char curr = exp[i];
            if(curr == '+' || curr == '-' || curr == '*')
            {
                vector<int> result1,result2;
                string substr = exp.substr(0,i);
                if(dpMap.find(substr) != dpMap.end())
                {
                    result1 = dpMap[substr];
                }
                else 
                {
                    result1 = ans(substr,dpMap);
                }
                substr = exp.substr(i+1);
                if(dpMap.find(substr) != dpMap.end())
                {
                    result2 = dpMap[substr];
                }
                else 
                {
                    result2 = ans(substr,dpMap);
                }
                for(auto n1 : result1)
                {
                    for(auto n2 : result2)
                    {
                        result.push_back(compute(n1,curr,n2));
                    }
                }
            }
        }
        if(result.empty())
        {
            result.push_back(atoi(exp.c_str()));
        }
        dpMap[exp] = result;
        return result;
    }
};