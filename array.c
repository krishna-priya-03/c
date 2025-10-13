#include<stdio.h>
int main()
{
	int arr[100],n,i,pos,element,choice;
	printf("enter the number of elements in array:");
	scanf("%d", &n);
	printf("enter %d elements:\n", n);
	for(i=0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
while(1)
{
	printf("\n\n array operations menu:\n");
	printf("1. dispaly array\n");
	printf("2. insert element\n");
	printf("3.delete element\n");
	printf("4.exit\n");
	printf("enter your choice:");
	scanf("%d", &choice);
						if(choice==1)
						{
							printf("array element are:\n");
							for(i=0;i<n;i++)
							{
								printf("%d",arr[i]);
							}
							printf("\n");
						}
						else if(choice==2)
						{
							printf("enter position to insert(1 to %d):",n+1);
							scanf("%d",&pos);
							if(pos<1||pos>n+1)
							{
								printf("invalid position !\n");
							}
							else
							{
								printf("Enter element to insert:");
								scanf("%d",&element);
								for(i=n;i>=pos;i--)
								{
									arr[i]=arr[i-1];
								}
								arr[pos-1]=element;
								n++;
								printf("element inserted successfully\n");
							}
							}
							else if(choice==3)
							{
								printf("enter position to delete(1 to %d):",n);
								scanf("%d",&pos);
								if(pos<1||pos>n)
								{
									printf("invalid position!\n");
									
								}
								else{
									for(i=pos-1;i<n-1;i++)
									{
										arr[i]=arr[i+1];
										
									}
									n--;
									printf("element deleted succesfully!\n");
								}
							}
									else if(choice==4)
									{
										printf("exiting progarm..\n");
										break;
									}
									else
								{
									printf("invalid choice!please try again\n");
								}
								}
								return 0;
							}
							

