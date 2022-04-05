#include <iostream>

// task 1. Создать класс Person (человек) с полями: имя, возраст, пол и вес. Определить методы
// переназначения имени, изменения возраста и веса. Создать производный класс Student
// (студент), имеющий поле года обучения. Определить методы переназначения и
// увеличения этого значения. Создать счетчик количества созданных студентов. В функции
// main() создать несколько (не больше трёх) студентов. Вывести информацию о них.


class Person {
protected:
    std::string name;
    int age;
    std::string gender;
    int weigth;
    Person(std::string Name, int Age, std::string Gender, int Weigth) :
        name(Name), age(Age), gender(Gender), weigth(Weigth) {}
public:
    void SetName(std::string name) { this->name = name; };
    void SetAge(int age) { this->age = age; };
    void SetGender(std::string gender) { this->gender = gender; };
    void SetWeigth(int weigth) { this->weigth = weigth; };
    void PrintInfo() { std::cout << gender << " " << name << " " << age << " " << weigth; }
};
class Student : Person {
    int YearOfStudy;
    int Counter = 0;
public:
    Student(std::string Name, int Age, std::string Gender, int Weigth, int YearOfStudy) :
        Person(Name, Age, Gender, Weigth)
    {
        Counter++;
        this->YearOfStudy = YearOfStudy;
    };
    void PrintInfoStudent() {
        std::cout << gender << " " << name << " " << age << " " << weigth << " " << YearOfStudy << " " << Counter << std::endl;
    };
};






// task 2 Создать классы Apple (яблоко) и Banana (банан), которые наследуют класс Fruit (фрукт).
// У Fruit есть две переменные-члена: name (имя) и color (цвет). Добавить новый класс
// GrannySmith, который наследует класс Apple.
// int main()
//{
  //  Apple a("red");
    //Banana b;
    //GrannySmith c;

    //std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
    //std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
    //std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";

    //return 0;


class Fruit {
protected:
    std::string name;
    std::string color;

public:
    Fruit(std::string Name, std::string Color) :
        name(Name), color(Color) {}
    std::string getName() {
        this->name = name;
        return (name);
    };
    std::string getColor() {
        this->color = color;
        return (color);
    };
};
class Apple : public Fruit {
public:
    Apple(std::string Color = "red",
        std::string Name = "Apple") : Fruit(Name, Color) {}
};
class Banana : public Fruit {
public:
    Banana(std::string Name = "Banana",
        std::string Color = "yellow") : Fruit(Name, Color) {}
};
class GrannySmith : public Apple {
public:
    GrannySmith() : Apple("green", "GrannySmith") {}
};




int main()
{
    Student s1("Ivan", 25, "man", 98, 2000);
    s1.PrintInfoStudent();
    Student s2("Egor", 22, "man", 76, 2002);
    s2.PrintInfoStudent();

    Apple a("red");
    Banana b;
    GrannySmith c;

    std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
    std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
    std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";

    return 0;

};

//Для игры в блекджек мы создадим три основных класса а именно: Игроки, Механика игры, Карты.
// 
//1.В классе Игроки будут подсчитываться основные значения которые связанны конкретно с игроками это
//карты которые на руках у игрока и фишки. Из чего следует что карты игрока и фишки будут подклассами калсса Игроки.

//2.Класс карты будет отвечать непосредственно за карты которые раздаёт крупье, карты у самого крупье и 
//карты которые находятся в колоде.Тут у нас получается опять 3 подкласса: карты в колоде, карты крупье,
//карты которые получит игрок.

//3.Класс механики игры будет основным классом этой игры. Этот клас будет отвечать за подсчет
// количества очков, подсчет ставок и принятие решения о победе игрока или крупье.
