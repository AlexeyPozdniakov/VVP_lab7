#include <iostream>
using namespace std;
int main()
{
    cout<<"Input numbers"<<endl;
    float a,b,c;
    cin>>a>>b>>c;
    if ((a<b)&&(b<c)) {
        cout<<"True";
    }
    else {
        cout<<"False";
    }
}
