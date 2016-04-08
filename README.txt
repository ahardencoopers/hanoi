Tower of Hanoi Dynamic Library (libtower)
Rafael Manriquez Valdez 1196010
L Rafael Bifi A01190297
Juan Carlos Guzmán Islas A01175826
Alberto Harden Cooper Saldívar A00811931

libtower has 2 functions that solve the Tower of Hanoi problem.

void subSolveTowerOfHanoi(int intAmountOfRings, char charSourceRodName, char charDestinationRodName, char charAuxRodName);
Outputs the actual movements between towers to solve the problem.


int intAmountOfMovements(int intAmountOfRings);
Outputs the amount of movements required to solve the problem.

Linking libtower
When compiling your program be sure that #include "TowerOfHanoi.h" is present in your main file.
Compiling a libtower program:
gcc -Wall -L./ main.c -lmean
