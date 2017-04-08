/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
*/

#include <string>
#include "Beer.hpp"

using namespace std;

class Corona : public Beer
   {
   private:
      string tipo;
      int unidades;
      
   public:
     Corona(string, int, double);
      virtual string getDescricao();
   };
   
/* fim de arquivo */
