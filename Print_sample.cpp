
#include "TXLib.h"

void FillArray (int data[], int size, int start, int step);

int main ()
    {
    int data [20] = {};

    FillArray (data, 20, 0, 10);

    for (int i = 0; i < 20; i++)
        {
        if (i % 5 == 0)
            {
            printf ("\n");
            }
        $g; printf ("[%2d] = ", i);
        $c; printf ("%3d,", data [i]);
        }

    return 0;
    }

void FillArray (int data[], int size, int start, int step)
     {
     for (int i = 0; i < size; i++)
         data [i] = start + i* step;
     }
