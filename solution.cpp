#include <iostream>

using namespace std;

int main()
{
    int X,P;
    cin>>X>>P;
    int s = X;
    int p = X - (0.01)*P*X;
    while(p>0){
        s+=p;
        p = p - (0.01)*P*p;
    }
    cout<<s;
    
    
    return 0;
}
