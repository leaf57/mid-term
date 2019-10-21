#include<stdio.h>
double average(double in1,double in2);

int main(){
  double in1,in2,aver=0.0;
  scanf("%lf %lf",&in1,&in2);
  aver = average(in1,in2);
  printf("average is %lf\n",aver);

  return 0;
}

double average(double in1,double in2){
  return (in1+in2)/2;
}
