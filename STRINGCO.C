#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,c,sum=0,sum1=0;
	char p[100],q[100];
        clrscr();
	printf("Enter p strings:\n");
	gets(p);
        for(i=0;i<=p[i];i++)
        {
        	printf("Ascii value of %c=%d\n",p[i],p[i]);
        }
        for(i=0;i<=p[i];i++)
        {
        sum=sum+p[i];
	}
	printf("\nSum is %d\n",sum);

	printf("\nEnter q strings:\n");
	gets(q);
        for(i=0;i<=q[i];i++)
        {
		printf("\nAscii value of %c=%d",q[i],q[i]);
        }
        for(i=0;i<=q[i];i++)
        {
        sum1=sum1+q[i];
	}
	printf("\nSum is %d\n",sum1);
	c=sum1-sum;
        printf("\nExtra character found is %d=%c\n",c,c);
        getch();
}