/*
 * @Author: Beihuang
 * @Github: https://github.com/lwqworld
 * @Date: 2020-07-17 09:59:50
 * @LastEditors: Beihuang
 * @LastEditTime: 2020-07-22 12:03:13
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

#define MAX 1000
//菜单帮助
void showMenu()
{
	cout << "*************************" << endl;
	cout << "*****    1.添加联系人   ****" << endl;
	cout << "*****    2.显示联系人   ****" << endl;
	cout << "*****    3.删除联系人   ****" << endl;
	cout << "*****    4.查找联系人   ****" << endl;
	cout << "*****    5.修改联系人   ****" << endl;
	cout << "*****    6.清空联系人   ****" << endl;
	cout << "*****    1.退出联系人   ****" << endl;
	cout << "*************************" << endl;
}
//退出联系人

//结构体
//联系人结构体
struct Person
{
	string m_name;
	int m_age;
	int m_sex;//1:man 0:woman
	string m_phone;
	string m_Addr;
};

struct Addressbooks
{
	Person personArray[MAX];
	int m_size;

};

void addPersion(Addressbooks *p){
	if(p->m_size<=MAX){
		//name
		string name;
		cout<<"Enter your name"<<endl;
		cin>>name;
		p->personArray[p->m_size].m_name=name;
		//sex
		cout<<"Enter your sex"<< endl;
		cout<<"    1:man    0:woman "<<endl;
		
	}
	else{
		
		cout<<"通讯录已满，无法添加！"<<endl;
		return;
	}
}
int main()
{
	showMenu();
	//add
	Addressbooks lwq;
	//Init
	lwq.m_size=0;

	int select = 0;
	cin >> select;
	switch (select)
	{
	case 0:
		cout << "欢迎下次使用" << endl;
		return 0;
		break;
	case 1:
	
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	case 6:
		break;
	default:
		break;
	}

	// 三种方法储存用户名字
	//1、vector定义
	// vector<string> user_name_v(2);
	// //2、array定义
	// string user_name_a;
	// //3、定义两个string对象
	// string first_name, last_name;
	return 0;
}