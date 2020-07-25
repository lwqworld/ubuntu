/*
 * @Author: Beihuang
 * @Github: https://github.com/lwqworld
 * @Date: 2020-07-25 17:16:06
 * @LastEditors: Beihuang
 * @LastEditTime: 2020-07-25 18:32:16
 * @FilePath: /Cpp_pj/Essential_C/main.cpp
 */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> ivec;
    int ival;
    while (cin >> ival)
    {
        ivec.push_back(ival);
    }
    int sum, ix;
    for (sum = 0, ix = 0; ix < ivec.size(); ++ix)
    {
        sum += ivec[ix];
        cout <<ivec[ix] << endl;
    }
    int average = sum / ivec.size();
    cout<<"sum of "<<ivec.size()
    <<" elements: "<<sum
    <<" . Average: "<<average<<endl;
    return 0;
}