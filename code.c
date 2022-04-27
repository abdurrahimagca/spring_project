#include<stdio.h>
void easy (void);
void medium (void);
void hard (void);


int main(void)
{
    int check;
    //kullanicinin sayi girdiğinden emin olunmasını sağlayan kod parçasi eklenecek
    printf("lutfen zorluk seviyenizi seciniz(kolay icin 1 orta icin 2 zor icin 3)...");
    scanf("%d", &check);
    if(check==1)
        easy();

    else if (check==2)
        medium();
    else
        hard();

        
}

//genel olarak burada inşaa edilecek
void easy(void)
{
     char table[9][9];
    //bu tablo kullanıcı girdisine göre açılacak-ilerde- ve bu kısımda da mayın ataması yapılaca
    //bu kısma func.c fonksiyon olarak dahil edilecek
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            table[i][j] = 'x';
        }
    }   
    
//mayınların rasgele yerleştirilmesi, kullancıdan girdi alınıp bu girdiye göre kimi hücrelerin komşudaki mayın sayısını yazar hale getirilecek
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            printf("  %c  ", table[i][j]);
        }
        printf("\n");
    }
}
void medium (void)
{
     char table[16][16];
    //bu tablo kullanıcı girdisine göre açılacak-ilerde- ve bu kısımda da mayın ataması yapılaca

    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            table[i][j] = 'x';
        }
    }
    

    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            printf("  %c  ", table[i][j]);
        }
        printf("\n");
    }
}
void hard (void)
{
      char table[30][16];
    //bu tablo kullanıcı girdisine göre açılacak-ilerde- ve bu kısımda da mayın ataması yapılaca

    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            table[i][j] = 'x';
        }
    }
    

    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            printf("  %c  ", table[i][j]);
        }
        printf("\n");
    }
}