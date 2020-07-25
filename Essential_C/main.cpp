/*
 * @Author: Beihuang
 * @Github: https://github.com/lwqworld
 * @Date: 2020-07-25 17:16:06
 * @LastEditors: Beihuang
 * @LastEditTime: 2020-07-25 18:06:12
 * @FilePath: /Cpp_pj/Essential_C/main.cpp
 */ 
#include<iostream>
#include<string>
#include<iomanip>
#include<cstring>
using namespace std;

int main(){
    const int nm_size=128;
    char user_name[nm_size];
    
    cout<<"Please enter your  name: ";
    cin>>setw(nm_size)>>user_name;
    switch(strlen(user_name)){
        case 0:
            cout<<"Ah,the user with no name."
            <<"Well ,ok ,hi,user with no name\n";
            break;
        case 1:
            cout<<"A  1-character name? Hum,have you resd Kafka?: "
            <<"hello, "<<user_name<<endl;
            break;
        case 127:
            cout<<"That is a very  big name: indeed -- "<<"we may have needed to shorten it!\n"
            <<"In any case,\n";
        default:
            cout<<"Hello, "<<user_name<<" -- happy to make ypur acquaintance!\n";
            break;
        
    }
    return 0;
}