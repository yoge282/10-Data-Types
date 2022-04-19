#include<stdio.h>
int main()
{
 int a=2,z=5;
 char b='K';
 float c=3.56,d= 8.9;
 double e=789.25 , f=745.62;
 short int g=16546,h=6458;// short int ranges from -32768 to 32767
 long int i=784456321,j=2147895;// ranges from -2147483647 to 2147483647
 unsigned int k=3249785,l=2345896; //unsigned int ranges from 0 to 4294967295
 unsigned short int m=13644,n=42859;// unsigned short ranges from 0 to 65535
 long long int o=348794,p=748136;//unsigned long int ranges from 0 to 18446744073709551615
 unsigned char q='D';
 printf("%d\n",a+z);// int
 printf("%c\n",b); // char
 printf("%.2f\n",c+d); // float
 printf("%.2f\n",e+f); // double
 printf("%d\n",g+h); //short int
 printf("%d\n",i+j); // long int
 printf("%d\n",k+l); // unsigned int
 printf("%d\n",m+n); //unsigned short int
 printf("%d\n",o+p); //long long int
 printf("%c\n",q); //unsigned char
 return 0;
 }