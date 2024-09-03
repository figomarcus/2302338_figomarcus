#include <iostream>
using namespace std;
class Animal
{
public:
void dna()
{
    cout<<"Taking dna from pre historical animal"<<endl;
}
};
class Cat: public Animal
{
public:
void display()
{
    cout<<"Existing is real time animal"<<endl;
}

};
int main()
{
    Cat c1,c2;
    c1.dna();
    c2.display();
    
}