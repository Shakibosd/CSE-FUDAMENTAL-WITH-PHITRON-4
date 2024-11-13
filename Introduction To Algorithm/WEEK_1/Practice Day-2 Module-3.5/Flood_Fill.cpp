class Solution
{
public:
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
    {
        if (image[sr][sc] == newColor)
        {
            return image;
        }

        fill(image, sr, sc, image[sr][sc], newColor);

        return image;
    }

public:
    void fill(vector<vector<int>> &image, int row, int col, int originalColor, int newColor)
    {
        if (row < 0 || row >= image.size() || col < 0 || col >= image[0].size() || image[row][col] != originalColor)
        {
            return;
        }
        image[row][col] = newColor;
        fill(image, row + 1, col, originalColor, newColor);
        fill(image, row - 1, col, originalColor, newColor);
        fill(image, row, col + 1, originalColor, newColor);
        fill(image, row, col - 1, originalColor, newColor);
    }
};