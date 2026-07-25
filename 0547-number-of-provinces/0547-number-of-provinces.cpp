class Solution {
private:
    int find(vector<int>& ldr,int node)
    {
        if(ldr[node]!=node)
            ldr[node]=find(ldr,ldr[node]);
        return ldr[node];
    }
    void join(vector<int>& ldr,int lt,int rt)
    {
        ldr[find(ldr,rt)]=ldr[find(ldr,lt)];
    }
public:
    int findCircleNum(vector<vector<int>>& c) {
        int n=c.size();
        vector<int> ldr(n+1,0);
        for(int i=1;i<=n;i++)
        {
            ldr[i]=i;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(c[i][j]==1)
                    join(ldr,i+1,j+1);
            }
        }
        set<int> st;
        for(int i=1;i<=n;i++)
        {
            st.insert(find(ldr,i));
        }
        return st.size();

    }
};