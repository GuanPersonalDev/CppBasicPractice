#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<string, int> p("abc",3);
    cout << p.first << endl; // abc

    p.first = "hello";
    cout << p.first << endl; // hello
    cout << p.second << endl; // 3

    p = make_pair("*",1);

    string s;
    int i;
    tie(s, i) = p;
    cout << s << endl; // *
    cout << i << endl; // 1
    return 0;
}