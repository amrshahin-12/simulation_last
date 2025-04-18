#include<iostream>
#include<fstream>
#include"Scheduler.h"

using namespace std;


int main()
{
    Scheduler s;
    

   
    s.LoadPatientsFromFile("Test2.txt");

    s.SimulationV2();

   

  




    return 0;
}