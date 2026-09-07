class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() < 3)
        {
            return false;
        }
        bool flag = false;
        for(int i = 1;i<arr.size();i++)
        {
            if(arr[i] == arr[i-1])
            {
                return false;
            }
            else if(!flag && arr[i] > arr[i-1])
            {
                continue;
            }
            else if(!flag && arr[i] < arr[i-1])
            {
                flag = true;
            }
            if(flag && arr[i] < arr[i-1])
            {
                continue;
            }
            else
            {
                return false;
            }

        }
        return flag && (arr[1] > arr[0]);
        
    }
};