#include<stdio.h>
void main()
{
float a, b,x,m1,m2,hrsa,hrsb;
float seca,secb;
FILE *fp = fopen("/proc/uptime", "r");
fscanf(fp, "%f %f", &a, &b);
seca=(a)%60;
m1=seca/60;
hrsa=m1/60;
secb=(b)%60;
m2=secb/60;
hrsb=m2/60;
printf("Uptime=%f hrs %f m %f sec",hrsa,m1,seca);
printf("Idealtime =%f hrs %f m %f sec",hrsb,m2,secb);
return 0;
}
