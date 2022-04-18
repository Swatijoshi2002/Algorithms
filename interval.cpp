class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> res;
        int s=intervals[0][0];
        int e=intervals[0][1];
        if(intervals.size()==0)
            return res;
         if(intervals.size()==0)
         {
                             res.push_back({s,e});
             return res;
         }
        for(int i=1;i<intervals.size();i++)
        {
            if(e>=intervals[i][0])
            {
                e=max(e,intervals[i][1]);
            }
            else {
                
                res.push_back({s,e});
                s=intervals[i][0];
                e=intervals[i][1];
            }
        }
         res.push_back({s,e});
        return res;
                       }
                    
};
