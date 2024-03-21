// Q: 
// 給定
// 1. N個正整數 a0, a1 ... a(N-1) => 集合Cn
// 2. 正整數W
// 請判斷是否能從Cn中選擇幾個整數相加和為W

// tech: 分治法，
// 將第N項拆解為
// 選擇 -> 問題變為 a0 ~ a(N-2) 是否可得相加為 W-a(N-1)
// 不選擇 -> 問題變為 a0 ~ a(N-2) 是否可得相加為 W
// 其中一解為True時，則原問為True；持續向下拆解

#include <iostream>
#include <vector>
using namespace std;

bool check(int i, int value, vector<int> &collection)
{
    // 基本情況
    if ( i == 0 )
    {
        return value == 0;
    }
    
    // 不選collection[i-1]
    if ( check(i-1, value, collection) )
    {
        return true;
    }

    // 選collection[i-1]
    if ( check(i-1, value - collection[i-1], collection) )
    {
        return true;
    }
    return false;

}

int main()
{
    int n = 5;
    int w = 10;
    vector<int> cn = {1, 2, 4, 5, 11};
    bool ans = check(n,w,cn);
    if(ans)
    {
        cout << "exist" << endl;
    }
    else
    {
        cout << "not exist" << endl;
    }
    return 0;
}

