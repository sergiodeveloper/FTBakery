#include <string>
#include <vector>
#include <iostream>
#include <iomanip> 

#include "a02ex00.hpp"
#include "a02ex01_a.hpp"
#include "a02ex03.hpp"
#include "a02ex03_a.hpp"
#include "a02ex03_b.hpp"
#include "a02ex03_c.hpp"
#include "a02ex03_d.hpp"
#include "a02ex03_e.hpp"
#include "a02ex03_f.hpp"
#include "a02ex03_g.hpp"
#include "a02ex03_h.hpp"
#include "a02ex03_i.hpp"
#include "MyProgram.hpp"

using namespace std;

MyProgram::MyProgram()
{
   this->verboseMode = NULL;
   this->shortMessageMode = NULL;
};
      
void MyProgram::process()
{
   vector<string> opcoes({ "Exit", "List Database", "Insert Items" });
   Menu menu("Main Menu", opcoes);
   int escolha = -1;
   
   while(escolha)
      {
      escolha = menu.getEscolha();
 
      switch(escolha)
         {
 	 case 1: { listItems();    }; break;
 	 case 2: { insertItems();  }; break;
         };
      };
};
   
void MyProgram::clearAll()   // está errada ! corrigir !!!!
{
   myMainList.clear();

   vector<Food *>::iterator scan = myMainList.begin();
   
   while(scan != myMainList.end())
      {
      (*scan) = NULL;
      delete (*scan);
      scan++;
      };
    
    verboseMode = NULL;
   	shortMessageMode = NULL;

   delete verboseMode;
   delete shortMessageMode;
   
};  
  
void MyProgram::listItems()
{
   double total = 0.00;
      
   cout << "------------------------------\nItems in Database:\n------------------------------\n";
   vector<Food *>::iterator scan = myMainList.begin();
   
   while(scan != myMainList.end())
      {
      cout << "  @ " << setw(20) << (*scan)->getDescricao() << "\n\tUS$ " << fixed << setprecision(2) << (*scan)->getValor() << endl;
      total +=  (*scan)->getValor();
      scan++;
      };
   cout << "  Total cost: US$ " << fixed << setprecision(2) << total << endl;
};
   
   
void MyProgram::insertItems()
{
   
   	
   cout << "------------------------------\nInset New Items:\n------------------------------\n";
  
   Menu menu("Insert Items", { "Exit", "Bread", "Cheese", "Cottage Cheese", "Cracker", "Filled Wafer", "Ham", "Mortadella" });
   int escolha = -1;
   
   while(escolha)
      {
      escolha = menu.getEscolha();
 
      switch(escolha)
         {
 	 case 1: { insertBread();       }; break;
 	 case 2: { insertCheese();      }; break;
 	 case 3: { insertCheeseCottage();}; break;
 	 case 4: { insertCracker();     }; break;
 	 case 5: { insertFilledWafer(); }; break;
 	 case 6: { insertHam();         }; break;
 	 case 7: { insertMortadella();  }; break;
         };
      };
};
   

void MyProgram::insertBread()
{
   Bread * bread;
   string buffer;
   string type;
   float  weight;
   double cost;

   cout << "------------------------------\nInsert Bread:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   cout << "Weight ....: "; getline(cin, buffer); weight = stof(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   bread = new Bread(type, weight,cost);
   myMainList.insert(myMainList.end(), bread);
   
   cout << endl << bread->getDescricao() << " - US$ " << fixed << setprecision(2) << bread->getValor() << endl;   
};
   
   
void MyProgram::insertCheese()
	{
   	Cheese * cheese;
   	string buffer;
   	string type;
   	float  weight;
   	double cost;

   	cout << "------------------------------\nInsert Cheese:\n------------------------------\n";
   	cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   	cout << "Weight ....: "; getline(cin, buffer); weight = stof(buffer);
   	cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   	cin.clear();
   
   	cheese = new Cheese(type, weight,cost);
   	myMainList.insert(myMainList.end(), cheese);
   
   	cout << endl << cheese->getDescricao() << " - US$ " << fixed << setprecision(2) << cheese->getValor() << endl;  
	};
	
	
