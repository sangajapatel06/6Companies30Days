string FirstNonRepeating(string A)
{
    // Code here
    vector<int> count(26, 0);
    queue<char> q;
    string ans = "";
    for (int i = 0; i < A.length(); i++)
    {
        count[A[i] - 'a']++;
        q.push(A[i]);
        while (!q.empty())
        {
            if (count[q.front() - 'a'] > 1)
                q.pop();
            else
            {
                ans += q.front();
                break;
            }
        }
        if (q.empty())
            ans += "#";
    }
    return ans;
}