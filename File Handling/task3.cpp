#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n;
    char ch;
    double d;
    ifstream file("G:\\OOP-in-CPP\\File Handling\\Raw\\test.txt");
    if (!file)
    {
        cout << "File Opening Error.";
        exit(0);
    }
    file >> n >> ch >> d;
    cout << "The Content of file are as follows: " << endl;
    cout<<n<<endl<<ch<<endl<<d<<endl;
    file.close();

    return 0;
}