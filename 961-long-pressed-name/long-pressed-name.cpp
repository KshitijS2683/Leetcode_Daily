class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        // unordered_map<char,int> inp_name,inp_typed;
        // for(int i = 0;i<name.size();i++)
        // {
        //     inp_name[name[i]]++;
        // }
        // for(int i = 0;i<typed.size();i++)
        // {
        //     inp_typed[typed[i]]++;
        // }
        // for(auto &x : inp_name)
        // {
        //     if(x.second > inp_typed[x.first])
        //     {
        //         return false;
        //     }
        // }
        // return true;
        // if(name == typed)
        // {
        //     return false;
        // }
        int i = 0,j = 0;
        while(i < name.size() && j < typed.size())
        {
            if(name[i] == typed[j])
            {
                i++;
                j++;
            }
            else if(j > 0 && typed[j] == typed[j-1])
            {
                j++;
            }
            else
            {
                return false;
            }
        }
        if(i != name.size())
        {
            return false;
        }
        while(j < typed.size())
        {
            if(typed[j] != typed[j-1])
            {
                return false;
            }
            j++;
        }
        return true;
        
    }
};