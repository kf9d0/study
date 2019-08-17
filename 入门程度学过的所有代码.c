// Expression.c
#include<stdio.h>

int main()
{
	int iNumber1,iNumber2,iNumber3;			/*声明变量*/
	iNumber1=3;								/*为变量赋值*/
	iNumber2=7;
			
	printf("the first number is :%d\n",iNumber1);/*显示变量值*/
	printf("the second number is :%d\n",iNumber2);

	iNumber3=iNumber1+10;					/*表达式中利用变量iNumber1加上一个常量*/
	printf("the first number add 10 is :%d\n",iNumber3);/*显示iNumber3的值*/
				
	iNumber3=iNumber2+10;					/*表达式中利用变量iNumber2加上一个常量*/
	printf("the second number add 10 is :%d\n",iNumber3);/*显示iNumber3的值*/

	iNumber3=iNumber1+iNumber2;				/*表达式中是两个变量进行计算*/
	printf("the result number of first add second is :%d\n",iNumber3);/*将计算结果输出*/

	return 0; /*程序结束*/
}



// test4.cpp
#include<stdio.h>

int main()
{
	extern char cChar;
	printf("%c\n",cChar);
	return 0;
}
// test41.cpp
char cChar='A';



// test3.c
#include<stdio.h>

void Caculate()
{
	static int iSum=3;
	int iTemp;
	iTemp=iSum;				//iSum是静态变量
	iSum=iTemp*3;
	printf("%d\n",iSum);
}
int main()
{
	Caculate();	//得到iSum的平方
	Caculate();	//得到iSum的立方
	return 0;
}



// Test2.c
	char cChar;
	cChar='F';
	printf("%c",cChar);
	cChar='i';
	printf("%c",cChar);
	cChar='n';
	printf("%c",cChar);
	cChar='e';
	printf("%c",cChar);
	cChar='D';
	printf("%c",cChar);
	cChar='a';
	printf("%c",cChar);
	cChar='y';
	printf("%c\n",cChar);



// test.c
	int iNumber;
	iNumber=345;
	printf("%d\n",iNumber);



// Complex.c
	int   iInt=1;					/*定义整型变量*/
	char  cChar='A';				/*ASCII码为65*/
	float fFloat=2.2f;				/*定义单精度型变量整型变量*/

	double result=iInt+cChar+fFloat;	/*得到相加的结果*/

	printf("%f\n",result);			/*显示变量值*/



// Extern2.c
/*///////////////////////////////////////////////////////////////*/
/*					在Extern2文件中								 */
/*///////////////////////////////////////////////////////////////*/

#include<stdio.h>

int iExtern=100;  /*定义一个整型变量，为其赋值为100*/

// Extern1.c
/*///////////////////////////////////////////////////////////////*/
/*					在Extern1文件中								 */
/*///////////////////////////////////////////////////////////////*/
#include<stdio.h>

int main()
{
	extern int iExtern;				/*定义外部整型变量*/
	printf("%d\n",iExtern);			/*显示变量值*/
	return 0;						/*程序结束*/
}



// Register.c
#include<stdio.h>

int main()
{
	register int iInt;				/*定义寄存器整型变量*/
	iInt = 100;
	printf("%d\n",iInt);			/*显示结果*/
	return 0;			/*程序结束*/
}



// Static.c
#include<stdio.h>

void AddOne()
{
	static int iInt=1;				/*定义整型变量*/
	iInt=iInt+1;					/*变量加1*/
	printf("%d\n",iInt);			/*显示结果*/
}
int main()
{
	printf("第一次调用：");			/*显示结果*/
	AddOne();				/*调用Show函数*/
	printf("第二次调用：");			/*显示结果*/
	AddOne();				/*调用Show函数*/
	return 0;			/*程序结束*/
}



// Auto.c
#include<stdio.h>

