#include <iostream>
using namespace std;
class Tank
{
private:
    int gallons;

public:
    Tank()
    {
        gallons = 50;
    }
    Tank(int gal)
    {
        gallons = gal;
    }
    int getGallons()
    {
        return gallons;
    }
};
int main()
{
    Tank storage[3] = {10, 20};
    for (int index = 0; index < 3; index++)
        cout << storage[index].getGallons() << endl;
    return 0;
}