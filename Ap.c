void main()
{
int add,i,last,s,n,d;
clrscr();
printf("enter any number for start value:");
scanf("%d",&s);
printf("enter how many number you want:");
scanf("%d",&n);
printf("enter any number for difference:");
scanf("%d",&d);
add=(s+(n-1)*d);
last=(n*2*s+(n-1)*d)/2;
for(i=s;i<=last;i++)
{
i=i+d;
}
printf("sum of an arithmetic progression=%d",add);
getch();
}