void AddOne()
{
	auto int iInt=1;				/*定义整型变量*/
	iInt=iInt+1;					/*变量加1*/
	printf("%d\n",iInt);			/*显示结果*/
}
int main()
{
	printf("第一次调用：");			/*显示结果*/
	AddOne();				/*调用Show函数*/
	printf("第二次调用：");			/*显示结果*/
	AddOne();				/*调用Show函数*/
	return 0;			/*程序结束*/
}



// Char.c
	char cChar1;						/*字符型变量cChar1*/
	char cChar2;						/*字符型变量cChar2*/
	int	 iInt1;						/*整型变量iInt1*/
	int 	 iInt2;						/*整型变量iInt1*/

	cChar1='a';						/*为变量赋值*/
	cChar2=97;						
	iInt1='a';
	iInt2=97;

	printf("%c\n",cChar1);				/*显示结果为a*/
	printf("%d\n",cChar2);				/*显示结果为97*/
	printf("%c\n",iInt1);					/*显示结果为a*/
	printf("%d\n",iInt2);					/*显示结果为97*/



// LongDouble.c
	long double fLongDouble;		/*定义长双精度变量*/
	fLongDouble=46.257;				/*为变量赋值*/
	printf("%f\n",fLongDouble);		/*将变量值进行输出*/



// DoubleStyle.c
	double dDoubleStyle;		/*定义一个双精度类型变量*/
	dDoubleStyle=61.458;		/*为变量赋值*/
	printf("%f\n",dDoubleStyle);	/*显示变量值*/



// FloatStyle.c
	float fFloatStyle;			/*定义单精度类型变量*/
	fFloatStyle=1.23f;			/*为变量进行赋值*/
	printf("%f\n",fFloatStyle);	/*输出变量的值*/



// IntStyle.c
	signed int iNumber;	/*定义一个整型变量*/
	iNumber=10;			/*为整型变量进行赋值*/
	printf("%d\n",iNumber);	/*显示整型变量*/



// circle.c
#include<stdio.h>
#define PAI 3.14				/*定义符号常量*/

	double fRadius;				/*定义半径变量*/
	double fResult=0;			/*结果变量*/
	printf("请输入圆的半径:");	

	scanf("%lf",&fRadius);		/*输入数据*/

	fResult=fRadius*fRadius*PAI;	/*进行计算*/
	printf("圆的面积为：%lf\n",fResult);/*显示结果*/



// ShowChars.c
	printf("What a nice day!\n");	/*输出字符串*/
	return 0;						/*程序结束*/



// ShowChar.c
	putchar('H');		/*输出字符常量H*/
	putchar('e');		
	putchar('l');		
	putchar('l');		
	putchar('o');		
	putchar('\n');		/*进行换行*/



//cubage.c
#include<stdio.h>						/*包含头文件*/
#define Height 10						/*定义常量*/

int calculate(int Long, int Width);		/*函数声明*/

int main()								/*主函数main*/
{
	int m_Long;							/*定义整形变量，表示长度*/
	int m_Width;						/*表示宽度*/
	int result;							/*表示长方体的体积*/


	printf("长方形的高度为：%d\n",Height);				
	
	printf("请输入长度\n");				
	scanf("%d",&m_Long);				/*输入长方体的长度*/

	printf("请输入宽度\n");				
	scanf("%d",&m_Width);				/*输入长方体的宽度*/

	result=calculate(m_Long,m_Width);	/*调用函数，计算体积*/
	printf("长方体的体积是：");			
	printf("%d\n",result);				/*输出体积大小*/
	return 0;							/*返回整形0*/
}

int calculate(int Long, int Width)		/*定义计算体积函数*/
{
	int result =Long*Width*Height;		/*具体计算体积*/
	return result;						/*将计算的体积结果返回*/
}



// hello.c
#include"stdio.h"
int main()
{
	printf("Hello,world! I'm coming!\n");/*输出要显示的字符串*/
	return 0;	/*程序返回0*/
}
