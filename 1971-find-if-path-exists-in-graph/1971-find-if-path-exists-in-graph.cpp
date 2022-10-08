class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
          
        
          unordered_map<int, vector<int>> m;
         
          for(int i=0; i<edges.size(); i++)
          {
              m[edges[i][0]].push_back(edges[i][1]);
              m[edges[i][1]].push_back(edges[i][0]);
          } 
         vector<bool> visited(m.size()+1, false);
        
         queue<int> q;
        q.push(source);
        visited[source] = true;
        
        while(!q.empty())
        {
            int num = q.front();
            q.pop();
            
            for(auto i: m[num])
            {
                if(visited[i]==false)
                {
                    visited[i] = true;
                    q.push(i);
                }
            }
        }
        
        return visited[destination] ==true;
    }
};