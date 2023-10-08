#include"Header.h"
/*дз:
* 1. Создать класс Попугай на основе Animal, реализовать нужные интерфейсы* 
  2. Создать класс Самолет, и реализовать нужный интерфейс.
* 3. Создать функцию, который может работать и с объектом класса самолет, и с объектом класса попугай!!*/

class Ship :public ISwim
{
public: 
    virtual void Swim()
    {
        cout << "Ship is a water vehicle\n";
    }
};
void MyFuncSwim(ISwim* ptr)
{
    ptr->Swim();
}

class Airplane :public IFly
{
public:
    virtual void Fly()
    {
        cout << "[Airplane is an air vehicle]\n";
    }
};
void MyFuncFly(IFly* ptr)
{
    ptr->Fly();
}

int main()
{
    Parrot obj("Cockatoo", 2, "Australia");
    Animal* ptr = &obj;
    ptr->Print();
    ptr->Continent();
    ptr->Eat();

    MyFuncFly(&obj);
    Airplane ap;
    MyFuncFly(&ap);
}
