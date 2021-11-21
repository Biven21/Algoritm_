#include "TXLib.h"
#include "AlgoFunc.h"

void Data_Over (int data [], int size);

int main ()
    {
    int size = 11;
    int data [11] = {};

    for (int i = 0; i < size; i++) data [i] = random (size * 2);

    $y PrintArray (data, size, size, "после заполнения data random");

    Data_Over (data, size);

    return 0;
    }

//-----------------------------------------------------------------------------
void Data_Over (int data [], int size)
     {
      int Nol = 0;

      for (int i = 0; i <= size/2 - 1; i++)
          {
          Nol = data [i];
          data [i] = data [size - 1 - i];
          data [size - 1 - i] = Nol;
          }
     PrintArray (data, size, size, "после заполнения dataOve");
     }
