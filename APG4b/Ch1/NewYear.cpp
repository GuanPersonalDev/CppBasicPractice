// 問題: 12/30 M時から次の年になるまでは何時間か?
// 1 <= M <= 23
// M is int

#include <bits/stdc++.h>
using namespace std;

const int kHourPerDay = 24;

int getTodayRemainHour(int m)
{
    return kHourPerDay - m;
}

int main()
{
    int m;
    cin >> m;
    int remain_hour = getTodayRemainHour(m);
    int result = kHourPerDay + remain_hour;
    cout << result << endl;
    return result;
}
