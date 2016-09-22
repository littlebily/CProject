//
//  main.c
//  CProject
//
//  Created by Bolu on 15/4/11.
//  Copyright (c) 2015年 Bolu. All rights reserved.
//

//#include <stdio.h>
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    printf("Hello, World!\n");
//    return 0;
//}

//#include <stdio.h>
//
//int x, y;
//
//int main(void)
//{
////    for (x = 0; x < 10; x++,printf("%d", x), printf("\n") ) {
////        for (y = 0; y < 10; y++) {
////            printf("X");
////        }
////    }
//    
////    printf("you\'u  \n");
//
//    
//    
//    return 0;
//}


//print_it.c-This program prints a listing with line numbers!

//#include <stdlib.h>
//#include <stdio.h>
//
//void do_heading(char *filename);
//
//int line = 0, page = 0;
//
//int main(int argv, char *argc[])
//{
//    char buffer[256];
//    FILE *fp;
//    
//    if (argv < 2) {
//        fprintf(stderr, "\nProper Usage is:");
//        fprintf(stderr, "\nprint_it filename.ext\n");
//        return(1);
//    }
//    
//    if ((fp = fopen(argc[1], "r")) == NULL) {
//        fprintf(stderr, "Error opening file, %s!", argc[1]);
//        return(1);
//    }
//    
//    page = 0;
//    line = 1;
//    do_heading(argc[1]);
//    
//    while (fgets(buffer, 256, fp) != NULL) {
//        if (line % 55 == 0) {
//            do_heading(argc[1]);
//            fprintf(stdout, "%4d:\t%s", line++, buffer);
//        }
//    }
//    
//    fprintf(stdout, "\f");
//    fclose(fp);
//    return 0;
//}
//
//void do_heading(char *filename)
//{
//    page++;
//    
//    if (page > 1) {
//        fprintf(stdout, "Page:%d, %s\n\n", page, filename);
//    }
//}

//#include <stdio.h>
////#include <stdlib.h>
//
//int main()
//{
//    printf("ddd\n");
//    
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    printf("A char is %lu bytes \n",sizeof(char));
//    printf("An int is %lu bytes \n",sizeof(int));
//    printf("A short is %lu bytes \n",sizeof(short));
//    printf("A long is %lu bytes \n",sizeof(long));
//    printf("A long long is %lu bytes \n",sizeof(long long));
//    
//    printf("An unsigned char is %lu bytes \n",sizeof(unsigned char));
//    printf("An unsigned int is %lu bytes \n",sizeof(unsigned int));
//    printf("An unsigned short is %lu bytes \n",sizeof(unsigned short));
//    printf("An unsigned long is %lu bytes \n",sizeof(unsigned long));
//    printf("An unsigned long long is %lu bytes \n",sizeof(unsigned long long));
//
//    printf("A float is %lu bytes \n",sizeof(float));
//    printf("A double is %lu bytes \n",sizeof(double));
//    printf("A long double is %lu bytes \n",sizeof(long double));
//
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define NO  0
//#define YES 1
//
//int main(void)
//{
//    int guess_value = -1;
//    int number;
//    int nbr_of_guesses;
//    int done = NO;
//    
//    printf("\n\nGetting a Random number\n");
//    
//    srand((unsigned)time(NULL));
//    number = rand();
//    
//    nbr_of_guesses = 0;
//    while (done == NO) {
//        printf("\nPick a number between 0 and %d>", RAND_MAX);
//        scanf("%d", &guess_value);
//        
//        nbr_of_guesses++;
//        if (number == guess_value) {
//            done = YES;
//        }
//        else if (number < guess_value)
//        {
//            printf("\nYou guessed high!");
//        }
//        else
//        {
//            printf("\nYou guessed low!");
//        }
//    }
//    
//    printf("\n\nCongratulations! You guessed right in %d Guesses!",nbr_of_guesses);
//    printf("\n\nThe number was %d\n\n",number);
//}

