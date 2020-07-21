/*
 * @Author: Beihuang
 * @Github: https://github.com/lwqworld
 * @Date: 2020-07-17 09:59:50
 * @LastEditors: Beihuang
 * @LastEditTime: 2020-07-21 17:25:07
 * @FilePath: /Cpp_pj/ECtest/main.cpp
 */

/*
通讯录功能：
    1.添加联系人
    2.显示联系人
    3.删除联系人
    4.查找联系人
    5.修改联系人
    6.清空联系人
    0.退出联系人
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void showMenu(){
    cout<<"*************************"<<endl;
    cout<<"*****    1.添加联系人   ****"<<endl;
    cout<<"*****    2.显示联系人   ****"<<endl;
    cout<<"*****    3.删除联系人   ****"<<endl;
    cout<<"*****    4.查找联系人   ****"<<endl;
    cout<<"*****    5.修改联系人   ****"<<endl;
    cout<<"*****    6.清空联系人   ****"<<endl;
    cout<<"*****    1.退出联系人   ****"<<endl;
    cout<<"*************************"<<endl;
    
}
//结构体
struct Hero
{
    string name;
    int age;
    string sex;
};

int main()
{
    showMenu();
    
    // 三种方法储存用户名字
    //1、vector定义
    // vector<string> user_name_v(2);
    // //2、array定义
    // string user_name_a;

    // cout << "Plaese enter your user name : ";
    // cin >> user_name_a;
    // switch (user_name_a.size())
    // {
    // }
    // //3、定义两个string对象
    // string first_name, last_name;
    /*
    cout << "Plaese enter your first name : ";
    cin >> first_name;
    cout << "hi,  " << first_name << "Plaese enter your last name :  ";

    cin >> last_name;
    cout << '\n';
    cout << "Hello,  " << first_name << " " << last_name << "... and goodbye!\n";
    */
    return 0;
}