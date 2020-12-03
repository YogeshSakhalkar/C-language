#include<stdio.h>
#include<string.h>

typedef struct players
{
	char player_name[25];
	int no_of_matches;
	int runs;
	int wickets;
}player;

void store_detail(player *,int);
void print_detail(player *,int);
void most_wickets_and_runs(player *,int);
void main()
{
	player arr[5];
	store_detail(arr,5);
	print_detail(arr,5);
	most_wickets_and_runs(arr,5);
}

void store_detail(player *arr,int input)
{
	int i;
	for(i=1;i<=input;i++)
	{
		printf("Enter the %d player name :\n ",i);
		scanf("%s",&arr[i].player_name);
		printf("\nEnter the no of matches played :\n");
		scanf("%d",&arr[i].no_of_matches);
		printf("\nEnter the runs scored :\n");
		scanf("%d",&arr[i].runs);
		printf("\nEnter the total no of wickets taken :\n");
		scanf("%d",&arr[i].wickets);
		printf("\n\n");
	}
}

void print_detail(player *arr,int input)
{
	int i;
	for(i=1;i<=input;i++)
	{
		printf("\n The matches played are : %d",arr[i].no_of_matches);
		printf("\n The player name is : %s",arr[i].player_name);
		printf("\n The total runs scored is : %d",arr[i].runs);
		printf("\n The total wickets are : %d",arr[i].wickets);
		printf("\n\n\n");
	}
}

void most_wickets_and_runs(player *arr,int input)
{
	int most_runs;
	int most_wickets;
	int i,index,index1;
	most_runs=arr[1].runs;
	most_wickets=arr[1].wickets;
	
	for(i=2;i<=input;i++)
	{
		if(most_runs<arr[i].runs)
		{
			most_runs=arr[i].runs;
			index=i;
		}
		if(most_wickets<arr[i].wickets)
		{
			most_wickets=arr[i].wickets;
			index1=i;
		}
	}
		printf("\nThe most runs scored is %d\n",most_runs);
		printf("\nThe details of player which scored most runs are: \n");
		printf("\n The matches played are : %d",arr[index].no_of_matches);
		printf("\n The player name is : %s",arr[index].player_name);
		printf("\n The total runs scored is : %d",arr[index].runs);
		printf("\n The total wickets are : %d",arr[index].wickets);
		printf("\n\n");

		printf("\nThe most wickets is %d",most_wickets);
		printf("\nThe details of player which have taken most wickets are: \n");
		printf("\n The matches played are : %d",arr[index1].no_of_matches);
		printf("\n The player name is : %s",arr[index1].player_name);
		printf("\n The total runs scored is : %d",arr[index1].runs);
		printf("\n The total wickets are : %d",arr[index1].wickets);
		printf("\n\n\n");
}

/*	p1.no_of_matches=10;
	strcpy(p1,"sachin");
	p1.runs=567;
	p1.wickets=10;*/
