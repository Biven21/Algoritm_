#include "TXLib.h"
#include "AlgoFunc.h"

int Data_max (int data [], int size);
int Data_min (int data [], int size);
int Namba_max (int data [], int size);
int Namba_min (int data [], int size);
void exchenge (int data [], int size);

int main ()
    {
    int size = 11;
    int data [11] = {};


    for (int i = 0; i < size; i++) data [i] = random (size * 2);

    $y PrintArray (data, size, 2, "после заполнения data random");


    printf ("\n\n max of massiv data = %d", Data_max (data, size));
    printf ("\n position max of massiv data = %d", Namba_max (data, size));
    printf ("\n\n min of massiv data = %d", Data_min (data, size));
    printf ("\n position min of massiv data = %d", Namba_min (data, size));

    exchenge (data, size);

    return 0;
    }

//-----------------------------------------------------------------------------
int Data_max (int data [], int size)
     {
    int data_max = 0;

     for (int i = 0; i < size; i++)
        {
        if (data [i] > data_max) data_max = data [i];
        }
     return data_max;
     }

//-----------------------------------------------------------------------------

int Data_min (int data [], int size)
    {
    int data_min = size * 2;

    for (int i = 0; i < size; i++)
        {
        if (data [i] < data_min) data_min = data [i];
        }
    return data_min;
    }

//-----------------------------------------------------------------------------
int Namba_max (int data [], int size)
    {
    int i_max = 0;
    int data_max = 0;

    for (int i = 0; i < size; i++)
        {
        if (data [i] > data_max)
            {
            data_max = data [i];
            i_max = i;
            }
        }
    return i_max;
    }

//-----------------------------------------------------------------------------
int Namba_min (int data [], int size)
    {
    int i_min = 0;
    int data_min = size * 2;

    for (int i = 0; i < size; i++)
        {
        if (data [i] < data_min)
            {
            data_min = data [i];
            i_min = i;
            }
        }
    return i_min;
    }

//-----------------------------------------------------------------------------

void exchenge (int data [], int size)
     {
     int exch = 0;
     for (int i = 0; i < size-1; i = i + 2)
         {
         exch = data [i];
         data [i] = data [i + 1];
         data [i + 1] = exch;
         }
     PrintArray (data, size, 2, "поменяли соседей");
     }
