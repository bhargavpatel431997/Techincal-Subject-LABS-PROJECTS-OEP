#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct sort_pred {
    bool operator()(const pair<pair<float,float>,float> &left, const pair<pair<float,float>,float> &right) {
        return left.second > right.second;
    }
};
int main()
{
    int n;
    float w,v1,wl;
    vector<pair<pair<float,float>,float> > v;
    cout<<"enter total values\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter "<<i+1<<" value"<<endl;
        cin>>v1;
        cout<<"enter "<<i+1<<" weight"<<endl;
        cin>>w;
        v.push_back(make_pair(make_pair(w,v1),v1/w));
        cout<<endl;
    }

    cout<<"enter weight capacity :"<<endl;
    cin>>wl;

    sort(v.begin(), v.end(), sort_pred());
    for(int i=0;i<v.size();i++)
    {
        cout<<" w :"<<v[i].first.first<<" v :"<<v[i].first.second<<" v/w :"<<v[i].second<<endl;
    }
    float ans=0,wcount=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i].first.first+wcount>wl)
        {
            float x=(wl-wcount)/v[i].first.first;
            wcount+=(x*v[i].first.first);
            ans+=v[i].first.second * x;
        }
        else
        {
            wcount+=v[i].first.first;
            ans+=v[i].first.second;
        }
    }
    cout<<"ans is "<<ans<<endl;
    return 0;
}
