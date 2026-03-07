class Solution {
public:
    bool isvalid(vector<vector<int>>& image, int i,int j, int t)
    {
        if(abs(image[i][j] - image[i][j+1]) <= t &&
        abs(image[i][j+1] - image[i][j+2]) <= t &&
        abs(image[i+1][j] - image[i+1][j+1]) <= t &&
        abs(image[i+1][j+1] - image[i+1][j+2]) <= t &&
        abs(image[i+2][j] - image[i+2][j+1]) <= t &&
        abs(image[i+2][j+1] - image[i+2][j+2]) <= t &&
        abs(image[i][j] - image[i+1][j]) <= t &&
        abs(image[i+1][j] - image[i+2][j]) <= t &&
        abs(image[i][j+1] - image[i+1][j+1]) <= t &&
        abs(image[i+1][j+1] - image[i+2][j+1]) <= t &&
        abs(image[i][j+2] - image[i+1][j+2]) <= t &&
        abs(image[i+1][j+2] - image[i+2][j+2]) <= t)
        {
            return true;
        }
        return false;
    }

    vector<vector<int>> resultGrid(vector<vector<int>>& image, int threshold) {
        int n = image.size();
        int m = image[0].size();

        vector<vector<int>> region(n,vector<int>(m,-1));
        vector<vector<int>> result = image;

        for(int i = 0;i<n-2;i++)
        {
            for(int j = 0;j<m-2;j++)
            {
                if(isvalid(image,i,j,threshold))
                {
                    region[i][j] = (
                        image[i][j] + image[i][j+1] + image[i][j+2] +
                        image[i+1][j] + image[i+1][j+1] + image[i+1][j+2] +
                        image[i+2][j] + image[i+2][j+1] + image[i+2][j+2]
                    ) / 9;
                }
            }
        }

        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                int count = 0;
                int sum = 0;

                for(int l = max(0,i-2); l <= min(i,n-3); l++)
                {
                    for(int k = max(0,j-2); k <= min(j,m-3); k++)
                    {
                        if(region[l][k] != -1)
                        {
                            count++;
                            sum += region[l][k];
                        }
                    }
                }

                if(count > 0)
                    result[i][j] = sum / count;
            }
        }

        return result;
    }
};