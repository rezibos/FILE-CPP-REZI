#include <iostream>
using namespace std;

class Rumah
{
    public:
    void mama();
}mainRumah;

void Rumah::mama(){
    cout << "10000000000" << endl;
}

class Kandang : public Rumah
{

};

int main()
{
    mainRumah.mama();
}
