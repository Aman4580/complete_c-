#include<stdio.h>
int main()
{
     float wt[50],pt[50],ratio[50],totalv,temp,capacity,amount;
     int n,i,j;
     printf("Enter the number of items :");
     scanf("%d",&n);   
    for (i = 0; i < n; i++)
    {
        printf("Enter wt and pt for item[%d] :\n",i);
        scanf("%f %f", &wt[i], &pt[i]);
    } 
    printf("Enter the capacity of knapsack :\n");
    scanf("%f",&capacity);
     
     for(i=0;i<n;i++)ss
         ratio[i]=pt[i]/wt[i];
         
    for (i = 0; i < n; i++) 
      for (j = i + 1; j < n; j++) 
         if (ratio[i] < ratio[j]) 
        {
            temp = ratio[j];
            ratio[j] = ratio[i];
            ratio[i] = temp;
 
            temp = wt[j];
            wt[j] = wt[i];
            wt[i] = temp;
 
            temp = pt[j];
            pt[j] = pt[i];
            pt[i] = temp;
         }
    
     printf("Knapsack problems using Greedy Algorithm:\n");
     for (i = 0; i < n; i++) 
     {
      if (wt[i] > capacity)
          break;
       else 
      {
          totalv = totalv + pt[i];
          capacity = capacity - wt[i];
       }
     } 
       if (i < n)
       totalv = totalv + (ratio[i]*capacity);
     printf("\nThe maximum value is :%f\n",totalv);     
     return 0;
}
