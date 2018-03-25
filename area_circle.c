#include<stdio.h>
/* Area of a circle */
# define PI 3.142
int main()
{
 float area,radius;
 float my_func(float radius);

 printf("enter a radius for the circle ");
 scanf("\n %f",&radius); 
 area =my_func(radius);
 printf("\n Area is %f \n",area);
 return 0;
}
float my_func(float r)
{
float a;
a=PI * r*r;
return a;
}

