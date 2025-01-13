#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char city[50];
    ofstream file("G:\\OOP-in-CPP\\File Handling\\Raw\\city.txt");
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the name of an city: ";
        cin >> city;
        file << city << endl;
    }
    file.close();

    return 0;
}