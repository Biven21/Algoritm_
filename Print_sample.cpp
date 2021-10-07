
#include "TXLib.h"

void FillArray (int data[], int size, int start, int step);
void PrintArray (const int data[], int size, const char title[]);

int main ()
    {
    int data [20] = {};

    FillArray  (data, 20, 0, 10);
    PrintArray (data, 20, "после заполнения");
    printf ("\n");

    int data1 [30] = {};

    FillArray  (data1, 30, 0, 10);
    PrintArray (data1, 30, "после запо лнения");

    return 0;
    }

void FillArray (int data[], int size, int start, int step)
     {
     data [0] = start;

     for (int i = 1; i < size; i++)
         {
         assert (0 <= i   && i   < size);
         assert (0 <= i-1 && i-1 < size);

         data [i] = data [i - 1] + step;
         }
     }

void PrintArray (const int data[], int size, const char title[])
     {
     printf ("\n%s:", title);
     printf ("\n");

     for (int i = 0; i < size; i++)
         {
         assert (0 <= i   && i   < size);

         if (i % 5 == 0)
             {
             printf ("\n");
             }
         $g; printf ("[%2d] = ", i);
         $c; printf ("%3d,", data [i]);
         }
         printf (" END");
     }
