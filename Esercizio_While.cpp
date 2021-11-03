/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int contatore=0;
    
    do{
        cout<<"Il contatore è ripetuto per la " <<contatore + 1<< " volta"<<endl;
        contatore++;
        
    }while (contatore < 200);

    return 0;
}
