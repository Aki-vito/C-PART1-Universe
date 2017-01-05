#include <iostream>

using namespace std;
class Universe {
public:
      virtual int Size() = 0;
      virtual const char* Name() = 0;
      virtual const char* Type() = 0;
};
class Plantes : public Universe {
int size;
const char* name;
const char* type;
public:
       Plantes(int _size,const char* _name,const char* _type) {size = _size; name = _name;type = "Plant";}
       int Size(){return size;};
       const char* Name(){return name;};
       const char* Type(){return type;};
};
class Stars : public Universe{
int size;
const char* name;
const char* type;
public:
       Stars(int _size,const char* _name,const char* _type) {size = _size;name = _name;type = "Star";}
       int Size(){return size;};
       const char* Name(){return name;};
       const char* Type(){return type;};
};
class Black_Hole : public Universe{
int size;
const char* name;
const char* type;
public:
       Black_Hole(int _size,const char* _name,const char* _type) {size = _size;name = _name;type = "Black Hole";};
       int Size(){return size;};
       const char* Name(){return name;};
       const char* Type(){return type;};



};
int main()
{
Universe* uni[3];
uni[0] = new Plantes(10,"Earth","P");
uni[1] = new Stars(15,"Sun","S");
uni[2] = new Black_Hole(100,"Centaurus_A","B");

for(int i=0; i<3; i++) {
    cout <<  "The Size is: " << uni[i]->Size() << ", Name is : " << uni[i]->Name() << ",Type is : "<<uni[i]->Type() << endl;
    delete uni[i];
}

}
//*This is under-Development project to create a small encyclopidia about Universe;




