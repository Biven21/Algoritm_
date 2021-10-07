#ifndef ALGOFUNC_H_INCLUDED
#define ALGOFUNC_H_INCLUDED



#endif // ALGOFUNC_H_INCLUDED

void PrintArray (const int data[], int size, int column, const char title[]);

void PrintArray (const int data[], int size, int column, const char title[])
     {
     printf ("\n%s:", title);
     printf ("\n");

     for (int i = 0; i < size; i++)
         {
         assert (0 <= i   && i   < size);

         if (i % column == 0)
             {
             printf ("\n");
             }
         $g; printf ("[%2d] = ", i);
         $c; printf ("%3d,", data [i]);
         }
         printf (" END");
     }
