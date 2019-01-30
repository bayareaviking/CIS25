/**
 *Program Name: cis25Fall2011L11101.cpp
 *Written By:   T. Nguyen
 */

#include <iostream>

using namespace std;

int myGlobal = 5;

class Fraction {
public:
  
  Fraction() { // default constructor
    num = 0;
    denom = 1;
    count = 0;
    cout << "\n\tCalling Fraction() default constructor!" << endl;
  }
  
  Fraction(int arg) { // convert constructor
    num = 1;
    denom = arg;
    count = 0;

    cout << "\n\tCaling Fraction() convert constructor!" << endl;
  }
  Fraction(const Fraction& arg) { // copy constructor
    num = arg.num;
    denom = arg.denom;
    count = 0;

    cout << "\n\tCalling Fraction() copy constructor!" << endl;

    //arg.num = 0;
  }

  Fraction(int arg1, int arg2) {
    num = arg1;
    denom = arg2;
    count = 0;
  }
  ~Fraction() { // destructor
    cout << "Removing a Fraction object --\n\tnum : " 
      << num << "\n\tdenom : " << denom << endl;
  }

  // get/set
  int getNum() const {

    //cout << "\nA function call!" << endl;

    //num = 5;

    return num;
  }

  void setNum(int arg) {

    num = arg;
    
    return;
  }

  int getDenom() const {
    //denom = 5;
    return denom;
  }

  void setDenom(int arg) {
    
    denom = arg;

    return;
  }

  Fraction add2Fraction(const Fraction& arg) { // member function

    /*
    temp->num = num * arg.denom + denom * arg.num;
    temp->denom = denom * arg.denom;
    */

    return Fraction(num * arg.denom + denom * arg.num,
                    denom * arg.denom);
  }

  Fraction add(const Fraction& arg) {

    num = num * arg.denom + denom * arg.num;
    denom = denom * arg.denom;

    return arg;
  }


  Fraction& operator+(const Fraction& arg) {
    num = num * arg.denom + denom * arg.num;
    denom = denom * arg.denom;

    
    //return Fraction(num * arg.denom + denom * arg.num,
    //                denom * arg.denom);

    return *this;
  }

  Fraction operator+(int arg) {

    return *this;
  }

  friend Fraction operator+(int, const Fraction&);
  friend ostream& operator<<(ostream&, const Fraction&);

private:
  int count;
  int num;
  int denom;
};

class Point {
public:

  Point() {
  }

  Fraction getX() const {
    return x;
  }

  void setX(const Fraction& arg) {
    x = arg;
    return;
  }

private:
  Fraction x;
  Fraction y;
};

class Rectangle {
public:


private:
  Fraction len;
  Fraction wid;
};


class AddressOfData {
public:
  AddressOfData() {

    int x;

    x = 5;

    dataPtr = &x;
  }
  int* dataPtr;
};

int extract1Digit(int);

char extract1Digit(double);

void swapInt(int, int);

void swap(int*, int*);

void swap(int&, int&);

void swap(double, double);

void printIfGreaterThan5(int);

int testSwitch01(int);

void menu01(void);

void displayDay(void);

int squareInt(int = 1);

int compareInt(int = 0, int = 0);

int compareInt(int);

void foo10(int*); // can I have a default argument here?

void foo11(int&); // can I have a default argument here?

int* squareInt01(int);

Fraction add2Fraction(const Fraction&, const Fraction&);

//ostream& operator<<(ostream&, const Fraction&);

//Fraction operator+(Fraction, int);

//Fraction operator+(int, const Fraction&);

int main() {

  Point pt1;

  pt1.getX();

  pt1.setX(Fraction(6));


  return 0; 
}

Fraction operator+(int left, const Fraction& right) {

  Fraction frTemp;

  /*
  frTemp.setNum(left * right.getDenom() + right.getNum());
  frTemp.setDenom(right.getDenom());
  */

  frTemp.num = left * right.denom + right.num;
  frTemp.denom = right.denom;

  return frTemp;
}

ostream& operator<<(ostream& out, const Fraction& arg) {

  out << "\n\tnum : " << arg.getNum() 
    << "\n\tdenom : " << arg.getDenom() << endl;

  return out;
}

Fraction add2Fraction(const Fraction& arg1, const Fraction& arg2) {

  Fraction temp;

  temp.setNum(arg1.getNum() * arg2.getDenom() + 
              arg1.getDenom() * arg2.getNum());
  
  temp.setDenom(arg1.getDenom() * arg2.getDenom());

  return temp;
}



void foo11(int& arg) {

  return;
}

void foo10(int* arg) {

  return;
}

int compareInt(int arg) {

  return arg;
}

int compareInt( int arg1, int arg2) {
  int temp;

  if (arg1 > arg2)
    temp = 1;
  else if (arg1 < arg2)
    temp = -1;
  else
    temp = 0;

  return temp;
}


int* squareInt01(int arg) {

  int temp;

  temp = arg * arg;

  return 0;
}


void displayDay() {
  cout << "Calling printDay()..." << endl;

  return;
}

void menu01() {
  int menuOption;

  do {
    cout << "\n******* MENU ******"
         << "\n*  1. Display day *"
         << "\n*  2. Quit        *" 
         << "\n*******************" << endl;

    cout << "Enter the option (1 or 2): ";
    cin >> menuOption;

    switch (menuOption) {
      case 1:
        displayDay();
        break;
      case 2:
        cout << "Having fun ..." << endl;
        break;
      default:
        cout << "\nWRONG OPTION ..." << endl;
    }

  } while (menuOption != 2);

  return;
}

int testSwitch01(int arg) {
  int temp;
  char cVar;

  temp = arg;
  switch (temp) {
    case 65:
    case 66:
    case 67:
      cVar = static_cast<char> (temp);
      cVar = (char) temp;
      cout << cVar << endl;
      break;
    //case 66:
    default:
      // do something
      temp = -9999;
  }

  return temp;
}

void printIfGreaterThan5(int arg) {
  if (arg > 5) {
    cout << arg << endl;
  } else {
    cout << arg << " is less than 5!" << endl;
  }

  return;
}

void swap(int& arg1, int& arg2) {
  int temp;

  temp = arg1;
  arg1 = arg2;
  arg2 = temp;

  return;
}

void swap(int* arg1, int* arg2) {
  int temp;

  temp = *arg1;
  *arg1 = *arg2;
  *arg2 = temp;

  return;
}

void swap(double arg1, double arg2) {

  return;
}

int extract1Digit(int arg) {

  return arg % 10;
}

char extract1Digit(double arg) {

  return 'a';
}
