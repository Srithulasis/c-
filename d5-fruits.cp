#include <iostream>

using namespace std;



class Fruit

{

public:

  static int fruitCounter;

  Fruit()

  {

    fruitCounter++;

  }

  ~Fruit()

  {

    fruitCounter--;

  }

};



class Apples: public Fruit

{

public:

  static int applesCounter;

  Apples():Fruit()

  {

    applesCounter++;

  }

  ~Apples()

  {

    applesCounter--;

  }



};



class Mangoes: public Fruit

{

public:

  static int mangoesCounter;

  Mangoes():Fruit()

  {

    mangoesCounter++;

  }

  ~Mangoes()

  {

    mangoesCounter--;

  }

};



int Fruit::fruitCounter = 0;

int Apples::applesCounter = 0;

int Mangoes::mangoesCounter = 0;



int main()

{

  Apples firstApple,secondApple,thirdApple;

  Mangoes firstMango,secondMango,thirdMango,fourthMango;

  cout << "Total number of fruits: " << Fruit::fruitCounter << endl;

  cout << "Number of apples: " << Apples::applesCounter << endl;

  cout << "Number of mangoes: " << Mangoes::mangoesCounter << endl;

  return 0;

}
output:
Total number of fruits:2
1.Number of apples:5
2.Number of mangoes:8
enter the choice:1
total number of apples=5



