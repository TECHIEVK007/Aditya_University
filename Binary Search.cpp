# include <stdio.h>
int main ()
{
int a[20] ,i,key ,n, found=0,position;
printf("How many elements ?");
scanf ("%d" ,&n);
printf("Enter array elements :\n");
for(i =0;i<n ;++ i)
  { scanf ("%d" ,&a[i]);
}
printf ("\nEnter element to search :");
scanf("%d" ,&key );
for (i =0;i<n ;i++)
{   
if(key==a[i] )
	{   found=1;
    	position=i;  
	}
}
if(found==1)
printf(" Element found at index %d", position);
else
printf(" Element not found ");
}

