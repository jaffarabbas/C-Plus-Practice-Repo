#include <iostream>
#include "darklord.cpp"
using namespace std;

class encap{
    private: int a;//private variables

    public:
    int set(int x){
        a = x;
    }

    int get(){
        return a;
    }
};

class tester{
    public:
      void show(){
         encap obj;
         int temp = inscn();
        //  cin >> temp;
         obj.set(temp);
         cout << obj.get() << endl;
      }
};

int main(int argc, char const *argv[])
{
    tester test;
    test.show();
    return 0;
}
