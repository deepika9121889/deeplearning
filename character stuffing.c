#include<stdio.h>
#include<string.h>
 main()
{
	char a[30],fs[50]=" ",t[3],sd,x[3],s[3],ed[3],d[3],y[3];
	int i,j,p=0,q=0;
	printf("enter the character to be stuffed:");
	scanf("%s",&a);
	printf("enter the starting delimeter:");
	scanf("%c",&sd);
	printf("enter the ending delimeter:");
	scanf("%c",&ed);
	x[0]=s[0];
	s[1]=sd;
	x[1]=s[2]="0";
	y[0]=d[0]=d[1]=ed;
	d[2]=y[1]="0";
	strcat(fs,x);
	for(i=0;i<strlen(a);i++)
	{
		t[0]=a[i];
		t[1]="0";
		if(t[0]==ed)
			strcat(fs,d);
		else
			strcat(fs,y);
		printf("After stuffing:%s",fs);
		getch();
	}
}