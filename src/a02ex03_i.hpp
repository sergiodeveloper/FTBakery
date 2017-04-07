/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
*/

#ifndef A02EX03_I_H
   #define A02EX03_I_H

#include <string>
#include "a02ex03_h.hpp"

using namespace std;

class CheeseCottage : public Cheese
   {
   private:
      string tipo;
      float peso;
      
   public:
     CheeseCottage(string, float, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */
