#include <iostream>

using namespace std;

int gcd(int w, int r)
{
    if(w==0)
        return r;
    return gcd(w%r,r);
}
int main()
{
    int w = 210, r=45;
    cout<< "GCD( "<<w<<","<<r<<")="<<gcd(w,r)<<endl;
    return 0;
}