void MyProgram::InsertCheeseCottage()
	{
   	CheeseCottage * cheeseCottage;
   	string buffer;
   	string type;
   	float  weight;
   	double cost;

   	cout << "------------------------------\nInsert Cheese Cottage:\n------------------------------\n";
   	cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   	cout << "Weight ....: "; getline(cin, buffer); weight = stof(buffer);
   	cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   	cin.clear();
   
   	cheeseCottage = new CheeseCottage(type, weight,cost);
   	myMainList.insert(myMainList.end(), cheeseCottage);
   
   	cout << endl << cheeseCottage->getDescricao() << " - US$ " << fixed << setprecision(2) << cheeseCottage->getValor() << endl;  
	};
   
   
void MyProgram::insertCracker()
   {
   Cracker * cracker;
   string buffer;
   string type;
   int    amount;
   double cost;

   cout << "------------------------------\nInsert Cracker:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   cout << "Amount ....: "; getline(cin, buffer); amount = stoi(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   cracker = new Cracker(type, amount,cost);
   myMainList.insert(myMainList.end(), cracker);
   
   cout << endl << cracker->getDescricao() << " - US$ " << fixed << setprecision(2) << cracker->getValor() << endl;   
   };

void MyProgram::insertFilledWafer()
   {
   FilledWafer * filledWafer;
   string buffer;
   string type;
   string filling;
   int    amount;
   double cost;

   cout << "------------------------------\nInsert Filled Wafer:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, type); 
   cout << "Filling ...: "; getline(cin, filling);
   cout << "Amount ....: "; getline(cin, buffer); amount = stoi(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   filledWafer = new FilledWafer(type, filling, amount,cost);
   myMainList.insert(myMainList.end(), filledWafer);
   
   cout << endl << filledWafer->getDescricao() << " - US$ " << fixed << setprecision(2) << filledWafer->getValor() << endl;   
   };
   
void MyProgram::insertHam()
	{
   	Ham * ham;
   	string buffer;
   	string type;
   	float  weight;
   	double cost;

   	cout << "------------------------------\nInsert Ham:\n------------------------------\n";
   	cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   	cout << "Weight ....: "; getline(cin, buffer); weight = stof(buffer);
   	cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   	cin.clear();
   
   	ham = new Ham(type, weight,cost);
   	myMainList.insert(myMainList.end(), ham);
   
   	cout << endl << ham->getDescricao() << " - US$ " << fixed << setprecision(2) << ham->getValor() << endl;  
	};
	
   
void MyProgram::insertMortadella()
	{
   	Mortadella * mortadella;
   	string buffer;
   	string type;
   	float  weight;
   	double cost;

   	cout << "------------------------------\nInsert Mortadella:\n------------------------------\n";
   	cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   	cout << "Weight ....: "; getline(cin, buffer); weight = stof(buffer);
   	cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   	cin.clear();
   
   	mortadella = new Mortadella(type, weight,cost);
   	myMainList.insert(myMainList.end(), mortadella);
   
   	cout << endl << mortadella->getDescricao() << " - US$ " << fixed << setprecision(2) << mortadella->getValor() << endl;  
	};
	


  
void MyProgram::verifyArguments(int argc, char* argv[])
   {
   if(verboseMode)                     { delete verboseMode;         }; 
   if(shortMessageMode)                { delete shortMessageMode;    };  

   verboseMode      = NULL;
   shortMessageMode = NULL;
   
   for(int count = 1; count < argc; count++)
      {
      if(string(argv[count]) == "-v") { verboseMode      = new MyBooleanClass(true); };
      if(string(argv[count]) == "-s") { shortMessageMode = new MyBooleanClass(true); };
      };
   
   if(!verboseMode)
   		{ verboseMode      = new MyBooleanClass();     };  // default is false
   if(!shortMessageMode)
   		{ shortMessageMode = new MyBooleanClass();     };  // default is false
   }




