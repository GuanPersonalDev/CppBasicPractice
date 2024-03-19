// Q: 
// 給定
// 1. N個正整數 a0, a1 ... a(N-1) => 集合Cn
// 2. 正整數W
// 請判斷是否能從Cn中選擇幾個整數相加和為W

// tech: bit 演算
// if (bit & (1 << i) ){
// bit contains i
// }

#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int> collection, int value){
    bool exist = false;
    int n = collection.size();
    for (int bit = 0; bit < (1 << n) ; ++bit)
    {
       int sum = 0;
       for (int i = 0; i < n; ++i) 
       {
            if (bit & (1 << i))
            {
                sum += collection[i];
            }
       }

       if (sum == value)
       {
           return true; 
       }
    }
   return false;
}

int main()
{
    int n = 5;
    int w = 10;
    vector<int> cn = {1, 2, 4, 5, 11};
    bool ans = check(cn, w);
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

