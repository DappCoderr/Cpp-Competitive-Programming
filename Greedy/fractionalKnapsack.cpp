#include<iostream>
#include<vector>
using namespace std;

struct Item{
    int value;
    int weight;
};

bool cmp(Item i1, Item i2){
    double v_w_i1 = static_cast<double>(i1.value) / i1.weight;
    double v_w_i2 = static_cast<double>(i2.value) / i2.weight;
    return v_w_i1 > v_w_i2;
}

double fraction(int W, vector<Item> item){
    double ans = 0;
    sort(item.begin(), item.end(), cmp);
    for(const auto& items: item){
        if(items.weight <= W){
            ans += items.value;
            W -= items.weight;
        }else{
            double frac = static_cast<double>(W)/items.weight;
            ans += frac * items.value;
        }
    }
    return ans;
}

int main(){
    int n, W;
    cout<<"Enter item in bag and Weight of bag:"<<endl;
    cin>>n>>W;
    vector<Item> item;
    for(int i=0; i<n; i++){
        int v, w;
        cout<<"Enter item value and weight: "<<endl;
        cin>>v>>w;
        Item it;
        it.value = v;
        it.weight = w;
        item.push_back(it);
    }
    cout<<"Find value is: "<< fraction(W,item);
    return 0;
}