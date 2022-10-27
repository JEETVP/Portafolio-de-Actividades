#include <iostream>
#include <string>
#include <conio.h>
#include <math.h>
#include <stdio.h>
using namespace std;

int main()
{
    float l1,l2,l3,perimetro,area;
    int x=0;
    cout<< "Inserta el lado 1"<<endl;
    cin>>l1;
    cout<< "Inserta el lado 2"<<endl;
    cin>>l2;
    cout<< "Inserta el lado 3"<<endl;
    cin>>l3;
    cout<<"1.Tipo de Triangulo, 2.Perimetro 3. Area"<<endl;
    cin>>x;
    switch (x)
    {
        case (1):
        if (l1 == l2 )
        {
            
            if (l2 == l3) 
            {
                cout<<"el triangulo es equilatero"<<endl;
            }
        else if (l2==l3)
        {
            cout<< "el triangulo es isosceles"<<endl;
        }
        else 
        cout<<"el triangulo es escaleno"<<endl;
        }
       break;
        case (2):
        cout<<"el perimetro de los lados es "<<l1+l2+l3<<endl;
        break;
        case (3):
        perimetro=l1+l2+l3;
        perimetro=perimetro/2;
        area= sqrt (perimetro*(perimetro-l1)*(perimetro-l2)*(perimetro-l3));
        cout<<"el area es "<<area<<endl;
        break;
    }

}
