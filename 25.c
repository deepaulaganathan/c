
# include < stdio.h >
void  main( )
{
int   a[25], m, i  ;
float   mean = 0, sum = 0  ;
printf(" Enter the Numbers of terms: ") ;
scanf("%d ", & m) ;
printf("\n Enter the Numbers : \n") ;
for (  i = 1 ; i < = m ; i++ )
{
scanf("%d ", & a[i]) ;
} 
for (  i = 1 ; i < = m ; i++ )
{
sum = sum + a[i] ;
avg = sum / m ; 
}
printf("\n Mean of entered Numbers are : %f ", mean) ;
return ( 0 );
}

