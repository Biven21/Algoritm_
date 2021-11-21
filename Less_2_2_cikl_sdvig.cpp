#include "TXLib.h"
#include "AlgoFunc.h"

void Cikl_sdvig_Left (int data [], int size);
void sdvigRite (int data [], int size);

int main ()
    {
    int size = 9;
    int data [9] = {};


    for (int i = 0; i < size; i++) data [i] = random (size * 2);

    $y PrintArray (data, size, size, "после заполнения data random");

    Cikl_sdvig_Left (data, size);
    sdvigRite       (data, size);

    return 0;
    }

//-----------------------------------------------------------------------------
void Cikl_sdvig_Left (int data [], int size)
     {
     int Nol =  data [0];

     for (int i = 0; i < size - 1; i++)
         {
         data [i] = data [i + 1];
         }
     data [size - 1] = Nol;

     PrintArray (data, size, size, "после здвигa влево на 1 позицию");
     }

//-----------------------------------------------------------------------------
void sdvigRite (int data [], int size)
     {
     int Nol = data [size - 1];

     for (int i = size - 1; i > 0; i--)
         {
         assert (size - 1 >= i   && i   >  0);
         assert (size - 1 >= i-1 && i-1 >= 0);
         $r printf ("\n i = %d  i-1= %d", i, i-1);
         $y printf ("\n data i = %d", data [i]);
         data [i] = data [i - 1];
         $y printf ("\n data i = %d", data [i]);
         }
     data [0] = Nol;

     PrintArray (data, size, size, "после здвигa вправо на 1 позицию");
     }
