#include<iostream>
#include<fstream>
using namespace std;

int main()
{
char name[200];
ofstream gtr;
gtr.open("NS.txt");
gtr << "Nissan\n";
gtr << "Skyline\n";
if (!gtr)
{
    cerr<< "file is not written properly";
    exit(-1);
}
ifstream gtrr35;
gtrr35.open("NS.txt");
gtrr35>>name;
while(gtrr35.eof()==0)
{
    cout<<name;
}
gtr.close();
gtrr35.close();

return 0;
}