//#include <stdio.h>
//
//long cube(long x);
//
//long input, answer;
//
//int main(void)
//{
//    printf("Enter an integer vlaues:");
//    scanf("%ld",&input);
//    answer = cube(input);
//    printf("\nThe cube of %ld is %ld.\n", input, answer);
//    
//    return 0;
//}
//
//long cube(long d)
//{
//    long x_cubed;
//    
//    x_cubed = d * d * d;
//    return x_cubed;
//}

//#include <stdio.h>
//
//unsigned int f, x;
//unsigned int factorial(unsigned int a);
//
//int main(void)
//{
//    puts("Enter an integer value between 1 and 8:");
//    scanf("%d", &x);
//    
////    if (x > 8 || x < 1) {
////        printf("Only values from 1 to 8 are acceptable!");
////    }
////    else
////    {
//        f = factorial(x);
//        printf("%u facrorial equals %u\n", x, f);
////    }
//    
//    return 0;
//}
//
//unsigned int factorial(unsigned int a)
//{
//    if (a == 1) {
//        return 1;
//    }
//    else
//    {
//        a = a * factorial(a-1);
//        return a;
//    }
//}

//inline

//#include <stdio.h>
//#include <time.h>
//
//int main()
//{
////    char ch;
////    char *pch;
////    pch = &ch;
////    ch = 'g';
////    printf("%c\n",*pch);
////    printf("%s\n",pch);
////    
////    char c[] = {'d','t'};
////    printf("%s\n",c);
//    
////    printf("%d",sizeof(char));
//    
//    int num;
//    while (1) {
//        scanf("%d",&num);
//        int result = 1;
//        for (int i = 0 ; i < num; i ++) {
//            result = 2 * result;
//        }
//        printf("result---%d",result);
//    }
//
//    printf("countNum---%d",countNum(10));
//
//    
//}
//
//int countNum(int num)
//{
////    if (num == 1) {
////        return 1;
////    }
////    return num * countNum(num - 1);
//    
//    if (num == 1) {
//        return 2;
//    }
//    return 2 * countNum(num -1);
//}

//void istime() //打印当前时间
//{
//    time_t rawtime;
//    struct tm * timeinfo;
//    time ( &rawtime );
//    timeinfo = localtime ( &rawtime );
//    printf ( "当前时间: %s",asctime(timeinfo) );
//    
//}

//#include <stdio.h>
//unsigned char myChar;
//
//int main()
//{
//    
//    for (myChar = 180; myChar < 204; myChar ++) {
//        printf("ASCII code %d is character %c\n", myChar, myChar);
//    }
//}


//#include <stdio.h>
//#include <stdlib.h>

//struct myPoint {
//    int x;
//    int y;
//};
//
//char count, *ptr, *p;

//int main()
//{
//    ptr = malloc(5 * sizeof(char));
//    
//    if (ptr == NULL) {
//        puts("Memory allocation error");
//        return 1;
//    }
//    
//    p = ptr;
//    
//    for (count = 65; count < 91; count++) {
//        *p++ = count;
//    }
//    
////    *p = '\0';
//    
//    puts(ptr);
//    
//    free(ptr);
    
//    printf("i am %c a boy", '\n');
    
//    return 0;
    
//    struct myPoint fir;
    
//    register int x;
//    x = 3;
//    printf("%d",x);
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
////    int count = 0;
////    
////    printf("%d",count);
////    
////    {
////        int count = 99;
////        printf("%d",count);
////    }
////    
////    printf("%d",count);
//
////    int ctr1;
////    
////    for (ctr1 = 0; ctr1 < 25; ctr1++) {
////        printf("*");
////    }
////    
////    puts("\nThis is a sample function");
////    {
////        char star = '*';
////        puts("\nIt has a problem\n");
////        for (int ctr1 = 0; ctr1 < 25; ctr1++) {
////            printf("%c",star);
////        }
////    }
//    
//    exit(EXIT_SUCCESS);
//}


//#include <stdlib.h>
//#include <stdio.h>
//
//int main()
//{
//    char input[40];
//    
//    while (1) {
//        puts("\nInut the desired system command, blank ti exit");
//        gets(input);
//        
//        if (input[0] == '\0') {
//            exit(EXIT_SUCCESS);
//        }
//        
//        system(input);
//    }
//    
//    switch ("d") {
//        case "":
//            <#statements#>
//            break;
//            
//        default:
//            break;
//    }
//}


