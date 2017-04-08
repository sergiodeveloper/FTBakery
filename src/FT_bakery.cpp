
// FT_bakery.cpp

#include "FT_bakery.hpp"

int main(int argc, char* argv[])
{
   MyProgram *programa = new MyProgram();
   
   programa->verifyArguments(argc, argv);
   
   Information::wellcome(
	   "C++ Program " + string(argv[0]) + " running!",
	   programa->getShortMessageMode()->getStatus()
   );
   
   programa->start();
};

