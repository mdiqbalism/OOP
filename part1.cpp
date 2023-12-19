#include<iostream>
// #include "Hero.cpp"
using namespace std;

/*
what is object?
--> that is a entity which have state/properties and behaviour.intance of class

Class --> user difined datatype 

* When Class is empty and we create object then the size of object is 1.

h/w --> padding and greedy alinment,const keyword(object creation,function) ,initialisation list 



*/

class Hero{
   
    //properties or data member
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;

    //default constructor
    Hero(){
        cout<<"Constructor called " << endl; 
        name = new char[100];
    }

    //Paramerterised constructor 
    Hero(int health){
        this -> health = health;
    }

    Hero(int health, char level){
       this -> level = level;
        this -> health = health;
    }

    //copy constructor
    Hero(Hero& temp){
        cout << "Copy constructor called" <<endl;
        this->health = temp.health;
        this->level = temp.level;
    }


    void print(){

        cout << "health " << this->health << endl;
        cout << "level " << this->level << endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        //condtion can apply in setter 
        health =h;
    }

    void setLevel(char ch){
        level = ch;
    }

    // void setName(char name[] ) {
    //     strcpy(this->name,name);
    // }

    static int random() {
       return  timeToComplete ;
    }
    
    //Destructor
    ~Hero(){
        cout << "Destructor is call" << endl;
    }

    
};

int Hero::timeToComplete = 5;

int main(){

    cout << Hero::timeToComplete << endl;

    Hero a;

    cout << a.timeToComplete << endl;





    // //static 
    // Hero a;

    // //Dynamically
    // Hero *b = new Hero();
    // delete b;


    // Hero hero1;
    // hero1.setHealth(12);
    // hero1.setLevel('D');
    // char name[7] = "Babbar";
    // hero1.setName(name);

    // Hero Ironman(70,'C');
    // Ironman.print();

    // //Copy constructor
    // Hero Spiderman(Ironman);
    // Spiderman.print();

//  object created statically
//     Hero Ironman(10);
//     cout << "Address of ramesh " <<&Ironman <<endl;
//     Ironman.getHealth();
   
//     dynamically
//     Hero *h = new Hero;
//    Hero *h = new Hero(10);
//    h->print();
//    Hero temp(33,'B');
//    temp.print();



    //static allocation
    // Hero a;
    // a.setHealth(80);
    // a.setLevel('B');
    // cout << "Level is  " << a.level << endl;
    // cout << "health is " << a.getHealth() << endl;

    // //dynamically  allocation
    // Hero *b = new Hero;
    // b->setHealth(70);
    // b->setLevel('A');

    // cout << "Level is  " << (*b).level << endl;
    // cout << "health is " << (*b).getHealth() << endl;

    // cout << "Level is  " << b->level << endl;
    // cout << "health is " << b->getHealth() << endl;



    //creation of Object 
    // Hero Ironman;
    // cout << "size of Ironman is " << sizeof(Ironman) << endl;
    // cout<<"Ironman health is "<< Ironman.getHealth() << endl;
    // Ironman.setHealth(70);
    // Ironman.level = 'A';

    // cout<<"Health is:" << Ironman.getHealth()<< endl;
    // cout<<"Level is: " << Ironman.level <<endl;

    return 0;
}
