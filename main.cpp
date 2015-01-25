#include <iostream>     // std::cout
//#include <complex>      // std::complex
#include "cilinder.h"
#include "cilinderHole.h"


using namespace std;
int main ()
{
    cilinder mycilinder(4,3);
    mycilinder.info();
    cilinderHole mycilinderHole(7,5,2);
    mycilinderHole.info();

    cilinder *ptrCilinder;

    ptrCilinder =new cilinderHole(5,4,3);

    ptrCilinder->info();


}
