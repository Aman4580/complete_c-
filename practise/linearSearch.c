#include <stdio.h> 
int main() 
{ 
  int vec[100], n, c, d, po, t; 
  printf("Enter number of elements\n"); 
  scanf("%d", &n); 
  printf("Enter %d integers\n", n); 
  for (c = 0; c < n; c++) 
    scanf("%d", &vec[c]); 
  for (c = 0; c < (n - 1); c++) 
  { 
    po = c; 
    for (d = c + 1; d < n; d++) 
    { 
      if (vec[po] > vec[d]) 
        po= d; 
    } 
    if (po != c) 
    { 
      t = vec[c]; 
      vec[c] = vec[po]; 
      vec[po] = t; 
    } 
  } 
  printf("Sorted list in ascending order:\n"); 
  for (c = 0; c < n; c++) 
    printf("%d\n", vec[c]); 
  return 0; 
}
