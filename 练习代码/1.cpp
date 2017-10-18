#include<stdio.h>
typedef struct{
		float real;
		float imag;
}Complex;
Complex creat(float x,float y);
Complex add(Complex z1,Complex z2);
Complex creat(float x,float y)
{
	Complex z;
	z.real=x;
	z.imag=y;
	return(z);
}
Complex add(Complex z1,complex z2)
{
	Complex sum;
	sum.real=z1.real +z2.real;
	sum.imag=z1.imag +z2.imag;
	return(sum);
} 

main()
{
	float a,b;
	Complex c1,c2,c3;
	printf("\n\n\n  Input real and imag:");
	scanf("%f%f%f",&a,&b);
	c1=creat(a,b);
	printf("\n\n\n  Input real and imag");
	scanf("%f%f",&a,&b);
	c2=creat(a,b);
	c3=add(c1,c2);
	printf("\n\n c1==%f+%f i",c1.real ,c1.imag );
	printf("\n\n c2==%f+%f i",c2.real ,c2.imag );
	printf("\n\n c3==c1+c2==%f+%f i",c3.real ,c3.imag );
}
