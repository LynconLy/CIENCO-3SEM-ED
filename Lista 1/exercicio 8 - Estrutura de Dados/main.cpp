#include <iostream>

using namespace std;

int main()
{
   int voto;
   float cont1 = 0, cont2 = 0, contn = 0, contb = 0;

   cout << "Candidato 1 = 1\nCandidato 2 = 2\nNulo = 3\nBranco = 4\n";

   cout << "Insira seu voto: ";
   cin >> voto;

   do
   {
       switch(voto)
       {
         case 1:
            {
               cont1++;
            }
         break;
            case 2:
               {
                  cont2++;
               }
               break;
                case 3:
                    {
                        contn++;
                    }
                    break;
                        case 4:
                        {
                            contb++;
                        }
                        break;
                        default:
                        {
                            cout << "O numero informado não esta cadastrado";
                        }
       }
       while(voto != 0)

       cout << "Os votos no candidato 1 foram: " << cont1;
       cout << "Os votos no candidato 2 foram: " << cont2;
       cout << "Os votos nulos foram: " << contn;
       cout << "Os votos em Branco foram: " << contb;
   }
}
