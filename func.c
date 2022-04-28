#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
    int x,y;
    char mtable[9][9];
    char gtable[9][9];
      for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            mtable[i][j] = '0';
        }
    }
      for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            gtable[i][j] = 0;
        }
    }    
   int i, n,k,l;
   time_t t;
   
   n = 10;
   
   srand((unsigned) time(&t));

   int mines[10];
   for( i = 0 ; i < n ; i++ ) {
        k = rand() % 10;
        l = rand()%10;
        //mayinlar
        //kullanicidan mayin demesi için 1 istenecek, 1 olarak tutmak kolaylık  bu yüzden
        mtable[k][l]='1';

   }
  for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            printf("  %c  ", mtable[i][j]);
        }
        printf("\n");
    }
    //iki değer alınacak, değerlerin etrafında taki komşusu mayın olan bi hücreye raslanıncaya kadar- null karakterler sayıyaya dönüşecek
    //tersten dizi kontorl edilip null karakterler
    //kullanıcı boş bir hücre açarsa da bu kısım çağrılacak o yüzden bağımsız fonksiyon olamlı 
      for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            mtable[i][j] = '0';
        }
    } 
    //kullanıcı mayına temiz demediği müddetçe oyunun oynanması sağlanacak
    
   
    
    
}