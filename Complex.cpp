#include <iostream>
#include <stdio.h>
#include <time.h>

#include <time.h>

using namespace std;

class Complex 
  {
  public:
    Complex (double a, double b): r (a), c (b) {}
  private:
    double r; // Real Part
    double c; // Complex Part
  };
  
int main(int argc, char* argv[]) 
  {
      
    clock_t tStart = clock();
    Complex* array[1000];
    /*
    for (int i = 0;i  <  5000; i++) {
        for (int j = 0; j  <  1000; j++) {
        array[j] = new Complex (i, j);
        }

    }
    */
    for (int  i = 0; i < 1000; i++)
    {
        array[i] = new Complex (20, 30);
    }
    
    printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

  }
