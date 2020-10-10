#include <iostream>
#include "darklord.cpp"
using namespace std;

class tester{
    int arr[5];
    public:void test(){
         int i=0;//i = 1
        while(true){
            i++;// i = 1 + 1 .....
                arr[i] = inscn();
                cout << i << endl;
                if(i < 5){
                    break;
                }       
        }
        for(int x : arr){
            cout << x <<endl;
        }
    }

    public:tester(){
        test();
    }
};

int main(int argc, char const *argv[])
{
    tester test;
    return 0;
}
