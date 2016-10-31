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
#include <climits>

#define ZERO 0

using namespace std;

void simon(int);

void simon(int n)
{
    std::cout << "Simon says touch your toes " << n << " times." << std::endl;
}

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
//    using std::cout;
//    using std::cin;
//    using std::endl;
//
//    simon(3);
//    cout << "Pick an integer:";
//    int count;
//    cin >> count;
//    simon(count);
//    cout << "Done!" << endl;
    
    //7.打印系统数据占位
//    char n_char = CHAR_MAX;
//    int n_int = INT_MAX;
//    short n_short = SHRT_MAX;
//    long n_long = LONG_MAX;
//    long long n_llong = LLONG_MAX;
//    
//    cout << "char is " << sizeof(char) << " bytes." << endl;//1
//    cout << "int is " << sizeof(int) << " bytes." << endl;//4
//    cout << "short is " << sizeof n_short << " bytes." << endl;//2
//    cout << "long is " << sizeof n_long << " bytes." << endl;//8
//    cout << "long long is " << sizeof n_llong << " bytes." << endl;//8
//    cout << endl;
//    
//    cout << "Maximum values:" << endl;
//    cout << "char: " << n_char << endl;
//    cout << "int: " << n_int << endl;
//    cout << "short: " << n_short << endl;
//    cout << "long: " << n_long << endl;
//    cout << "long long: " << n_llong << endl << endl;
//    
//    cout << "Minimum int value = " << INT_MIN << endl;
//    cout << "Bits per byte = " << CHAR_BIT << endl;

    //8.数据超出整型范围
//    short sam = SHRT_MAX;
//    unsigned short sue = sam;
//    
//    cout << "Sam has " << sam << " dollars and Sue has " << sue;
//    cout << " dollars deposited." << endl
//         << "Add $1 to each account." << endl << "Now ";
//    
//    sam = sam + 1;
//    sue = sue + 1;
//    
//    cout << "Sam has " << sam << " dollars and Sue has " << sue;
//    cout << " dollars deposited.\nPoor Sam!" << endl;
//    
//    sam = ZERO;
//    sue = ZERO;
//    
//    cout << "Sam has " << sam << " dollars and Sue has " << sue;
//    cout << " dollars deposited." << endl;
//    cout << "Take $1 from each account." << endl << "Now ";
//    
//    sam = sam - 1;
//    sue = sue - 1;
//    
//    cout << "Sam has " << sam << " dollars and Sue has " << sue;
//    cout << " dollars deposited." << endl << "Lucky Sue!" << endl;

    //9.各种计数方式
//    int chest = 42;
//    int waist = 0x42;
//    int inseam = 042;
//    
//    cout << "Monsieur cuts a striking figure!\n";
//    cout << "chest = " << chest << "(42 in decimal)\n";
//    cout << "waist = " << waist << "(0x42 in hex)\n";
//    cout << "inseam = " << inseam << "(042 in octal)\n";

//    int chest = 42;
//    int waist = 42;
//    int inseam = 42;
//    
//    cout << "Monsieur cuts a striking figure!\n";
//    cout << "chest = " << chest << "(42 in decimal)\n";
//    cout << hex;
//    cout << "waist = " << waist << "(0x42 in hex)\n";
//    cout << oct;
//    cout << "inseam = " << inseam << "(042 in octal)\n";

    //10.char类型
//    char ch;
//    
//    cout << "Enter a character:" << endl;
//    cin >> ch;
//    cout << "Hola!";
//    cout << "Thank you for the " << ch << " character." << endl;
    
    //程序清单3.6
//    char ch = 'M';
//    int i = ch;
//    cout << "The ASCII code for " << ch << " is " << i << endl;
//    
//    cout << "Add one to the character code:" << endl;
//    ch = ch + 1;
//    i = ch;
//    cout << "The ASCII code for " << ch << " is " << i << endl;
//
//    cout << "Displaying char ch using cout.put(ch):";
//    cout.put(ch);
//    
//    cout.put('!');
//    cout << endl << "Done" << endl;
    
//    char alarm = '\a';
//    cout << alarm << "Don't do that again!\a\n";
//    cout << "Ben \"Buggsie\" Hacker\nwas here!\n";
    
    //11.通用字符
//    int k\u00F6rper;
//    cout << "Let them eat g\u00E2teau.\n";
    
    //12.有效位数
//    cout.setf(ios_base::fixed, ios_base::floatfield);
//    float tub = 10.0 / 3.0;
//    double mint = 10.0 / 3.0;
//    const float million = 1.0e6;
//    
//    cout << "tub = " << tub;
//    cout << ", a million tubs = " << million * tub;
//    cout << ",\nand ten million tubs = ";
//    cout << 10 * million * tub << endl;
//    
//    cout << "mint = " << mint << " and a million mints = ";
//    cout << million * mint << endl;
    
    //13.浮点数的运行性能
//    float a = 2.34E+22f;
//    float b = a + 1.0f;
//    
//    cout << "a = " << a << endl;
//    cout << "b - a = " << b - a << endl;
    
    //14.在数组中使用字符串
//    const int Size = 15;
//    char name1[Size];
//    char name2[Size] = "C++owboy";
//    
//    cout << "Howdy! I'm " << name2;
//    cout << "! What's your name?\n";
//    cin >> name1;
//    cout << "Well, " << name1 << ", your name has ";
//    cout << strlen(name1) << " letters and is stored\n";
//    cout << "in an array of " << sizeof(name1) << " bytes.\n";
//    cout << "Your initial is " << name1[0] << ".\n";
//    name2[3] = '\0';
//    cout << "Here are the first 3 characters of my name: ";
//    cout << name2 <<endl;

    //15.字符串输入
//    const int ArSize = 20;
//    char name[ArSize];
//    char dessert[ArSize];
//    
//    cout << "Enter your name:\n";
//    cin >> name;
//    cout << "Enter your favorite dessert:\n";
//    cin >> dessert;
//    cout << "I have some delicious " << dessert;
//    cout << " for you, " << name << ".\n";
    
    //16.字符串输入getline
//    const int ArSize = 20;
//    char name[ArSize];
//    char dessert[ArSize];
//    
//    cout << "Enter your name:\n";
//    cin.getline(name, ArSize);
//    cout << "Enter your favorite dessert:\n";
//    cin.getline(dessert, ArSize);
//    cout << "I have some delicious " << dessert;
//    cout << " for you, " << name << ".\n";
    
    //17.字符串输入get
//    const int ArSize = 20;
//    char name[ArSize];
//    char dessert[ArSize];
//
//    cin.getline(name, ArSize);
//    cin.getline(dessert, ArSize);
//
////    cin.get(name, ArSize);
////    cin.get();
////    cin.get(dessert, ArSize);
//
//    cout << "name:" << name << endl;
//    cout << "dessert:" << dessert << endl;
    
    //18.混合输入字符串和数字
//    int year;
//    (cin >> year).get();
////    cin.get();
//    char address[80];
//    cin.getline(address, 80);
//    
//    cout << "year:" << year << endl;
//    cout << "address:" << address << endl;
    
    //19.string对象与字符数组（程序清单4.7）
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";
    
    cout << "Enter a kind of feline:";
    cin >> charr1;
    cout << "Enter another kind of feline:";
    cin >> str1;
    cout << "Here are some feline:\n";
    cout << charr1 << " " << charr2 << " "
         << str1 << " " << str2
         << endl;
    cout << "The third letter in " << charr2 << " is "
         << charr2[2] << endl;
    cout << "The third letter in " << str2 << " is "
         << str2[2] << endl;

    return 0;
}

