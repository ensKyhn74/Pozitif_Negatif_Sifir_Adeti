#include <stdio.h>
// klavyeden n adet sayı girilir;
// kaç tanesi pozitif,kaç tanesi negatif,kaç tanesi sıfır;ekrana yazdırılır

int main() 

{
 
 int sayi,i,n;
 
 int pozitifSayac = 0,negatifSayac = 0,sifirSayac = 0;
 
 printf("Kac tane sayi girmek istersiniz?: ");
 scanf("%d",&n);                
 
  for(i = 1 ; i <= n ; i++)
  {	
   printf("%d.sayi: ",i);
   scanf("%d",&sayi); 
   
   if(sayi > 0) 
   {
    pozitifSayac++;
   }
   
   else if(sayi < 0)
   {
    negatifSayac++; 	
   }
   
   else
   {
    sifirSayac++;	
   }
  }
 
  printf("\n%d tane pozitif sayi var\n",pozitifSayac);
  printf("%d tane negatif sayi var\n",negatifSayac);
  printf("%d tane sifir var",sifirSayac);
 
  return 0;

}