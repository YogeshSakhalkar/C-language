#include<stdio.h>
#include<string.h>
struct Player
{
	char name[25];
	int no_of_matches_played;
	int runs;
	int wickets;
};
void Store_Player_Detail(struct player*,int);
void Print_Player_Detail(struct Player*,int);
void max_runs_and_wickets(struct Player*,int);
void main()
{
	
	struct Player Sp[4];
	Store_Player_Detail(Sp,4);
	Print_Player_Detail(Sp,4);
	max_runs_and_wickets(Sp,4);
}

void Store_Player_Detail(struct player* single_player,int input)
{
	int i=0,j=1;
	for(i=0;i<input;i++)
	{
	printf("\nEnter the name of %d player :\n",j);
		scanf("%s",&single_player[i].name);
	printf("\nEnter no of matches played :\n");
		scanf("%d",&single_player[i].no_of_matches_played);
	printf("\nEnter the runs scored :\n");
		scanf("%d",&single_player[i].runs);
	printf("\nEnter the no of wickets taken :\n");
		scanf("%d",&single_player[i].wickets);
		j++;
	}	
}

void Print_Player_Detail(struct Player* single_player,int input)
{
	int i=0,j=1;
	for(i=0;i<input;i++)
	{
	printf("\nEnter the name of %d player :%s\n",j,single_player[i].name);
		
	printf("\nEnter no of matches played :%d\n",single_player[i].no_of_matches_played);
	
	printf("\nEnter the runs scored :%d\n",single_player[i].runs);
		
	printf("\nEnter the no of wickets taken :%d\n",single_player[i].wickets);
	j++;
	
	}	

}

void max_runs_and_wickets(struct Player* single_player,int input)
{

	char name1[25];
	char name[25];
	int no_of_matches_played;
	int runs;
	int wickets;
	int no_of_matches_played1;
	int runs1;
	int wickets1;
	int max_runs=0,max_wickets=0,i;
		for(i=0;i<1;i++)
	{
		if(max_runs>single_player[i].runs)
		{
			no_of_matches_played=single_player[i].no_of_matches_played;
			max_runs=single_player[i].runs;
			wickets=single_player[i].wickets;
			strcpy(name,single_player[i].name);
		}
		if(max_wickets>single_player[i].wickets)
		{
			strcpy(name1,single_player[i].name);
			max_wickets=single_player[i].wickets;
			runs1=single_player[i].runs;
			no_of_matches_played1=single_player[i].no_of_matches_played;
		}
	}
		printf("\n\nThe hightest runs scored by player is :\n\n");
		printf("%s\n",name);
		printf("%d\n",max_runs);
		printf("%d\n",wickets);
		printf("%d\n",no_of_matches_played);

		printf("\n\nThe hightest no of wickets taken by player is :\n\n");
		printf("%s\n",name1);
		printf("%d\n",runs1);
		printf("%d\n",max_wickets);
		printf("%d\n",no_of_matches_played1);

}