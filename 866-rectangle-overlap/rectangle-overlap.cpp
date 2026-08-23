class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int x1 = rec1[0] , y1 = rec1[1] ,x2 = rec1[2] ,y2 = rec1[3];
        int a1 = rec2[0] , b1 = rec2[1] ,a2 = rec2[2] ,b2 = rec2[3];

        if(x1 > a1 && y1 > b1 && x1 < a2 && y1 < b2)
        {
            return true;
        }
        else if(x2 > a1 && y2 > b1 && x2 < a2 && y2 < b2)
        {
            return true;
        }
        else if(x1 > a1 && y2 > b1 && x1 < a2 && y2 < b2)
        {
            return true;
        }
        else if(x2 > a1 && y1 > b1 && x2 < a2 && y1 < b2)
        {
            return true;
        }
        else if(a1 > x1 && b1 > y1 && a1 < x2 && b1 < y2)
        {
            return true;
        }
        else if(a2 > x1 && b2 > y1 && a2 < x2 && b2 < y2)
        {
            return true;
        }
        else if(a1 > x1 && b2 > y1 && a1 < x2 && b2 < y2)
        {
            return true;
        }
        else if(a2 > x1 && b1 > y1 && a2 < x2 && b1 < y2)
        {
            return true;
        }
        else if(x1 < a2 && x2 > a1 && y1 < b2 && y2 > b1)
        {
            return true;
        }
        return false;
    }
};