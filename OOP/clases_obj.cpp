#include <iostream>
using namespace std;

class first{
int a,b;
    public:
    void fr(){
        cin >> a;
        cin >> b;   
        int result = a + b;
        cout << result << endl;
    }
};

int main() {
    first a;
    a.fr();
}