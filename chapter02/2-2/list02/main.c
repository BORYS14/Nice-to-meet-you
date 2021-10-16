#include<stdio.h>

int main()
{
    int i1,i2,i3,i4,x,y,z,r;
    double d1,d2,d3,d4,a,b,c,p,q,s;

    i1 = 2; i2 = 2; i3 = 5; i4 = 5;
    d1 = 2; d2 = 2; d3 = 5; d4 = 5;

    x = i1/i2;// x=1 int/int为int,留整去余。
    y = i3/i1;// y=2 
    z = i3/i4;// z=1
    a = d1/d2;// a=1.000000    double/double为double
    b = d3/d1;// b=2.500000
    c = d3/d4;// c=1.000000
    p = i1/d1;//   p=1.000000
    q = i3/d1;//*  q=2.500000
    i1 = i3/d1;//* i1=0.000000
    i2 = i3/d1;//* i2=2                 注意不同类型相对应的格式化
    r = 5/2.0;//  r=2            运算对象，即操作数的类型不同时，较小的数据类型的
    s = 5/2.0;//  s=2.500000     操作数会转换为较大的数据类型（范围更大），然后再
                               //进行运算。    int取整 
    printf("x=%d\n",x);
    printf("y=%d\n",y);
    printf("z=%d\n",z);
    printf("a=%f\n",a);
    printf("b=%f\n",b);
    printf("c=%f\n",c);
    printf("p=%f\n",p);
    printf("q=%f\n",q);
    printf("i1=%f\n",i1);
    printf("i2=%d\n",i2);
    printf("r=%d\n",r);
    printf("s=%f\n",s);
    
    return 0;
}