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


int main()
{
Universe* uni[1];
uni[0] = new Plantes(10,"Earth","Plant");

for(int i=0; i<3; i++) {
    cout <<  "The size is :" << uni[i]->Size() << ", Name is : " << uni[i]->Name() << ",type is :"<<uni[i]->Type() << endl;
    delete uni[i];
}

}
