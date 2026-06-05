class Solution {
public:
    int maximum69Number (int num) {
        string out = to_string(num);
        string output;
        bool flag = false;
        for(int i = 0;i<out.size();i++)
        {
            if(out[i] == '6' && !flag)
            {
                flag = true;
                output.push_back('9');
            }
            else
            {
                output.push_back(out[i]);
            }

        }
        return stoi(output);
        
    }
};