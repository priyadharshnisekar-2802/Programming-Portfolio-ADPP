#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main()
{
int i,a;
char ad[100],run;
char bd[100];
char cd[100];
char dd[100];
char ee[100];
char pr[100];
std::cout<<"\n *****************************************************************";
std::cout<<"\n ASSESSMENT-1  PAN CARD VALIDATION";
std::cout<<"\n******************************************************************";
std::cout<<"\n NAME:S.PRIYADHARSHINI E.NO:27548 COURSE:ADPP FACULTY:PRIYA";
std::cout<<"\n******************************************************************";
start:
std::cout<<"\n Enter first three chracters(between AAA TO AAZ):";
std::cin.getline(ad,sizeof(ad));
ad[strcspn(ad,"\n")]='\0';
if(strlen(ad)==0)
{
std::cout<<"\n Null input is not accepted";
goto start;
}
if(strlen(ad)!=3)
{
std::cout<<"\n Enter only three characters";
goto start;
}
if((ad[0]=='a'||ad[0]=='A')&&(ad[1]=='a'||ad[1]=='A')&&isalpha(ad[2]))
{
}
else
{
std::cout<<"\n Input other than given example should not be accepted";
goto start;
}
mid:
std::cout<<"\n Enter the type of user(BETWEEN 1 TO 10):";
std::cin.getline(bd,sizeof(bd));
bd[strcspn(bd,"\n")]='\0';
if(strlen(bd)==0)
{
std::cout<<"\n Null input is not accepted";
goto mid;
}
for(i=0;i<strlen(bd);i++)
a=atoi(bd);
{
if(a<1||a>10)
{
std::cout<<"\n Enter digts only between 1 to 10";
goto mid;
}
else
{
switch(a)
{
case 1:
strcpy(bd,"P");
break;
case 2:
strcpy(bd,"C");
break;
case 3:
strcpy(bd,"H");
break;
case 4:
strcpy(bd,"A");
break;
case 5:
strcpy(bd,"B");
break;
case 6:
strcpy(bd,"G");
break;
case 7:
strcpy(bd,"J");
break;
case 8:
strcpy(bd,"L");
break;
case 9:
strcpy(bd,"F");
break;
case 10:
strcpy(bd,"T");
break;
}
}
center:
std::cout<<"\n Enter your name:";
std::cin.getline(cd,sizeof(cd));
cd[strcspn(cd,"\n")]='\0';
if(strlen(cd)==0)
{
std::cout<<"\n Null input is not accepted";
goto center;
}
for(i=0;i<strlen(cd);i++)
{
if(isalpha(cd[i]))
{
}
else
{
std::cout<<"\n Alpha numeric inputs are not accepted";
goto center;
}
}
num:
std::cout<<"\nEnter your pan card number(ANY 4 DIGIT NUMBER BETWEEN 0001 TO 9999):";
std::cin.getline(dd,sizeof(dd));
dd[strcspn(dd,"\n")]='\0';
if(strlen(dd)==0)
{
std::cout<<"\n Null input is not accepted";
goto num;
}
for(i=0;i<strlen(dd);i++)
{
if(strlen(dd)==4&&isdigit(dd[i]))
{
}
else
{
std::cout<<"\n Input must be between 0001 to 9999";
goto num;
}
}
end:
std::cout<<"\nEnter last character of your PAN card(A TO Z):";
std::cin.getline(ee,sizeof(ee));
ee[strcspn(ee,"\n")]='\0';
if(strlen(ee)==0)
{
std::cout<<"\n Null input is not accepted";
goto end;
}
for(i=0;i<strlen(ee);i++)
{
if(isalpha(ee[i])&&isupper(ee[i]))
{
}
else
{
std::cout<<"\n Input must be between A TO Z";
goto end;
}
}
if(strlen(ee)==1)
{
}
else
{
std::cout<<"Only one character is allowed";
goto end;
}
std::cout<<"\n\t\t\t\t PAN Card Number Validation ";
std::cout<<"\nEntered PAN Card Number"<<ad<<bd<<cd[0]<<dd<<ee<<" Is Valid";
run:
std::cout<<"\n do you want to run again the program(Y/N):";
std::cin.getline(pr,sizeof(pr));
pr[strcspn(pr,"\n")]='\0';
if(strlen(pr)==0)
{
std::cout<<"\n null input is not accepted";
goto run;
}
if(strlen(pr)>1)
{
std::cout<<"\nEnter only y or n";
goto run;
}
if(pr[0]=='y'||(pr[0]=='Y'))
{
goto start;
}
else if(pr[0]=='n'||(pr[0]=='N'))
{
std::cout<<"\n PROGRAM OVER!!";
std::cout<<"\n*******************************************************************";
}
else
{
std::cout<<"\n Enter only y or n";
goto run;
}
getch();
return 0;
}
}
