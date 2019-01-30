/**
  * Program Name: cisFall2011MarcusLarssonLab4CodeEx1.cpp
  * Written By:   Marcus Larsson
  * Due Date:     10/18/2011
  */
#include <iostream>
using namespace std;

void assignmentInfoMarcusLarsson(int, int, int, int);
void menu(void);

class MarcusFraction {
public:

   MarcusFraction() {
      num = 0;
      denom = 1;
   }

   MarcusFraction(int arg) {
      num = 1;
    if(arg > 0) {
      denom = arg;
    } else {
      num = 0;
      denom = 1;
    }
   }
  
   MarcusFraction(int arg1, int arg2) {
      num = arg1;
      if(arg2) {
        denom = arg2;
      } else {
        denom = 1;
      }
   }

   MarcusFraction(const MarcusFraction& arg) {
      num = arg.num;
      denom = arg.denom;
   }

   ~MarcusFraction() {
      cout << "Calling Destructor." << endl;
      print();
   }

   void setNum(int arg) {
      num = arg;

      return;
   }

   void setDenom(int arg) {
      if(arg) {
      denom = arg;
      } else {
         num = 0;
         denom = 1;
      }

      return;
   }
  
   int getNum() const {
      return num;
   }
  
   int getDenom() const {

      return denom;
   }

  
   void add(const MarcusFraction& arg) {
      int argNum = arg.num;
      int argDenom = arg.denom;
    
      num *= argDenom;
      argNum *= denom;
      denom *= argDenom;
      num = num + argNum;

      return;    
   }

   void subtract(const MarcusFraction& arg) {
      int argNum = arg.num;
      int argDenom = arg.denom;
    
      num *= argDenom;
      argNum *= denom;
      denom *= argDenom;
      num -= argNum;

      return;      
   }

   void multiply(const MarcusFraction& arg) {
      num *= arg.num;
      denom *= arg.denom;

      return;
   }

   void divide(const MarcusFraction& arg) {
      num *= arg.denom;
      denom *= arg.num;

      return;
   }

   void print() const {
      cout << endl << "The fraction is : " << num << "/" << denom << " . " << endl;

      return;
   }

private:
   int num;
   int denom;
};

int main() {

	assignmentInfoMarcusLarsson(5, 1, 10, 18);
	menu();

	return 0;
}
// Function to call menu options
void menu() {
   int input;
   input = 0;

   MarcusFraction FractionA(6, 13);
   MarcusFraction FractionB(7, 9);
   MarcusFraction FractionC(6);
   MarcusFraction FractionD(8, 15);

   while(input != 6) {
      cout << "\n***************************" << endl
           << "*          MENU           *" << endl
           << "*                         *" << endl
           << "* 1.Calling add()         *" << endl
           << "* 2.Calling subtract()    *" << endl
           << "* 3.Calling multiply()    *" << endl
           << "* 4.Calling divide()      *" << endl
           << "* 5.Calling print()       *" << endl
           << "* 6.Quit                  *" << endl
           << "*                         *" << endl
           << "***************************" << endl
           << "\nSelect an option (Use integer) : ";
      cin >> input;

	 // Typcasting input to prevent errors
		input = (int) input;

      switch(input) {
      case 1 :
         cout << endl 
              << "Calling add(). . . " << endl;           
         FractionA.add(FractionB);
         break;
      case 2 :
         cout << endl
              << "Calling subtract(). . . " << endl;
         FractionA.subtract(FractionC);
         break;
      case 3 :
		  cout << endl
             << "Calling multiply(). . . " << endl;
        FractionA.multiply(FractionC);
       break;
     case 4 :
        cout << endl
             << "Calling divide(). . . " << endl;
        FractionA.divide(FractionD);
        break;
     case 5 :
        cout << endl
             << "Calling print(). . . " << endl;
        FractionA.print();
        break;
     case 6 :
        cout << endl
             << "Have fun. . ." << endl;
        break;
     default :
        cout << endl
             << "That is not a menu option!" << endl;
        break;    
      }
   }  

   return;
}
// Function to display assignment information
void assignmentInfoMarcusLarsson(int lab, int ex, int month, int day) {

  cout << "Class information" << endl
       << "   CIS 25 - C++ Programming" << endl
       << "   Laney College" << endl
       << endl
       << "Assignment Information --" << endl
       << "   Assignment Number:   Lab 0" << lab
       << ", - Code Exercise #" << ex << endl
       << "   Written by:          Marcus Larsson" << endl
       << "   Submitted Date:      " << month
       << "/" << day << "/2011" << endl
       << endl;

  return;
}
