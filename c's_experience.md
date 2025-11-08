# 打过的c语言

```c
#include <stdio.h>
 
#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'
 
int main()
{
 
   int area;  
  
   area = LENGTH * WIDTH;
   printf("value of area : %d", area);
   printf("%c", NEWLINE);
 
   return 0;
}
```

首先保存，然后点击右上角三角形，点击运行，不要调试，不然无法运行

```c

#include <stdio.h>
double cylinder(double r,double h);/*cylinder:圆柱体*/
int main(void){

double height,radius,volume;/*radius：半径，height：高度，volume：体积*/

    printf("Enter radius and height:");
    scanf("%lf %lf",&radius,&height);
    volume=cylinder(radius,height);
    printf("volume=%.3f\n",volume);

    return 0;

}
double cylinder(double r,double h){
    double result;
    result=3.1415926*r*r*h;
    return result;

}

```

“the area of the Pentagon is -nan (ind)” 这句话表示 “五边形的面积为 -nan (ind)”，这是一个异常的计算结果，并非合理的面积数值。
其中，“nan” 是 “Not a Number” 的缩写，在编程、数学计算场景中常用来表示 “非数字”，特指因数据错误、公式误用等导致无法定义或无法表示的数值；“ind” 通常是 “indeterminate” 的缩写，意为 “不确定的”，整体 “-nan (ind)” 即 “不确定的非数字”，说明面积计算过程出现了问题，而非五边形存在一个 “-nan (ind)” 这样的面积。
为什么会出现这种结果？
可能导致该异常的常见原因包括：
输入数据错误：比如计算时输入的五边形参数（如边长、apothem（边心距）、外接圆半径等）为负数、空值，或与公式要求的参数类型不匹配（例如用文本代替数字）。
公式使用不当：例如计算正五边形面积时，误用了仅适用于不规则五边形的拆分公式，或公式中出现分母为 0、根号下为负数等数学上无意义的运算。

```c
#include<stdio.h>
#include<math.h>
int main(){
    double a1,a2,a3,a4,a5,a6,a7,s;
    double area(double x,double y,double z);
    printf("Please input the lengths in the order a1 to a7:\n");/*order:次序     */
    scanf("%lf%lf%lf%lf%lf%lf%lf",&a1,&a2,&a3,&a4,&a5,&a6,&a7);
    s=area(a1,a5,a6)+area(a6,a7,a4)+area(a2,a7,a3);
    printf("the area of the Pentagon is %.2f\n",s);/*pentagon:五边形*/

    return 0;
}
double area(double x,double y,double z){
    double p=(x+y+z)/2;
    return sqrt(p*(p-x)*(p-y)*(p-z));

}

```

* 解三角形面积函数模板

```c
double area(double x,double y,double z){
   double p=(x+y+z)/2;
   return sqrt(p*(p-x)*(p-y)*(p-z));
}

判断完全平方数：从1开始的连续奇数的和，是一个完全平方数

三元运算符的语法
condition ? expression1 : expression2
条件 ？ 表达式1：表达式2
如果条件为真，则执行表达式1，并返回表达式1的结果，如果为假就执行并返回表达式2的结果
