/**************************************** Hello World 类型 ***********************************************************/
/********************************** test3.c **************************************************/


#include <stdio.h>

void Calculate()
{
    static int iSum = 3;
    int iTemp;
    iTemp = iSum;           // iSum 是静态变量
    iSum = iTemp * 3;
    printf("%d\n", iSum);
}

int main()
{
    Calculate();        // 得到 iSum 的平方
    Calculate();        // 得到 iSum 的立方
    return 0;
}
/********************************** Test2.c **************************************************/


#include <stdio.h>

int main()
{
    char cChar;
    cChar = 'F';
    printf("%c", cChar);
    cChar = 'i';
    printf("%c", cChar);
    cChar = 'n';
    printf("%c", cChar);
    cChar = 'e';
    printf("%c", cChar);
    cChar = 'd';
    printf("%c", cChar);
    cChar = 'a';
    printf("%c", cChar);
    cChar = 'y';
    printf("%c", cChar);
    return 0;
}



/********************************** test.c ***************************************************/


#include <stdio.h>

int main()
{
    int iNumber;
    iNumber = 345;
    printf("%d\n", iNumber);
    return 0;
}



/******************************** Complex.c **************************************************/

#include <stdio.h>

int main()
{
    int iInt = 1;
    char cChar = 'A';  // ASCII码为65
    float fFloat = 2.2f;

    double result = iInt + cChar + fFloat;

    printf("%f\n", result);
    return 0;
}



/********************************* Extern1.c  *  Extern2.c ***********************************/


/**** 两个文件同在 Extern 文件夹下 ****/


/***************** Extern1.c **********************/

#include <stdio.h>

int main()
{
    extern int iExtern;  // 定义外部整型变量。 变量原始定义在别的文件中，并初始化为 100
    printf("%d\n", iExtern);  // 显示变量值 
    return 0;  // 程序结束
}


/**************** Extern2.c ***********************/

#include <stdio.h>

int iExtern = 100;  // 定义一个整型变量，为其赋值为 100



/************************************* Register.c ********************************************/


#include <stdio.h>

int main()
{
    register int iInt;  // 定义寄存器整型变量
    iInt = 100;
    printf("%d\n", iInt);  // 显示结果 
    return 0;  // 程序结束
}



/************************************** Static.c *********************************************/


#include <stdio.h>

void AddOne()
{
    static int iInt = 1;  // 定义整型变量 
    iInt = iInt + 1;  // 变量加1
    printf("%d\n", iInt);  // 显示结果 
}

int main()
{
    printf("第一次调用：");  // 显示结果
    AddOne();  // 调用 Show 函数 , 显示2
    printf("第二次调用：");  // 显示结果
    AddOne();  // 调用 AddOne 函数，显示3。静态变量函数调用后内存空间保存
    return 0; // 程序结束
}



/*************************************** Auto.c **********************************************/


#include <stdio.h>

void AddOne()
{
    auto int iInt = 1;  // 定义整型变量 
    iInt = iInt + 1;  // 变量加1 
    printf("%d\n", iInt);  // 显示结果 
}

int main()
{
    printf("第一次调用：");  // 显示结果 
    AddOne();  // 调用 Show 函数，显示 2
    printf("第二次调用：");  // 显示结果
    AddOne();  // 调用 AddOne 函数，显示 2 或 3？？？。显示 2。 auto是隐含默认的。
    return 0;  // 程序结束 
}



/*************************************** Char.c **********************************************/


#include <stdio.h>

int main()
{
    char cChar1;  // 定义字符型变量 cChar1
    char cChar2;  // 字符型变量 cChar2 
    char iInt1;  // 定义整型变量 iInt1 
    char iInt2;  // 整型变量 iInt2 

    cChar1 = 'a';  // 为变量赋值 
    cChar2 = 97;
    iInt1 = 'a';
    iInt2 = 97;

    printf("%c\n", cChar1);  // 显示结果为 a 
    printf("%d\n", cChar2);  // 显示结果为 97      // ???
    printf("%c\n", iInt1);  // 显示结果为 a  // ???
    printf("%d\n", iInt2);  // 显示结果为 97
    return 0;  // 程序结束 
}



/************************************* LongDouble.c ******************************************/


#include <stdio.h>

int main()

{
    long double fLongDouble;  // 定义长双精度变量
    fLongDouble = 46.257;  // 为变量赋值
    printf("%f\n", fLongDouble);  // 将变量值进行输出
    return 0;  // 程序结束
}



/************************************* DoubleStyle.c *****************************************/


#include <stdio.h>

int main()
{
    double dDoubleStyle;  // 定义一个双精度(浮点)类型变量 
    dDoubleStyle = 61.458;  // 为变量进行赋值 
    printf("%f\n", dDoubleStyle);  // 显示变量值
    return 0;  // 程序结束
}



/************************************* FloatStyle.c ******************************************/


#include <stdio.h>

int main()
{
    float fFloatStyle;  // 定义单精度(浮点)类型变量
    fFloatStyle = 1.23f;  // 为变量进行赋值
    printf("%f\n", fFloatStyle);  // 输出变量的值
    return 0;  // 程序结束
}



/************************************* IntStyle.c ********************************************/


#include <stdio.h>

int main()
{
    signed int iNumber;  // 定义一个(有符号)定义整型变量
    iNumber = 10;  // 为整型变量进行赋值
    printf("%d\n", iNumber);  // 显示整型变量
    return 0;  // 程序结束
}



/************************************** circle.c *********************************************/


#include <stdio.h>
#define PAI 3.14  // 定义符号常量

int main()
{
    double fRadius;  // 定义半径变量
    double fResult=0;  // 定义结果变量
    printf("请输入圆的半径：");  // 提示 

    scanf("%lf", &fRadius);  // 输入数据

    fResult=fRadius*fRadius*PAI;  // 进行计算
    printf("圆的面积为：%lf\n", fResult);  // 显示结果
    return 0;  // 程序结束
}



// ShowChars.c
    printf("What a nice day!\n");  // 输出字符串



// ShowChar.c
    putchar('H'); // 输出字符常量H
    putchar('e'); // 输出字符常量e
    putchar('l'); // 输出字符常量l
    putchar('l'); // 输出字符常量l
    putchar('o'); // 输出字符常量o
    putchar('\n'); // 进行换行


// cubage.c
#include <stdio.h> // 包含头文件
#define Height 10 // 定义常量

int calculate(int Long, int Width); // 函数声明

int main() // 主函数
{
    int m_Long; // 定义整型变量，表示长度
    int m_Width; // 定义int型变量，表示宽度
    int result; // 定义变量，表示长方体的体积

    printf("长方体的高度为：%d\n", Height); // 显示提示

    printf("请输入长度\n"); // Show tips
    scanf("%d", &m_Long); // 输入长方体的长度

    printf("请输入宽度\n");  // 显示提示
    scanf("%d", &m_Width);  // 输入长方体的宽度

    result = calculate(m_Long, m_Width) // 调用函数，计算体积
    printf("长方体的体积是："); // 显示提示
    printf("%d\n", result);  // 输出体积大小
    return 0;  // 返回整型0
}

int calculate(int Long, int Width)  // 定义计算体积的函数
{
    int result = Long*Width*Height;  // 具体计算过程
    return result;  // 将计算的体积结果返回
}



// hello.c
#include <stdio.h>
int main()
{
    printf(“Hello,world! I’m coming!\n”); // 输出要显示的字符串
    return 0; // 程序返回
}
