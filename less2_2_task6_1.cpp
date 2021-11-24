#include "TXLib.h"
#include "AlgoFunc.h"

void Data_OverAB (int data [], int size);

int main ()
    {
    int size = 8;
    int data [8] = {};

    for (int i = 0; i < size; i++) data [i] = random (size * 2) * 100 + i;

    $y PrintArray (data, size, size, "после заполнения data random");

    Data_OverAB (data, size);

    return 0;
    }

//-----------------------------------------------------------------------------
void Data_OverAB (int data [], int size)
     {
     int namberA = 3;
     int partA = namberA + 1;
     int partB = size - partA;
     int Nol = 0;

     if (partA == size / 2)
         {
         for (int i = 0; i <= partA; i++)
             {
             Nol = data [i];
             data [i] = data [partA + i];
             data [partA + i] = Nol;
             }
         $y PrintArray (data, size, size, "после заполнения data обмен равными частями");
         }

     if (partA < size / 2)
         {
         for (int i = 0; i <= partA; i++)
             {
             Nol = data [i];
             data [i] = data [(size - 1) - partA + i];
             data [(size - 1) - partA + i] = Nol;
             }
        $g PrintArray (data, size, size, "после заполнения data");
         for (int j = 0; j <= partA; j++)
             {
             assert (0 <= j && j <= partA);

             int Nol = data [0];
             for (int i = 0; i < partB - 1; i++)
                 {

                 data [i] = data [i + 1];
                 PrintArray (data, size, size, "после заполнения data");
                 printf ("i = %d", i);
                 }
             data [partB - 1] = Nol;
             }

         $y PrintArray (data, size, size, "после заполнения data обмен частями A < B");
         printf ("\n A = %d  <  B = %d", partA + 1, partB);
         }
     if (partA > size / 2)
         {
         for (int i = 0; i <= partB - 1; i++)
             {
             Nol = data [i];
             data [i] = data [(size - 1) - partB + i];
             data [(size - 1) - partB + i] = Nol;
             }
         for (int j = 0; j <= (partA - partB); j++)
             {
             assert (0 <= j && j <= (partA - partB));

             Nol = data [partB + 1];
             for (int i = partB + 1; i < size; i++)
                 {
                 data [i] = data [i + 1];
                 }
             data [size - 1] = data [partB + 1];
             }
         printf ("\n A = %d   B = %d", partA + 1, partB);
         PrintArray (data, size, size, "после заполнения data обмен частями A > B");
         }

     }
