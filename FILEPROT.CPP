#include<stdio.h>
#include<io.h>
#include<sys\stat.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int i,test;
char ch,FN[50];
char s[]={"#FILE FOLDER PROTECTION SOFTWARE!"};
clrscr();
gotoxy(14,5);
textcolor(2);
cprintf("________________________________________________________");
gotoxy(14,6);
cprintf("________________________________________________________");
gotoxy(14,10);
cprintf("________________________________________________________");
gotoxy(18,8);
textcolor(10);
for(i=0;s[i]!='\0';i++)
{
_setcursortype(2);
cprintf("%c",s[i]);
delay(50);
sound(2500);
delay(2);
nosound();

}
textcolor(2);
gotoxy(22,12);
cprintf("1:HIDE A FILE FOLDER");
gotoxy(22,14);
cprintf("2:SHOW A FILE FOLDER");
gotoxy(22,16);
cprintf("3:HELP");

gotoxy(10,24);
cprintf("DESIGNED & DEVELOPED BY KEWLA TECHNOLOGY 2018");
gotoxy(16,18);
cprintf("ENTER YOUR CHOICE:->>");
ch=getch();
sound(1000);
delay(50);
nosound();

if(ch==27)
{
exit(1);
}
switch(ch)
{
case '1':clrscr();
	gotoxy(15,6);
	textcolor(2);
	cprintf("____________________________________________________");
	gotoxy(15,7);
	cprintf("_____________________________________________________");
	gotoxy(17,12);
	cprintf("_____________________________________________________");
	gotoxy(17,9);
	cprintf("ENTER FILE LOCATION /FOLDER NAME WITH  CORRECT PATH");
	gotoxy(17,11);
	cprintf("$:");
	fflush(stdin);
	gets(FN);
	test=_chmod(FN,1,FA_SYSTEM | FA_HIDDEN | FA_RDONLY);
	if(test==-1)
	{
	clrscr();
	gotoxy(19,9);
	sound(1000);
	delay(50);
	cprintf("Unable to execute operation");
	}
	else
	{
	clrscr();
	gotoxy(19,9);
	cprintf("Operation executed successfully");
	}
	nosound();




	break;
case '2':
	clrscr();
	gotoxy(15,6);
	textcolor(2);
	cprintf("____________________________________________________");
	gotoxy(15,7);
	cprintf("_____________________________________________________");
	gotoxy(17,12);
	cprintf("_____________________________________________________");
	gotoxy(17,9);
	cprintf("ENTER FILE LOCATION /FOLDER NAME WITH  CORRECT PATH");
	gotoxy(17,11);
	cprintf("$:");
	fflush(stdin);
	gets(FN);
	test=_chmod(FN,1,0);
	if(test==-1)
	{
	clrscr();
	gotoxy(19,9);
	sound(1000);
	delay(50);
	cprintf("Unable to show file");
	}
	else
	{
	clrscr();
	gotoxy(19,9);
	cprintf("file is succesfully unlocked");
	}
	nosound();
	break;
case '3':
	clrscr();
	gotoxy(15,6);
	textcolor(2);
	cprintf("____________________________________________________");
	gotoxy(15,7);
	cprintf("_____________________________________________________");
	gotoxy(17,17);
	cprintf("_____________________________________________________");
	gotoxy(17,9);
	cprintf("_______________________________HELP___________________");
	gotoxy(17,11);
	cprintf("ENTER PATH OF YOUR FILE  CORRECTLY");
	gotoxy(17,12);
	cprintf("Example if your file is in drive D");
	gotoxy(20,13);
	cprintf("Then type D:\ file_name");
	gotoxy(17,15);
	cprintf("-Providing file extension is compulsory");
	fflush(stdin);



}

getch();
}
