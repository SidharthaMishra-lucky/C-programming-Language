#include<stdio.h>
int main()
{
  int a[20], no, i, beg, end, mid,item;

  //for the number of elements in the array
  printf("enter the no. of house in the area");
  scanf("%d", &no);

  //input the number of elements
  printf("Input the number of people in the ascending or descending order for each house");
  for(i=0; i<no; i++)
  scanf("%d", &a[i]);

  //input the number to be searched
  printf("enter the people to be searched for a particular house");
  scanf("%d", &item);

  // search the element using binary search
   beg=0;
   end= no-1;
   mid = beg+end/2;
   while(beg<=end)
    { // finding the element after mid
        if(item > a[mid])
        beg = mid + 1;
        else if (a[mid] == item)
    {
        printf("%d found at location %d ", item, mid+1);
        break;
        }
        else//finding the element before mid
        end = mid - 1;
        mid = ( beg + end ) / 2;
        }// if not found
        if(beg > end)
        printf("Not found! %d isn't present in the list", item);
        return 0;
}