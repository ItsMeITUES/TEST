#include<iostream>
#include<fstream>
#include<iomanip>
#define fi(i, a, b) for(int i = a; i <= b; i++)

using namespace std;

string filename;

void DoST(const char* path)
{
    ifstream infile;
    infile.open(path);

    string s;
    getline(infile, s);
    if(infile) cout << s;

    infile.close();
}

int main()
{
//    cin >> filename;
    filename = "main.bin";
    DoST(&filename[0]);
}
