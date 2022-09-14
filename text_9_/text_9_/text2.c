#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//int main()
//{
//	int a=0;
//	int b=1;
//	int n=0;
//	int c=0;
//	scanf("%d",&n);
//	for(a=1;a<=n;a++)
//	{
//		b=b*a;
//		c=b+c;
//
//	}
//	printf("阶乘为%d\n",b);
//	printf("阶乘和为%d\n",c);
//
//	return 0;
////}
//int main()
//{
//	int left=0;
//	int mid=0;
//	int arr1[]={1,2,3,4,5,6,7,8,9,10};
//	int right=sizeof(arr1)/sizeof(arr1[0])-1;
//	int k=0;
//	scanf("%d",&k);
//	while(left<=right)
//	{
//		mid=(left+right)/2;
//	
//		if(arr1[mid]>k)
//			right=mid-1;
//		else if(arr1[mid]<k)
//			left=mid+1;
//		else
//			break;}
//	printf("%d\n",mid);
//	    
//		return 0;
//
//
		
		

//
//}
//void game()
//{
//	
//	int b=0;
//	int c=0;
//	srand((unsigned int)time(NULL));
//	b=rand()%100;
//	printf("请输入数字\n");
//	
//	while(1)
//	
//	{
//	scanf("%d",&c);
//	if(c>b)
//	{
//		printf("猜大了\n");
//	}
//	else if(c<b)
//	{
//		printf("猜小了\n");
//	}
//	else
//	{
//		printf("恭喜你猜对了\n");
//	 break;
//	}
//	}
//	}
//
//int main()
//{
//	int a=0;
//	printf("###########猜数字游戏##########\n");
//	printf("###############################\n");
//	printf("#########1.游玩 0.退出.########\n");
//	printf("###############################\n");
//	scanf("%d",&a);
//	do
//	{
//	switch(a)
//	{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			break;
//	}
//	if(a==0)
//	{
//		break;
//	}
//	printf("是否再玩一次?->1/0\n");
//	scanf("%d",&a);
//}
//	while(a);	
//	return 0;
//}
//int main()
//{
//	int i=1;
//	int j=1;
//	for(i=1;i<=9;i++)
//		
//		{for(j=1;j<=i;j++)
//			{
//				printf("%d*%d=%-2d ",i,j,i*j);
//		}
//	printf("\n");}
//				return 0;
//}
//void move(char pos1,char pos2)
//{
//	printf("%c->%c ",pos1,pos2);
//}
//void hanoi(int n,char pos1,char pos2,char pos3)
//{
//	if(n==1)
//{
//	move(pos1,pos3);
//}
//else
//{
//	hanoi(n-1,pos1,pos3,pos2);
//	move(pos1,pos3);
//	hanoi(n-1,pos2,pos1,pos3);
//
//}
//}
//
//int main()
//{
//	
//	hanoi(15,'A','B','C');
//
//}