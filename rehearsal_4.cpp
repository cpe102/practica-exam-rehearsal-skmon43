#include <iostream>
#include <string>

using namespace std;

//Write compress() here.
string compress(string in){
    string x = "";
    cout << x;

    char out[in.size()];
    
    int i = 0, c = 0;


    while(i < in.size()){
        if ((i) % 3 == 0){
            out[c] = in[i];
            c++;
        }
        i++;
    }

    return out;
}

int main()
{
    string a = compress("ABCDEFGHIJKLMN");
    string b = compress("CPECMU");
    string c = compress("HelloWorld");
    string d = compress("BNK48");
    string e = compress("COMPROG261102");
    string f = compress("A");
    string g = compress("X");
    string h = compress("ABC");
    string i = compress("ABCD");
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n";

}
