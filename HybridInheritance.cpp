#include<iostream>
using namespace std;
/*
    combination of more than 1 type of inheritance 
*/

class Animal {

    public:
    int age;
    int weight;

    public:
    void speak(){
        cout << "Speaking " << endl;
    }
};

class Dog: public Animal{

};

class GermanShephere: public Dog{

};

int main(){

    GermanShephere g;
    g.speak();
    
    return 0;
}