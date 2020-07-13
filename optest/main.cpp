/*************************************************************************
# File Name: main.cpp
# Author: beihuan
# mail: 2635081448qq.com
# Created Time: Fri 10 Jul 2020 11:51:23 AM CST
 ************************************************************************/

#include <iostream>
#include <opencv2/opencv.hpp>
#include<opencv2/core.hpp>
#include<opencv2/highgui.hpp>
using namespace cv;
using namespace std;

int main()
{
    Mat img=imread("/root/Pictures/1.jpeg");
    cout << "Hello World!" << endl;
    imshow("Origin",img);
    waitKey(0);
    return 0;
}