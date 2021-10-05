
#include "TXLib.h"

void FillArray (int data[], int size, int start, int step);
void PrintArray (const int data[], int size);

int main ()
    {
    int data [20] = {};

    FillArray (data, 20, 0, 10);
    PrintArray (data, 20);

    return 0;
    }

void FillArray (int data[], int size, int start, int step)
     {
     for (int i = 0; i < size; i++)
         data [i] = start + i* step;
     }

void PrintArray (const int data[], int size)
     {
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
