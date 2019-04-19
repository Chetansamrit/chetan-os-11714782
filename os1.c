#include<stdio.h> 
 
int main() 
{ 
      int i, limit, total = 0, x, count = 0, tq,j; 
      
	  int wt = 0, tat = 0,pos,z,p[10],prio[10], at[10], bt[10], temp[10],b; 
      
	  float average_wt, average_tat;
      
	  printf("\nEnter Total Number of Processes:"); 
      
	  scanf("%d", &limit); 
      
	  x = limit; 
	  
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
	   
      printf("\nEnter the Time Quantum:"); 
      scanf("%d", &tq); 
      printf("\nProcess ID\t\tBurst Time\t Turnaround Time\t Waiting Time\t Priority\n");
      for(total = 0, i = 0; x != 0;) 
      { 

		    for(z=0;z<limit;z++)
		    {
			int temp1;
			pos=z;
			for(j=z+1;j<limit;j++)
			{
			    if(prio[j]<prio[pos])
				pos=j;
			}
		 
		temp1=prio[z];
	
		prio[z]=prio[pos];
	
		prio[pos]=temp1;
		 
			temp1=bt[z];
			bt[z]=bt[pos];
			bt[pos]=temp1;
		 			temp1=at[z];
				at[z]=at[pos];
			at[pos]=temp1;

			temp1=p[z];
				p[z]=p[pos];
			p[pos]=temp1;

			temp1=temp[z];
				temp[z]=temp[pos];
			temp[pos]=temp1;
		    }
		{
		}
            
			if(temp[i] <= tq && temp[i] > 0) 
            { 
                  total = total + temp[i]; 
                  temp[i] = 0; 
                  count = 1; 
            } 
            
			else if(temp[i] > 0) 
            { 
                  temp[i] = temp[i] - tq; 
                  total = total + tq; 
            } 

	for(b=0;b<limit;b++)
		{
			if(b==i)
			prio[b]+=1;
			else
			prio[b]+=2;
		}

            if(temp[i] == 0 && count == 1) 
            { 
                  x--; 
                  printf("\nProcess[%d]\t\t%d\t\t %d\t\t %d\t\t%d", p[i], bt[i], total - at[i], total - at[i] - bt[i],prio[i]);
                  wt = wt + total - at[i] - bt[i]; 
                  tat = tat + total - at[i]; 
                  count = 0; 
            } 
            if(i == limit - 1) 
            {
                  i = 0; 
            
			}
            else if(at[i + 1] <= total) 
            {
                  i++;
            
			}
            else 
            {
                  i = 0;
            
			}		
      } 
      return 0; 
}
