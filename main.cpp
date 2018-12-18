#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void _out(string str)
{
    int strLength = 0;
    ofstream out("output.txt", ios_base::app);
    try {str.replace(str.find(":"),1, " Value: "); cout << "Key: " << str << endl; out << "Key: " << str << endl;}
    catch(std::out_of_range){cout << str << endl; out << str << endl; };


}

int main()
{
    string str;
    char ch = ':';
    bool yep = false;
    ifstream in("input.txt");
    //ofstream out("output.txt", ios_base::trunc); //Удалить содержимое, в случае, если нужно каждый раз очищать файл output
    //out.close();
    do
    {
        getline(in,str);
        if(in.eof())break;
        if(!in.is_open()){cout<<"Error. File \"input.txt\" not found"; break;}

        _out(str);

    }
    while(in);
    return 0;
}
