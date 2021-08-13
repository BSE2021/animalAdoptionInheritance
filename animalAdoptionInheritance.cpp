// animalAdoptionInheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Animal {

public: 
    string id;
    string name;
    string breed;
    int age;
    int height;
    int weight;
    static int objCount;

public:
    Animal(string i, string n, string b, int a, int h, int w) {
        id = i;
        name = n;
        breed = b;
        age = a;
        height = h;
        weight = w;
        objCount++;
    }
public:
    void getData() {     
        cout << "Enter id, name and breed: ";
        cin >> id >> name >> breed;
        cout << "\nEnter age, height, weight";
        cin >> age >> height >> weight;
    }

    void showData() {
        cout << "Id: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Breed: " << breed << endl;
        cout << "Age: " << age << endl;
        cout << "Height: " << height << endl;
        cout << "Weight: " << weight << endl;
    }
};

int Animal:: objCount = 0;
//
//class Dog: private Animal {
//protected: 
//    int lifeSpan;
//    string type;
//    string diet;
//
//public:
//    Dog(int l=15, string t="", string d="") {
//        lifeSpan = l;
//        type = t;
//        diet = d;
//    }
//
//    void getDog() {
//        getData();
//        cout << "\nEnter the life span of the dog: ";
//        cin >> lifeSpan;
//        cout << "\nEnter the type of dog (watch-dog, police-dog, guide-dog): ";
//        cin >> type;
//        cout << "\nEnter the diet of the dog: ";
//        cin >> diet;
//    }
//
//    void showDog() {
//        showData();
//        cout << "\n";
//
//    }
//    //friend class Cat;
//
//
//};
//
//class Service : public Dog {
//public:
//    void showService() {
//        cout << "Life span: " << lifeSpan;
//        cout << "Name of the dog: " << name;
//
//    }
//};
//
//class Cat {
//
//public:
//    void showCat(int lifeSpan) {
//        
//            
//    }
//};

int main()
{
    Animal a("d101","Browny", "German Shepherd", 5, 40, 25);
    a.showData();
    Animal b("d102", "Blacky", "Dalmatian", 10, 50, 35);
    b.showData();
    Animal c("d103", "Sweety", "Doberman", 12, 60, 45);
    c.showData();
    cout << "\n the number of objects in the Animal class is " << Animal::objCount;
    /*Dog d;
    Service s;
    s.showService();*/
}
