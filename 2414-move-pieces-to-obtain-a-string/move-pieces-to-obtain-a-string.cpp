class Solution {
public:
    bool canChange(string start, string target) {
        int i = start.size()-1;
        int j = target.size()-1;
        while(i>=0 && j>=0)
        {
            if(start[i] == target[j])
            {
                i--;
                j--;
            }
            else
            {
                if(target[j] == 'L' && start[i] != 'L')
                {
                    return false;
                }
                else if(target[j] == '_' && start[i] == 'R')
                {
                    return false;
                }
                else if(target[j] == '_' && start[i] == 'L')
                {
                    while(start[i] != target[j])
                    {
                        if(start[i] == 'R')
                        {
                            return false;
                        }
                        i--;
                        if(i==-1)
                        {
                            return false;
                        }
                    }
                    swap(start[i],start[j]);
                    j--;
                    i=j;
                }
                else if(target[j] == 'R' && start[i] == 'L')
                {
                    return false;
                }
                else if(target[j] == 'R' && start[i] == '_')
                {
                    while(start[i] != target[j])
                    {
                        if(start[i] == 'L')
                        {
                            return false;
                        }
                        i--;
                        if(i==-1)
                        {
                            return false;
                        }
                    }
                    swap(start[i],start[j]);
                    j--;
                    i=j;
                }

            }
        }
        i = 0;
        j=0;
        while(i<start.size() && j<target.size())
        {
            if(start[i] == target[j])
            {
                i++;
                j++;
            }
            else
            {
                if(target[j] == 'R' && start[i] != 'R')
                {
                    return false;
                }
                else if(target[j] == '_' && start[i] == 'L')
                {
                    return false;
                }
                else if(target[j] == '_' && start[i] == 'R')
                {
                    while(start[i] != target[j])
                    {
                        if(start[i] == 'L')
                        {
                            return false;
                        }
                        i++;
                        if(i==start.size())
                        {
                            return false;
                        }
                    }
                    swap(start[i],start[j]);
                    j++;
                    i=j;
                }
                else if(target[j] == 'L' && start[i] == 'R')
                {
                    return false;
                }
                else if(target[j] == 'L' && start[i] == '_')
                {
                    while(start[i] != target[j])
                    {
                        if(start[i] == 'R')
                        {
                            return false;
                        }
                        i++;
                        if(i==start.size())
                        {
                            return false;
                        }
                    }
                    swap(start[i],start[j]);
                    j++;
                    i=j;
                }

            }
        }
        if(start == target)
        {
            return true;
        }
        return false;        
    }
};