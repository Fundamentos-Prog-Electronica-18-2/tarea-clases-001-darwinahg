#include <iostream>
#include <fstream>
#include <sstream>
#include <stdio.h>

using namespace std;

int convertirStringToInt(string v){
    // proceso para convertir un cadena en entero

    int i;
    std::istringstream(v) >> i;
    return i;


}

int main()
{

    string s;
    int suma = 0;
    ifstream f( "data1.txt" );
    if ( f.is_open() )


    {
        // getline( f, s );

        while( !f.eof() )
        {
            getline( f, s );
            if (convertirStringToInt(s) % 2 == 0){
            suma = suma + convertirStringToInt(s);
            cout << s << endl;

        }
        }
    }else{
        cerr << "Error de apertura del archivo." << endl;
    }
    cout << suma;
    return 0;
}