////清除输入流
//
//#include <stdio.h>
//
//void clear_kb(void);
//
//int main(void)
//{
//    int age;
//    char name[20];
//    
//    puts("Enter your age.");
//    scanf("%d", &age);
//    
////    clear_kb();
//    fflush(stdin);
//    
//    puts("Enter your first name:");
//    scanf("%s", name);
//    
//    printf("age %d.\n",age);
//    printf("name %s.\n",name);
//    
//    return 0;
//}
//
//void clear_kb(void)
//{
//    char junk[2];
//    gets(junk);
//}

////输入字符串并按字母排序打印
//
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//
//#define MAXLINES 25
//
//int get_lines(char *lines[]);
//void sort(char *p[], int n);
//void print_strings(char *p[], int n);
//
//char *lines[MAXLINES];
//
//int main()
//{
//    int number_of_lines;
//    
//    number_of_lines = get_lines(lines);
//    
//    if (number_of_lines < 0) {
//        puts("Memory allocation error");
//        exit(EXIT_FAILURE);
//    }
//    
//    sort(lines, number_of_lines);
//    print_strings(lines, number_of_lines);
//    
//    //写在此处会崩溃（不知为什么）
////    free(lines);
//    
//    return EXIT_SUCCESS;
//}
//
//int get_lines(char *lines[])
//{
//    int n = 0;
//    char buffer[80];
//    
//    puts("Enter one line at times; enter a blank when done.");
//    
//    while ((n < MAXLINES) && (gets(buffer) != 0) && (buffer[0] != '\0')) {
//        if ((lines[n] = (char *)malloc(strlen(buffer)+1)) == NULL) {
//            return -1;
//        }
//        strcpy(lines[n++], buffer);
//    }
//    
//    return n;
//}
//
//void sort(char *p[], int n)
//{
//    int a, b;
//    char *tmp;
//    
////    for (a = 1; a < n; a++) {
//        for (b = 0; b < n-1; b++) {
//            if (strcmp(p[b], p[b+1]) > 0) {
//                tmp = p[b];
//                p[b] = p[b+1];
//                p[b+1] = tmp;
//            }
//        }
////    }
//}
//
//void print_strings(char *p[], int n)
//{
//    int count;
//    
//    for (count = 0; count < n; count++) {
//        printf("%s\n", p[count]);
//    }
//}


////函数指针
//
//#include <stdio.h>
//
//double square(double x);
//
//double (*ptr)(double x);
//
//int main()
//{
//    ptr = square;
//    
//    printf("%f %f\n", square(6.6), ptr(6.6));
//    
//    return 0;
//}
//
//double square(double x)
//{
//    return x * x;
//}


//#include <stdlib.h>
//
//typedef struct
//{
//    char *a;
//    int c;
//}bb;
//
//int main()
//{
////    const int a = 9;
////    a = 10;
//    
//    return 0;
//}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *getHint(char *secret, char *guess);

int main()
{
//    getHint("1807", "7810");//1A3B
    getHint("1123", "0111");//1A1B
    
//    char hint[5];
//    char *hint;
//    
//    sprintf(hint, "%dA%dB", 1, 3);
//    
//    printf("%s\n", hint);
    

//    char *hint;
//    sprintf(hint, "%dA%dB", 1, 3);
//    printf("%s\n", hint);
    
    return 0;
}

char *getHint(char *secret, char *guess)
{
    int a = 0, b = 0;
    int count = (int)strlen(secret);
    
    for (int i = 0; i < count; i ++)
    {
        if (secret[i] == guess[i])
        {
            a ++;
        }
        else
        {
            for (int j = 0; j < count; j ++)
            {
                if (secret[i] == guess[j])
                {
                    b ++;
                    break;
                }
            }
        }
    }
    
//    char hint[5];
    char *hint = malloc(5);

    sprintf(hint, "%dA%dB", 1, 1);

    printf("%s\n", hint);
    
    return hint;
}

