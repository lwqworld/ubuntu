/*
 * @Author: Beihuang
 * @Github: https://github.com/lwqworld
 * @Date: 2020-07-25 17:16:06
 * @LastEditors: Beihuang
 * @LastEditTime: 2020-07-25 17:38:09
 * @FilePath: /Cpp_pj/Essential_C/main.cpp
 */ 
#include<iostream>
#include<string>
using namespace std;

int main(){
    string user_name;
    
    cout<<"Please enter your  name: ";
    cin>>user_name;
    switch(user_name.size()){
        case 0:
            cout<<"Ah,the user with no name."
            <<"Well ,ok ,hi,user with no name\n";
            break;
        case 1:
            cout<<"A  1-character name? Hum,have you resd Kafka?: "
            <<"hello, "<<user_name<<endl;
            break;
        default:
            cout<<"Hello, "<<user_name<<" -- happy to make ypur acquaintance!\n";
            break;
        
    }
    return 0;
}