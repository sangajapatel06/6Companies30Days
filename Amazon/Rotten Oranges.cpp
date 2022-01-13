class Solution
{
public:
    int orangesRotting(vector<vector<int>> &grid)
    {

       

        int m = grid.size(), n = grid[0].size(), fresh_oranges = 0, rotten = 0, minutes = -1;

        // to go right, left, up and down
        int dr[4] = {1, -1, 0, 0};
        int dc[4] = {0, 0, 1, -1};

        //for BFS
        queue<pair<int, int>> q;

        //pushing all already rotten oranges in the queue
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1)
                    fresh_oranges++;
                if (grid[i][j] == 2)
                    q.push({i, j});
            }
        }

        //BFS
        while (!q.empty())
        {
            int size = q.size();

            while (size--)
            {
                pair<int, int> p = q.front();
                q.pop();

                int x = p.first, y = p.second;
                for (int i = 0; i < 4; i++)
                {
                    int r = x + dr[i], c = y + dc[i];

                    // if coordinates is out of bounds or the cell is empty
                    // or already has a rotten oranges, jump to next iteration
                    if (r < 0 || r >= m || c < 0 || c >= n || grid[r][c] != 1)
                        continue;

                    //otherwise rotten the fresh orange
                    grid[r][c] = 2;
                    fresh_oranges--;

                    //pushing rottened orange in queue
                    q.push({r, c});
                }
            }
            minutes++;
        }

        if (fresh_oranges > 0)
            return -1;
        return minutes;
    }
};