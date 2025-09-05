#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void main()
{
int i,month,year,salary;
float HRA,TA,PF,ESI,net;
char a1[30],a2[30],a3[30],a4[30],a5[30],sky[10],mon[100];
first:
printf("\n************************************************************************");
printf("\n                       ASSESSMENT-1");
printf("\n************************************************************************");
printf("\n                       PAY SLIP FOR AN EMPLOYEE");
printf("\n************************************************************************");
printf("\n  NAME:S.PRIYADHARSHINI  EINO:27548  COURSE:ADPP  FACULTY:MAHAJOTHI");
printf("\n************************************************************************");
aa:
printf("\n ENTER THE EMPLOYEE NAME:");
fgets(a1,sizeof(a1),stdin);
a1[strcspn(a1,"\n")]='\0';
if(strlen(a1)==0)
{
printf("\n NULL INPUT IS NOT ACCEPTED");
goto aa;
}
if(strlen(a1)>=25)
{
printf("\n ENTER A NAME NOT MORE THAN 25 CHARACTERS");
goto aa;
}
for(i=0;i<strlen(a1);i++)
{
if(isalpha(a1[i])|| isspace(a1[i]))
{
}
else
{
printf("\n ENTER ONLY CHARACTER");
goto aa;
}
}
bb:
printf("\n ENTER THE MONTH:");
fgets(mon,sizeof(mon),stdin);
mon[strcspn(mon,"\n")]='\0';
if(strlen(mon)==0)
{
printf("\n NULL INPUT IS NOT ACCEPTED");
goto bb;
}
for(i=0;i<strlen(mon);i++)
{
if(isdigit(mon[i]))
{
}
else
{
printf("\n ENTER ONLY INTEGER");
goto bb;
}
(month=atoi(mon));
if(month<12 || month>1)
{
}
else
{
printf("ENTER MONTH  ONLY BETWEEN 1 TO 12");
goto bb;
}
}
switch(month)
{
case 1:
strcpy(mon,"January");
break;
case 2:
strcpy(mon,"February");
break;
case 3:
strcpy(mon,"March");
break;
case 4:
strcpy(mon,"April");
break;
case 5:
strcpy(mon,"May");
break;
case 6:
strcpy(mon,"June");
break;
case 7:
strcpy(mon,"July");
break;
case 8:
strcpy(mon,"August");
break;
case 9:
strcpy(mon,"September");
break;
case 10:
strcpy(mon,"October");
break;
case 11:
strcpy(mon,"November");
break;
case 12:
strcpy(mon,"December");
break;
}
cc:
printf("\n ENTER YEAR EITHER 2019 0R 2020:");
fgets(a3,sizeof(a3),stdin);
a3[strcspn(a3,"\n")]='\0';
if(strlen(a3)==0)
{
printf("\n NULL INPUT IS NOT ACCEPTED");
goto cc;
}
for(i=0;i<strlen(a3);i++)
{
if(isdigit(a3[i]))
{
}
else
{
printf("\n ENTER ONLY INTEGER");
goto cc;
}
}
year=atoi(a3);
if(year==2019||year==2020)
{
}
else
{
printf("\n ENTER  EITHER 2019 OR 2020");
goto cc;
}
dd:
printf("\n ENTER BASIC SALARY (RS.):");
fgets(a4,sizeof(a4),stdin);
a4[strcspn(a4,"\n")]='\0';
if(strlen(a4)==0)
{
printf("\n NULL INPUT IS NOT ACCEPTED");
goto dd;
}
for(i=0;i<strlen(a4);i++)
{
if(isdigit(a4[i]))
{
}
else
{
printf("\n ENTER ONLY INTEGER");
goto dd;
}
}
salary=atoi(a4);
if(salary<=10000)
{
HRA=salary*0.20;
TA=salary*0.05;
PF=salary*0.10;
ESI=salary*0.12;
}
else if(salary>10000&&salary<=25000)
{
HRA=salary*0.25;
TA=salary* 0.5;
PF=salary* 0.10;
ESI=salary* 0.15;
}
else if(salary>25000)
{
HRA=salary*0.30;
TA=salary*0.5;
PF=salary*0.10;
ESI=salary*0.18;
}
net=salary+HRA+TA-PF-ESI;
printf("\n EMPLOYEE NAME : %s",a1);
printf("\n MONTH,YEAR: %s,%s",mon,a3);
printf("\n SALARY AMOUNT: %d",salary);
printf("\n ALLOWANCES:");
printf("\n  HRA :%.f",HRA);
printf("\n  TA:%.f ",TA);
printf("\n DEDUCTIONS");
printf("\n -PF:%.f ",PF);
printf("\n -ESI:%.f ",ESI);
printf("\n NET SALARY:%.f",net);
run:
printf("\n DO YOU WANT TO RUN THE PROGRAM AGAIN (Y/N):");
fgets(a1,sizeof(a1),stdin);
if(sky[0]== 'Y'|| sky[0]=='y')
{
goto first;
}
else if(sky[0]=='N'|| sky[0]=='n')
{
printf("\n********************************************************************************************");
printf("\n PROGRAM ENDED SUCCESSFULLY");
printf("\n********************************************************************************************");
}
else
{
printf("\n ENTER ONLY Y OR N");
goto run;
}
getch();
}
