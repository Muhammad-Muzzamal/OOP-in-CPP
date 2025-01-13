#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int n = 10;
    char ch = '*';
    double d = 38.125;
    ofstream file("G:\\test.txt");
    if (!file)
    {
        cout << "file opening error: " << endl;
        exit(1);
    }
    file << n << " " << ch << " " << d;
    file.close();

    return 0;
}