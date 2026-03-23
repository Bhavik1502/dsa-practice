class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& A) {
        vector<int> res;

        int m = A.size();
        int n = A[0].size();

        int top = 0, bottom = m - 1;
        int left = 0, right = n - 1;

        while (top <= bottom && left <= right) {

            for (int j = left; j <= right; j++)
                res.push_back(A[top][j]);
            top++;

            for (int i = top; i <= bottom; i++)
                res.push_back(A[i][right]);
            right--;

            if (top <= bottom) {
                for (int j = right; j >= left; j--)
                    res.push_back(A[bottom][j]);
                bottom--;
            }

            if (left <= right) {
                for (int i = bottom; i >= top; i--)
                    res.push_back(A[i][left]);
                left++;
            }
        }

        return res;
    }
};
