#include <iostream>
using namespace std;
int main()
{
    cout<<"Input numbers"<<endl;
    int a;
    cin>>a;
    if ((a<100)&&(a>9)&&(a%2==0)) {
        cout<<"True";
    }
    else {
        cout<<"False";
    }
}
