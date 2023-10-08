#pragma once
#include<iostream> 
#include<string.h> 
using namespace std;

struct IFly   // интерфейс для летающих 
{
	virtual void Fly() = 0;
};
struct ISwim   // интерфейс для плавающих 
{
	virtual void Swim() = 0;
};

class Animal  // абстрактный класс !! 
{
protected:
	string name;
	int kg;
public:
	Animal() = default;
	Animal(const char* n, int k)
	{
		name = n;
		kg = k;
	}
	void Print()
	{
		cout << "Name: " << name << "\nKg: " << kg << endl;
	}
	virtual void Continent() = 0;
	virtual void Eat() = 0;
	virtual void Sound() = 0;
};

class Penguin : public Animal, public ISwim
{
	string continent;

public:
	Penguin() = default;
	Penguin(const char* n, int kg, const char* cont) :Animal(n, kg)
	{
		continent = cont;
	}
	// реализация интерфейса IAnimal 
	virtual void Eat()
	{
		cout << name << " eats fish\n";
	}
	virtual void Sound()
	{
		cout << name << " makes sounds\n";
	}
	virtual void Continent()
	{
		cout << name << " lives in " << continent << endl;
	}
	// реализация интерфейса ISwim 
	virtual  void Swim()
	{
		cout << name << " can swim\n";
	}
};

class Parrot : public Animal, public IFly
{
	string continent;
public:
	Parrot() = default;
	Parrot(const char* n, int kg, const char* cont) :Animal(n, kg)
	{
		continent = cont;
	}
	virtual void Eat()
	{
		cout << name << " eats seeds\n";
	}
	virtual void Sound()
	{
		cout << name << " makes sounds\n";
	}
	virtual void Continent()
	{
		cout << name << " lives in " << continent << endl;
	}
	virtual void Fly()
	{
		cout <<"[" << name << " can fly]\n";
	}
};