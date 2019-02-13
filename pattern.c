//program to creat the pattern and dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>
int** myfunc(void);//storing of the array in heap 
int main()
{
    int **a;//double pointer to store the array 
    int i,j;//for loop 
    int k;
  a=myfunc();//function call to create memory of heap and return the array back to main
  for(i=0;i<10;i++)
      {
        for(j=0;j<5;j++)
        {

            printf("%d",a[i][j]);//print the array after return from the sub function
        }//end of for loop of j
       printf("\n");//to display the value to next line

    }//end of for loop of i
    k=i/2;
    for(i=0;i<10;i++)//loop to create the pattern 
      {
          if(a[i][0]>4)
          {

              for(j=0;j<k;j++)
              {
                  printf("*");
              }//end of for loop of j of if
              k--;

          }//end of if 

        else
        {
           for(j=0;j<a[i][0];j++)
           {
            printf("*");
           }//end of for loop of j of else
        }//end of else
        printf("\n");

      }//end of for loop of i 


    return 0;
}//end of main
int** myfunc()//sub function to create the memory in heap
{
    int **ptr;
    int i,j;
    ptr=malloc(10*sizeof(int));//dynamic memory allocation
    for(i=0;i<10;i++)
    {
        ptr[i]=malloc(5*sizeof(int));//dynamic allocation of memory for next rows 

    }
        for(i=0;i<10;i++)
      {
        for(j=0;j<5;j++)
        {
            ptr[i][j]=i+1 ;
            printf("%d",ptr[i][j]);
        }//end of for loop of j
       printf("\n");

    }//end of for loop of i
    return ptr;


}//end of myfunc()
