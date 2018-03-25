//Tim
//March 14 2018
//Code uses function to translate letters into their 
//corresponding numbers

#include <iostream>
using namespace std;

//processing for each letter in string
int translateLetter(char ch)
{
   switch (ch)
   {  //Keypad #2
      case 'a':
      case 'A':
      case 'b':
      case 'B':
      case 'c':
      case 'C':
         return '2';
      break;

      //Keypad #3
      case 'd':
      case 'D':
      case 'e':
      case 'E':
      case 'f':
      case 'F':
         return '3';
      break;

      //keypad #4
      case 'g':
      case 'G':
      case 'h':
      case 'H':
      case 'i':
      case 'I':
         return '4';
      break;

      //Keypad #5
      case 'j':
      case 'J':
      case 'k':
      case 'K':
      case 'l':
      case 'L':
         return '5';
      break;

      //Keypad #6
      case 'm':
      case 'M':
      case 'n':
      case 'N':
      case 'o':
      case 'O':
         return '6';
      break;

      //Keypad #7
      case 'p':
      case 'P':
      case 'q':
      case 'Q':
      case 'r':
      case 'R':
      case 's':
      case 'S':
         return '7';
      break;

      //Leypad #8
      case 't':
      case 'T':
      case 'u':
      case 'U':
      case 'v':
      case 'V':
         return '8';
      break;

      //Keypad #9
      case 'w':
      case 'W':
      case 'x':
      case 'X':
      case 'y':
      case 'Y':
      case 'z':
      case 'Z':
         return '9';
      break;

      //Else return input
      default:
         return ch;
      break;
   }
}

int main()
{
   //init
   bool        exitFlag = 1;   //loop while 'y' or 'Y'
   const char contChar1 = 'y'; //continue loop char
   const char contChar2 = 'Y'; //continue loop char

   //input vars
   char       loopChar;        //'Y' or 'y' to continue loop
   string     phone;           //Phone number input string

   //output vars
   int        len;             //length of string
   int        i;               //iterate over chars of string
   char       phoneChar;       //phone.at(i)
   char       ch;              //char in string
   
   do
   {
      //inputs
      cout << "\nEnter a string: ";
      cin  >> phone;
      
      //processing
      len = phone.length();

      for (i = 0; i < len; i++)
      {
         phoneChar = phone.at(i);
         ch        = translateLetter(phoneChar);
         cout      << ch;
      }

      cout << endl;
      cout << "\nWant to process another phone? [Y]es, [N]o: ";
      cin  >> loopChar;

      exitFlag = (loopChar == contChar1||loopChar == contChar2) ? 1:0;
      

   } while (exitFlag == 1);

   cout << "\nHave a nice day!" << endl;

   return 0;
}
