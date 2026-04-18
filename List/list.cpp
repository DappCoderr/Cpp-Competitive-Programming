#include<iostream>
#include<list>
using namespace std;

int main() {
    list<string> cars = {"BMW", "Mercedes", "Tata", "Toyota", "Lexius"};

    while(!cars.empty()){
        cout<<cars.front()<<"\n";
        cars.pop_front();
    }
    return 0;
}
