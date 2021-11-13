
#include "TXLib.h"
#include "Algofunc.h"

void FillArr (int data [], int size, int SizeNch, int Sizech);
int DataDoun (int dd [], int Sizech);

 int main ()
     {
     int size = 16;
     int data [] = {};
     int NchPer = 0;
     int TotPer  = 0;
     int ChPer   = 0;
     int SizeNch = 0;
     int Sizech  = 0;
     int shift   = 0;

     TotPer = (size + 2) / 3;    printf ("\n kolvo periodov = %d", TotPer);
     NchPer = (TotPer + 1) / 2;
     ChPer = TotPer / 2;

     if (TotPer % 2 == 0)
         {
         SizeNch = TotPer / 2 * 3;
         Sizech = size - SizeNch;
         }
     else Sizech = ChPer * 3;

     printf ("\n колво нечетн членов SizeNch = %d \n колво четных членов = %d \n сдвиг = %d",
             SizeNch, Sizech, shift);

     FillArr (data, 16, SizeNch, Sizech);

     PrintArray (data, 16, 3, "после заполнения");

     return 0;
     }

//-----------------------------------------------------------------------------

void FillArr (int data [], int size, int SizeNch, int Sizech)
     {
     data [0] = 1;
     int dd [] = {};
     for (int i = 1; i < SizeNch; i++)
         {
         assert (0 <= i   && i   < SizeNch);
         assert (0 <= i-1 && i-1 < SizeNch);

         if (i % 3 != 0) data [i] = data [i - 1] + 1;
         else            data [i] = data [i - 1] + 4;
         printf ("\n data [i] = %d  i = %d", data [i], i);
         }

     DataDoun (dd, Sizech);

     PrintArray (dd, Sizech, 6, "после заполнения");

     int j = Sizech - 1;

     printf ("\n\n dd [0] = %d \n dd [j=0] = %d \n", dd [0], dd [j]);
     printf ("\n dd [1] = %2d j = %d \n", dd [j+1], j + 1);
     printf ("\n dd [2] = %2d j = %d \n", dd [j+2], j + 2);
     printf ("\n dd [3] = %2d j = %d \n", dd [j+3], j + 3);

     int i = SizeNch;
     for (i = SizeNch;  i < size; i++)
         {
         $y printf ("\n dd[j] = %d     j = %d", dd [j], j);

         assert (SizeNch <= i && i < size);


         data [i] = dd [j];

         printf ("\n data[i] = %d", data [i]);
         printf ("\n");

         j--;
         }
     }

//-----------------------------------------------------------------------------

int DataDoun (int dd [], int Sizech)
     {
     dd [0] = 4;

     for (int j = 1; j < Sizech; j++)
         {
         assert (0 <= j     && j     < Sizech);
         assert (0 <= j - 1 && j - 1 < Sizech);

         if (j % 3 != 0) dd [j] = dd [j - 1] + 1;
         else            dd [j] = dd [j - 1] + 4;

         printf ("\n\n dd [j] = %d  j = %d", dd [j], j);
         }
     return 0;
     }
//D:\school\КПК\Репозиторий\Algoritm_\Funk123654.cpp|58|error: expected primary-expression before 'int'|
