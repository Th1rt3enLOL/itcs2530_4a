#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(int argc, char* argv[])
{
    //declare variables
    char c;
    int a = 0, e = 0, i = 0, o = 0, u = 0, total = 0, x = 0, y = 0, z = 0;
    //format header
    cout << setw(60) << setfill('*') << left << "" << endl
        << setw(12) << "" << setw(48) << " Welcome to my Letter Count Program " << endl
        << setw(60) << "" << endl
        << endl << setfill('.');
    //print error
    if (argc < 2)
    {
        cout << "Error with input args..." << endl;
    }
    else
    {
        cout << "Analyzing file '" << argv[1] << "'...\n\n";
    }
    //create file object
    ifstream ifile;
    ifile.open(argv[1]);
    //loop to read file
    while (!ifile.eof())
    {
        //read character
        ifile >> c;
        //switch to a single case
        c = tolower(c);
        //decision structure to match char to vowel
        if (c == 'a')
        {
            a += 1;
        }
        else if (c == 'e')
        {
            e += 1;
        }
        else if (c == 'i')
        {
            i += 1;
        }
        else if (c == 'o')
        {
            o += 1;
        }
        else if (c == 'u')
        {
            u += 1;
        }
        else if (c == 'x')
        {
            x += 1;
        }
        else if (c == 'y')
        {
            y += 1;
        }
        else if (c == 'z')
        {
            z += 1;
        }
    }
    //close file
    ifile.close();
    //find total
    total = a + e + i + o + u;
    //output results
    cout << setw(60) << "The number of A's: " << a << endl
        << setw(60) << "The number of E's: " << e << endl
        << setw(60) << "The number of I's: " << i << endl
        << setw(60) << "The number of O's: " << o << endl
        << setw(60) << "The number of U's: " << u << endl
        << setw(60) << "The vowel count is: " << total << endl
        << setw(60) << "The number of X's: " << x << endl
        << setw(60) << "The number of Y's: " << y << endl
        << setw(60) << "The number of Z's: " << z << endl;
}