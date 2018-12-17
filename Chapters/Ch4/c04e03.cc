#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

void c04e03(){
    cout<<"enter number of distances: ";
    int n;
    cin>>n;
    vector<double> d;
    
    for(int i = 0; i < n; i++)
    {
        double x;
        cout<<"distance "<<i+1<<": ";
        cin>>x;
        d.push_back(x);
    }
    double acc=accumulate(d.begin(),d.end(),0);
    cout<<"total distance is: "<<acc<<endl;
    vector<double> sd=d;
    sort(sd.begin(),sd.end());
    cout<<"smallest distance is: "<<sd.front()<<endl;
    cout<<"smallest distance is: "<<sd.back()<<endl;
    cout<<"mean distance is: "<<acc/sd.size()<<endl;
}