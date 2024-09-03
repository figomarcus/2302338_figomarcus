#include <iostream>
using namespace std;
class Parent
{
    protected: int protectid;

};
class Child : public Parent
{
    public: void setid(int id)
    {
        protectid = id;
    }
   void getid()
   {
    cout<<"This is from protected"<<protectid<<endl;
   }
};
int main()
{
    Child c1;
    c1.setid(1);
    c1.getid();
}  