class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<pair<int,int>>adj[n];
        for(auto it:edges){
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        int cityno,mincitycnt=1e9;
        
        for(int i=0;i<n;i++){
            vector<int>dist(n,1e9);
            pq.push({0,i});
            dist[i]=0;
            while(!pq.empty()){
                int dis = pq.top().first;
                int node = pq.top().second;
                pq.pop();
                for(auto it:adj[node]){
                    int adjN = it.first;
                    int adjW = it.second;
                    if(dis+adjW<dist[adjN]){
                        dist[adjN]=dis+adjW;
                        pq.push({dist[adjN],adjN});
                    }
                }
            }
            int count=0;
            for(int j=0;j<n;j++){
                if(j!=i&&dist[j]<=distanceThreshold)
                    count++;
                
            }
            if(count<=mincitycnt){
                    mincitycnt=count;
                    cityno=i;
                }
            
        }
        return cityno;
    }
};