#include<stdio.h> 
int main() 
{ 
int i, j, x, b , z, limit, total = 0, count = 0, tq, wt=0, tat=0, pos, p[10], prio[10], at[10], bt[10], temp[10];

float awt, atat;

printf("\n ----====::Enter Total Number of Processes::====----");

scanf("%d", &limit);

x=limit;

for(i = 0; i < limit; i++) 
      {
	    p[i]=i+1;
	   
	    prio[i]=0;
            printf("\nEnter total Details of Process[%d]\n", i + 1);
            printf("Arrival Time:\t");
            scanf("%d", &at[i]);
            printf("Burst Time:\t");
            scanf("%d", &bt[i]); 
            temp[i] = bt[i];
      }



}
