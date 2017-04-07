#include <string>

using namespace std;

class MyProgram
   {
   
   private:
    MyBooleanClass * verboseMode;
	MyBooleanClass * shortMessageMode;
	vector<Food *> myMainList;
      
   public:
       
       MyProgram();
	   void process(void);
	   void verifyArguments(int, char* []);
	   void clearAll(void);
	   
	   void listItems(void);
	   void insertItems(void);
	   void insertBread(void);
	   void insertCheese(void);
	   void insertCheeseCottage(void);
	   void insertCracker(void);
	   void insertFilledWafer(void);
	   void insertHam(void);
	   void insertMortadella(void);
	  
     
   };
   
   
/* fim de arquivo */
