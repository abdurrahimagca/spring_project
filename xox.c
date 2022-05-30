#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int wincheck(char guncel[3][3]);
int game(int i, int j, int k);

char o1[10],o2[10],tabl[3][3]; 
int WIN=0,hamle=0,CK=0,CK2=0,i,j,l;

int main (void)
{
    

    for(int a=0; a<3; a++) 
    {
        for(int b=0; b<3; b++) 
        {
             tabl[a][b]='-';
        }
    }

   printf("Hosgeldiniz!\nXOX veya diger adiyla Tic Tac Toe iki kisilik bir strateji oyunudur.\n");
   printf("Ilk baslayan oyuncu bos bir kareye X , diger oyuncu da bos karelerden birine O yazarak hamlelerini sirasiyla yaparlar.\n");
   printf("Oyunumuzda oyuncu sirasina gore yalnizca indis degerleri girilecektir.\nBos hucreler - ile temsil edilmektedir.\n");
   printf("Satir, sutun veya kosegenlerde ayni karakterleri (XXX -OOO) saglayan ilk oyuncu oyunu kazanir.\nYapilacak hamle kalmazsa oyun berabere biter.\n            Bol sans!\n\n");
  

    do
    {
        do
        {
            
            printf("Sira %d. oyuncuda! Lutfen 1-3 arasindaki hucre indislerini giriniz: \n", ((hamle%2)+1));
            l = scanf("%d%d",&i,&j);
            fflush(stdin);
            if (i>0&&i<4&&j>0&&j<4&&l!=0)
            {
                break;
            }
            else
            {
                printf("Maalesef hatali giris ");
            }
        } while (1);  
       
     game(i-1,j-1,hamle);
             
       if (CK2==0)
       {
           hamle++;
       }

    WIN = wincheck(tabl);
    } while (CK==0&&WIN==0&&hamle!=9);
    if (WIN==0&&hamle==9)
    {
       printf("\nOyun berabere bitti.\n");
       return 0;
    }
    else if(WIN!=0)
    {
       printf("\nOyun bitti.\nKazanan %d. oyuncu. TEBRIKLER!",(2-hamle%2));
       return 0;
    }
    else
    {
        printf("\nOYUN BEKLENMEDIK SEKILDE BITTI!\n");
        return 1;
    }
    
}

int game(int i, int j, int k)
{   
 
    CK2=0;
    k=hamle;
    if (k%2==0)
    {
        if (tabl[i][j]!='X'&&tabl[i][j]!='O')
        {
           tabl[i][j]='X';
           
        }
        else
        {
            printf("Eyvah! Bu hucre dolu!\n");
            CK2=2;

        }
        
    }
    else if (k%2!=0)
    {   
       if (tabl[i][j]!='X'&&tabl[i][j]!='O')
        {
           tabl[i][j]='O';
           
        }
        else
        {
            printf("Eyvah! Bu hucre dolu!\n");
            CK2=2;
            
        }
    }
    else
    {
        return 1;
    }
    
    printf("guncel durum: \n");
    for(int a=0; a<3; a++) 
    {
        for(int b=0; b<3; b++) 
        {
             printf( " %c ", tabl[a][b]);
        }
    printf("\n");
    } 
}
int wincheck(char guncel[3][3])
{
    for (int i = 0; i < 3; i++)
  {
        if (guncel[i][0]==guncel[i][1]&&guncel[i][0]==guncel[i][2]&&(guncel[i][0]=='X'||guncel[i][0]=='O'))
        {
            return 1;
        }  
               
         else if (guncel[0][i]==guncel[1][i]&&guncel[0][i]==guncel[2][i]&&(guncel[0][i]=='X'||guncel[0][i]=='O'))
        {
            return 1;
        }
    
}
   if (guncel[0][0]==guncel[1][1]&&guncel[0][0]==guncel[2][2]&&(guncel[0][0]=='X'||guncel[0][0]=='O'))
    {
            return 1;
    }
        else if (guncel[0][2]==guncel[1][1]&&guncel[0][2]==guncel[2][0]&&(guncel[0][2]=='X'||guncel[0][2]=='O'))
    {
            return 1;
    }
    else
    {
        return 0;
    }
}