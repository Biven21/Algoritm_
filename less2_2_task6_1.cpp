#include "TXLib.h"
#include "AlgoFunc.h"

void Data_OverAB (int data [], int size);

int main ()
    {
    int size = 8;
    int data [8] = {};

    for (int i = 0; i < size; i++) data [i] = random (size * 2);

    $y PrintArray (data, size, size, "после заполнени€ data random");

    Data_OverAB (data, size);

    return 0;
    }

//-----------------------------------------------------------------------------
void Data_OverAB (int data [], int size)
     {
     int partA = 2;
     int partB = size - 1 - partA;
     int Nol = 0;

     if (partA + 1 == size / 2)
         {
         for (int i = 0; i <= partA; i++)
             {
             Nol = data [i];
             data [i] = data [partA + i];
             data [partA + i] = Nol;
             }
         $y PrintArray (data, size, size, "после заполнени€ data обмен равными част€ми");
         }


     if (partA + 1 < size / 2)
         {
         for (int i = 0; i <= partA; i++)
             {
             Nol = data [i];
             data [i] = data [(size - 1) - partA + i];
             data [(size - 1) - partA + i] = Nol;
             }
         for (int j = 0; j <= partA; j++)
             {
             Nol = data [0];
             for (int i = 0; i <= partA; i++) data [i] = data [i+1];
             data [partA] = Nol;
             }
         $y PrintArray (data, size, size, "после заполнени€ data обмен част€ми A < B");
         printf ("\n A = %d  <  B = %d", partA, partB);
         }

     }
