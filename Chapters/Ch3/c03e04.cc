#include <iostream>
using namespace std;

void c03e04(){
    cout<<"Enter two comma separated integer values: ";
    int val1,val2;
    char c;
    cin>>val1>>c>>val2;
    cout<<"smallest value: "<<(val1<val2?val1:val2)<<endl;
    cout<<"largest value: "<<(val1>val2?val1:val2)<<endl;
    cout<<"sum is: "<<val2+val1<<endl;
    cout<<"difference is: "<<val1-val2<<endl;
    cout<<"product is: "<<val1*val2<<endl;
    cout<<"ratio is: "<<static_cast<double>( val1)/val2<<endl;
}