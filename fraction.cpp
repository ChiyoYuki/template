#include<bits/stdc++.h>

using namespace std;

class fraction
{
    public:
    pair<long,long> num;
    
    double value()
    {
        return 1.0*num.first/num.second;
    }

    
};