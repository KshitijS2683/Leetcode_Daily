class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> out;
        int sum = 0;
        for(int i = 0;i<operations.size();i++)
        {
            if(operations[i] == "+")
            {
                out.push_back(out[out.size()-1] + out[out.size()-2]);
            }
            else if(operations[i] == "D")
            {
                out.push_back(out[out.size()-1] + out[out.size()-1]);
            }
            else if(operations[i] == "C")
            {
                out.pop_back();
            }
            else
            {
                out.push_back(stoi(operations[i]));
            }
        }
        for(int i = 0;i<out.size();i++)
        {
            sum += out[i];
        }
        return sum;
        
    }
};