#include<iostream>
#include<vector>
using namespace std;

struct meeting{
    int start;
    int end;
    int idx;
};

bool cmp(meeting m1, meeting m2){
    return m1.end < m2.end;
}

void print_meetings(vector<meeting>&v){
    sort(v.begin(), v.end(), cmp);
    cout<<"The index is: "<<v[0].idx<<" ";
    meeting last = v[0];
    for(int i=1; i<v.size(); i++){
        if(v[i].start > last.end){
            cout<<v[i].idx<<" ";
            last = v[i];
        }
    }
}

int main(){
    int n;
    cout<<"Enter the size: "<<endl;
    cin>>n;
    vector<meeting> v;
    int i=0;
    while(n--){
        int s,e;
        cout<<"Enter the start and end time: "<<endl;
        cin>>s>>e;
        i++;
        meeting m;
        m.start = s;
        m.end = e;
        m.idx = i;
        v.push_back(m);
    }
    print_meetings(v);
    return 0;
}