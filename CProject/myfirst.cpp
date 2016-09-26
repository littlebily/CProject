//
//  myfirst.cpp
//  CProject
//
//  Created by Bolu on 2016/9/22.
//  Copyright © 2016年 Bolu. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

void simon(int);

int main()
{
    //1.cout
//    cout << "Come up and C++ me some time.";
//    cout << endl;
//    cout << "You won't regret it!" << endl;
    
    //2.
//    int carrots;
//    
//    carrots = 25;
//    cout << "I have ";
//    cout << carrots;
//    cout << " carrots.";
//    cout << endl;
//    carrots = carrots - 1;
//    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
    
    //3.c++可以连续使用赋值运算符
//    int a;
//    int b;
//    int c;
//    a = b = c = 10;
    
    //4.
//    int carrots;
//    
//    cout << "How many carrots do you have?" << endl;
//    cin >> carrots;
//    cout << "Here are two more. ";
//    carrots = carrots + 2;
//    cout << "Now you have " << carrots << " carrots." << endl;
    
    //5.调用系统函数
//    double side = sqrt(5);
//    cout << side << endl;
    
    //6.自定义函数
    using std::cout;
    using std::cin;
    using std::endl;

    simon(3);
    cout << "Pick an integer:";
    int count;
    cin >> count;
    simon(count);
    cout << "Done!" << endl;
    
    return 0;
}

void simon(int n)
{
    std::cout << "Simon says touch your toes " << n << " times." << std::endl;
}
