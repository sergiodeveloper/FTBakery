/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
*/

#include <string>
#include "Beer.hpp"

using namespace std;

class Brahma : public Beer
   {
   public:
     Brahma(string, int, double);
     virtual string getDescricao();
   };
   
/* fim de arquivo */
