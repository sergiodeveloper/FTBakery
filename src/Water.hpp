/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "a02ex03_b.hpp"

using namespace std;

class Water : public Food
   {
   private:
      string tipo;
      int    unidades;
      
   public:
      Water(string, int, double);
      virtual string getDescricao();
   };
   
/* fim de arquivo */
