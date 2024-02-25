#include<stdio.h>
#include<math.h>
void main(){
float r,h,circ,con;
printf("enter radius and height");
scanf("%f%f",&r&h);
circ=π*r*r;
con =((π*r*r)+sqrt(r*r+h*h));
printf("area of circle %f\n",circ);
printf("area of cone %f\n",con);
}
