```c
#include <stdio.h>

int main()
{
 printf("Hello,world! I'm coming!\n");
 return 0;
}
```
```c
#include <stdio.h>
#define Height 10
int calculate(int Long, int Width);
int main()
{
 int m_Long;
 int m_iWidth;
 int result;
 
 printf("the height of changFangTi is: %d\n", Height);
 printf("input the Long and Width Using , \n");
 scanf("%d,%d",&m_Long,&m_iWidth);
 
 result = calculate(m_Long, m_iWidth);
 printf("the volume of changFangTi is: ");
 printf("%d\n",result);
 return 0;
}

int calculate(int Long, int Width)
{
 int result = Long*Width*Height;
 return result;
}
```
 
