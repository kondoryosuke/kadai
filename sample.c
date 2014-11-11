#include <stdio.h>
#include <stdlib.h>

main()
{
    int  n;
    int  array[100];
    int  count;
    int  max,min;
    
    min = array[0];
    max = array[0];
    
    printf("データの個数を入力してください >");
    
    scanf("%d",&n);
    
    
    for(count = 0;count < n;count = count+1)
    {
        
        printf("Input No.%d > ",count);
        scanf("%d",&array[count]);
    }
    
    for(count = 0;count < n; count = count+1)
    {
        if(array[count] > max)
        {
            max = array[count];
        }
        if(array[count] < min)
        {
            min = array[count];
        }
    }
    
    
