
#include "TXLib.h"

void FillArray (int data[], int size, int start, int step);
void PrintArray (const int data[], int size, const char title[]);

int main ()
    {
    int data [20] = {};

    FillArray  (data, 20, 0, 10);
    PrintArray (data, 20, "����� ����������");
    printf ("\n");
    FillArray  (data, 30, 0, 10);
    PrintArray (data, 30, "����� ����������");

    return 0;
    }

void FillArray (int data[], int size, int start, int step)
     {
     data [0] = start;

     for (int i = 0; i < size; i++)
         {
         assert (0 <= i   && i   < size);
         assert (0 <= i-1 && i-1 < size);

         data [i] = data [i - 1] + step;
         }
     }

void PrintArray (const int data[], int size, const char title[])
     {
     printf ("\n%s:", title);

     for (int i = 0; i < size; i++)
         {
         if (i % 5 == 0)
             {
             printf ("\n");
             }
         $g; printf ("[%2d] = ", i);
         $c; printf ("%3d,", data [i]);
         }
     }
