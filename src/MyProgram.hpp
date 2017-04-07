#include <string>
#include "a02ex01_a.hpp"
#include "a02ex03_b.hpp"

using namespace std;

/**
 * Classe principal do programa
 */
class MyProgram
{

private:
	MyBooleanClass * verboseMode;
	MyBooleanClass * shortMessageMode;

	/**
	* Lista onde serão armazenados os Foods adicionados
	*/
	vector<Food *> myMainList;
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

public:
	MyProgram(int argc, char* argv[]);
	
	const MyBooleanClass* getVerboseMode();
	void setVerboseMode(MyBooleanClass*);
	
	const MyBooleanClass* getShortMessageMode();
	void setShortMessageMode(MyBooleanClass*);
};

   
/* fim de arquivo */
