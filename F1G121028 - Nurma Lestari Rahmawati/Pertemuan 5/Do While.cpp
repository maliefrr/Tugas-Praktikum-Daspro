#include <stdio.h>
int main ()

{
 int i = 1, n , jumlah = 0, x;
 float rerata;
 
 printf ("Banyak Data : ");
 scanf ("%d",&n);
 
 do
  {
   printf ("Data ke %d : ",i);
   scanf ("%d",&x);
   jumlah = jumlah + x;
   i++;
  }
 
 while (i<=n);
  {
   rerata = jumlah / n;
   printf ("Rata-rata = %.2f\n",rerata);
   printf ("Jumlah = %d",jumlah);
  }
return 0;
}
