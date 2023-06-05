#include<stdio.h>
int main()
{
  int sp[4][3], ss[4], is[3], i,j;
  //read the saleswise item sold
  for(i=0; i<4; i++)
   for(j=0;j<3;j++)
   {
   
   printf("enter the item %d sold by salesperson %d : ", j+1,i+1);
   scanf("%d", &sp[i][j]);
     }
  
  //salespersonwise sum
  for(i=0;i<3;i++)
    ss[i]= sp[i][0] +sp[i][1]+ sp[i][2];
  
  //itemwise sum  
  for(i=0; i<=2; i++)
  is[i] = sp[0][i]+ sp[1][i]+ sp[2][i] + sp[3][i];
  
  //display the itemwise sum
  for(i=0; i<=2; i++)
  printf("item %d is sold %d quantity \n", i+1, is[i]);
  
  
  //display the saleswise sum
  printf("saleswise sum \n");
  printf("---------------\n");
   for(i=0; i<=3; i++)
   printf("salesperson %d sold %d  quantity  : \n", i+1, ss[i]);
   return 0;
}