
#include <string>
#include <vector>

#include "a02ex00.hpp"   // Information
#include "a02ex01_a.hpp" // MyBooleanClass
#include "a02ex03_a.hpp" // Menu
#include "a02ex03_b.hpp" // Food
#include "a02ex03_c.hpp" // Bread
#include "a02ex03_d.hpp" // Cracker
#include "a02ex03_e.hpp" // FilledWafer
#include "a02ex03_f.hpp" // Mortadella
#include "a02ex03_g.hpp" // Ham
#include "a02ex03_h.hpp" // Cheese
#include "a02ex03_i.hpp" // CheeseCottage
#include "Milk.hpp"
#include "Water.hpp"
#include "Soda.hpp"
#include "Brahma.hpp"
#include "Budweiser.hpp"
#include "Corona.hpp"
#include "StellaArtois.hpp"



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
	
	void insertMilk(void);
	void insertWater(void);
	void insertSoda(void);
	void insertBeer(void);
	
	void insertBrahma(void);
	void insertBudweiser(void);
	void insertCorona(void);
	void insertStellaArtois(void);

public:
	MyProgram();
	
	void start();
	
	void verifyArguments(int, char* []);
	
	const MyBooleanClass* getVerboseMode();
	void setVerboseMode(MyBooleanClass*);
	
	const MyBooleanClass* getShortMessageMode();
	void setShortMessageMode(MyBooleanClass*);
};

   
/* fim de arquivo */
