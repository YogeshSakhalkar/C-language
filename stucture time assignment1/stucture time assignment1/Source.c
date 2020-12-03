#include<stdio.h>
struct time
{
	int hrs;
	int mins;
	int secs;
};


struct time store_time1(struct time);
struct time store_time2(struct time);
struct time ADD_time(struct time,struct time,struct time);
int total_seconds(struct time);

void main()
{
	struct time time1,time2,time3;
	int total_sec=0;
	time1=store_time1(time1);
	printf("\n hrs:-%d: min:-%d sec:-%d",time1.hrs,time1.mins,time1.secs);

	time2=store_time2(time2);
	printf("\n hrs%d mins:-%d sec:-%d",time2.hrs,time2.mins,time2.secs);

	printf("\nAddition  of two time is:");
	time3 =ADD_time(time1,time2,time3);
	printf("\n%d:%d:%d", time3.hrs, time3.mins, time3.secs);

	total_seconds(time3);

	printf("\n\n\n");
}


struct time store_time1(struct time time1)
{
	printf("\n\n\n");
	printf("Enter the time\n hrs-");
	scanf("%d",&time1.hrs);
	printf("\n mins-");
	scanf("%d",&time1.mins);
	printf("\n secs-");
	scanf("%d",&time1.secs);
	return time1;
}

struct time store_time2(struct time time2)
{
	printf("\n\n\n");
	printf("Enter the time\n hrs-");
	scanf("%d",&time2.hrs);
	printf("\n mins-");
	scanf("%d",&time2.mins);
	printf("\n secs-");
	scanf("%d",&time2.secs);
	return time2;
}

struct time ADD_time(struct time time1,struct time time2,struct time time3)
{
	time3.hrs=time1.hrs+time2.hrs;
	time3.mins=time1.mins+time2.mins;
	time3.secs=time1.secs+time2.secs;
	if(time3.secs>60)
	{
		time3.mins=time3.mins+(time3.secs/60);
		time3.secs=time3.secs%60;
	}
	if (time3.mins > 60)
	{
		time3.hrs = time3.hrs + (time3.mins / 60);
		time3.mins = time3.mins % 60;
	}
	return time3;
}

int total_seconds(struct time time3)
{
	int seconds;
	seconds = time3.secs + (time3.mins * 60) + (time3.hrs * 60 * 60);
	printf("\ntotal second is:%d",seconds);
}