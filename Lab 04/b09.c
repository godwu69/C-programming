#include<stdio.h>
int main(){
   int arr[3];
   int i,j,temp;
   printf("\nNhap vao 3 so:\n");
   for(i = 0; i < 3; i++)
   {
       scanf("\n%d",&arr[i]);
   }
   for(i = 0; i < 3 - 1; i++)
    {
	  for(j = 0; j < 3 - i - 1; j++)
        {
         if(arr[j] < arr[j+1])
         {
             temp = arr[j];
             arr[j] = arr[j+1];
             arr[j+1] = temp;
         }    
        }
    }
   printf("\n3 so sau khi sap xep la:");
   for(i = 0; i < 3; i++)
   printf("\n%d ",arr[i]);
   return 0;
}
