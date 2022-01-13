vector<vector<string>> displayContacts(int n, string contact[], string s)
{
    // code here
    set<string> st;
    for (int i = 0; i < n; i++)
        st.insert(contact[i]);
    vector<vector<string>> ans(s.size());
    for (int i = 0; i < s.length(); i++)
    {
        for (auto it : st)
        {
            if (s.substr(0, i + 1) == it.substr(0, i + 1))
                ans[i].push_back(it);
        }
        if (ans[i].size() == 0)
            ans[i].push_back("0");
    }
    return ans;
}