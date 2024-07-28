#include<stdio.h>
int main()
{
     float wegt[50],proft[50],ratio[50],tValue,temp,capacity,amount;
     int n,i,j;
     printf("Enter the number of items :");
     scanf("%d",&n);   
    for (i = 0; i < n; i++)
    {
        printf("Enter wegt and proft for item[%d] :\n",i);
        scanf("%f %f", &wegt[i], &proft[i]);
    } 
    printf("Enter the capacity of knapsack :\n");
    scanf("%f",&capacity);
     
     for(i=0;i<n;i++)
         ratio[i]=proft[i]/wegt[i];
         
    for (i = 0; i < n; i++) 
      for (j = i + 1; j < n; j++) 
         if (ratio[i] < ratio[j]) 
        {
            temp = ratio[j];
            ratio[j] = ratio[i];
            ratio[i] = temp;
 
            temp = wegt[j];
            wegt[j] = wegt[i];
            wegt[i] = temp;
 
            temp = proft[j];
            proft[j] = proft[i];
            proft[i] = temp;
         }
     for (i = 0; i < n; i++) 
     {
      if (wegt[i] > capacity)
          break;
       else 
      {
          tValue = tValue + proft[i];
          capacity = capacity - wegt[i];
       }
     } 
       if (i < n)
       tValue = tValue + (ratio[i]*capacity);
     printf("\nThe maximum value is :%f\n",tValue);     
     return 0;
}
