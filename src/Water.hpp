/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "Liquid.hpp"

using namespace std;

class Water : public Liquid
   {
   private:
      string tipo;
      int    unidades;
      
   public:
      Water(string, int, double);
      virtual string getDescricao();
   };
   
/* fim de arquivo */
