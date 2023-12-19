#include<iostream>
using namespace std;

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