class Solution {
public:
    vector<vector<int>> flood(vector<vector<int>>& image, int sr, int sc, int color,int check) {
        int i = sr;
        int j = sc;
        if(i > 0)
        {
            if(image[i-1][j] == check)
            {
                image[i-1][j] = color;
                image = flood(image,i-1,j,color,check);
            }
        }
        if(i < image.size()-1)
        {
            if(image[i+1][j] == check)
            {
                image[i+1][j] = color;
                image = flood(image,i+1,j,color,check);
            }
        }
        if(j > 0)
        {
            if(image[i][j-1] == check)
            {
                image[i][j-1] = color;
                image = flood(image,i,j-1,color,check);
            }
        }
        if(j < image[0].size()-1)
        {
            if(image[i][j+1] == check)
            {
                image[i][j+1] = color;
                image = flood(image,i,j+1,color,check);
            }
        }
        return image;
        
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc] == color)
        {
            return image;
        }
        int check = image[sr][sc];
        image[sr][sc] = color;
        return flood(image,sr,sc,color,check);
        
    }
};