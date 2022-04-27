#include<stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
    int x,y;
    char table[9][9];
      for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            table[i][j] = 'x';
        }
    }   
    scanf("%d%d",&x,&y);
    //kullanıcının tıkladığı hücre table[x][y]
   int i, n,k,l;
   time_t t;
   
   n = 10;
   
   
   srand((unsigned) time(&t));

   
   for( i = 0 ; i < n ; i++ ) {
        k = rand() % 10;
        l = rand()%10;
        table[k][l]='M';

   }
   //kullanicin seçtiği hücrenin etrafında olarak m ile komşu olmayan hücreleri otomatik 0lara dönüştürüp m komşu olanlara m sayısı yazılacak
   //burada yardım? 
   //mayın hem nasıl mayın olacak hem de m olarak yazılmayacak?? 
   for (int i = 0; i < 9; i++)
   {
      for (int j = 0; j < 9; j++)
      {
        while (x-i==0||x+i==9||y-j==0||y+j==0)
        {
           //burada yapılması hedeflenen bir yandaki hücrenin m olup olmadığı ve eğer öyleyse kaç tane olduğunu ekrana basmak
            
        }
          
          
      }
      
   }
   

     for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            printf("  %c  ", table[i][j]);
        }
        printf("\n");
    }
}
