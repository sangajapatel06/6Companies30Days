vector<int> findMax(vector<int> v, int k)
{

    priority_queue<int> pq;
    int n = v.size();
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        pq.push(v[i]);
    }
    for (int i = 0; i < k; i++)
    {
        ans.push_back(pq.top());
        pq.pop();
    }

    return ans;
}