#include <iostream>
#include <vector>
using namespace std;

//  Template の書き方で, c# の generic と似ているコードを作れる
template<class T> void chmin(T& a, T b)
{
    if(b < a)
    {
        a = b;
    }
}
const long long INF = 1LL << 60; // 2^60

long long getJumpCost(long long current_height, long long target_height)
{
    return abs(target_height - current_height);
}
int main()
{
    int count = 7;
    vector<long long> h{2,9,4,5,1,6,10};
    vector<long long> cost(count,INF);
    cost[0] = 0;

    for(int i = 1; i < count ; i++)
    {
        long long jump_cost = cost[i-1] + getJumpCost(h[i-1], h[i]);
        chmin(cost[i], jump_cost);
        if ( i > 1 )
        {
            jump_cost = cost[i-2] + getJumpCost(h[i-2],h[i]);
            chmin(cost[i], jump_cost);
        }
        cout << cost[i] << endl;
    }
    return 0;
}