#include<iostream>
#include<vector>
using namespace std;

struct activity{
    int startTime;
    int endTime;
    int idx;
};

bool cmp( activity a1, activity a2){
    return a1.endTime < a2.endTime;
}

void max_activity_perform(vector<activity>&v, int &count){
    sort(v.begin(), v.end(), cmp);
    count++;
    activity last = v[0];
    for(int i=1; i<v.size(); i++){
        if(v[i].startTime > last.endTime){
            count++;
            last = v[i];
        }
    }
}

int main(){
    int size, count=0, i=0;
    cout<<"Enter the size of total activity: "<<endl;
    cin>>size;
    vector<activity> v;
    while(size--){
        int s,e;
        cin>>s>>e;
        activity a;
        i++;
        a.startTime = s;
        a.endTime = e;
        a.idx = i;
        v.push_back(a);
    }
    max_activity_perform(v, count);
    cout<<"Total number of activity: "<<count<<endl;
    return 0;
}