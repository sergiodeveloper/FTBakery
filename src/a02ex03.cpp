/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2016
*/

#include <string>
#include <vector>
#include <iostream>
#include <iomanip> 

#include "MyProgram.hpp"

   
int main(int argc, char* argv[])
   {
   MyProgram programa;
   programa.verifyArguments(argc, argv);
   programa.myMainList.clear();
   programa.Information::wellcome("C++ Program " + string(argv[0]) + " running!", shortMessageMode->getStatus());
   programa.process();
   programa.Information::bye(shortMessageMode->getStatus());
   programa.clearAll();
   };


/* fim de arquivo */
