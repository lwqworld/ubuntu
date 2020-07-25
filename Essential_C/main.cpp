/*
 * @Author: Beihuang
 * @Github: https://github.com/lwqworld
 * @Date: 2020-07-25 17:16:06
 * @LastEditors: Beihuang
 * @LastEditTime: 2020-07-25 17:24:26
 * @FilePath: /Cpp_pj/Essential_C/main.cpp
 */ 
#include<iostream>
#include<string>
using namespace std;

int main(){
    string first_name,last_name;
    
    cout<<"Please enter your first name: ";
    cin>>first_name;
    
    cout<<"hi, "<<first_name<<"Please enter your last name: ";
    cin>>last_name;

    cout<<"\n";
    cout<<"Hello, "<<first_name<<' '<<last_name
    <<" ... and goodbye!\n";
}