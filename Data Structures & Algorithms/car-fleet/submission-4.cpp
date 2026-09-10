class Solution {
public:
    static bool cmp(pair<int,int> a, pair<int,int> b){return (a.first < b.first);}

    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> data;

        for(int i=0; i < speed.size(); i++)
        {
            data.push_back({position[i], speed[i]});
        }

        sort(data.begin(),data.end(),cmp);

        vector<float> time(speed.size(),0);
        for(int i = data.size()-1; i>=0; i--)
        {
            time[i] = (float)(target - data[i].first)/data[i].second;
        }
        for(int i=0; i<time.size();i++)
        {
            cout<<time[i]<<" ";
        }
        stack <float>carFleet;
        for(int i=time.size()-1; i>=0 ;i--)
        {
            if(!carFleet.empty() && time[i] <= carFleet.top())
            {
                
            }
            else
            {
                carFleet.push(time[i]);
            }

        }
        return carFleet.size();
    }
};
