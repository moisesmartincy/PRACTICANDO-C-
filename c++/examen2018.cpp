#include <iostream>

using namespace std;

int main()
{
    int n;
    do
    {
    cout << "\nEXAMEN ETN 307 PRIMER PARCIAL\n \n";
    cout << "SELECCIONE EL EJERCICIO\n \n";
    cout << "1. EJERCICIO 1" << endl;
    cout << "2. EJERCICIO 2" << endl;
    cout << "3. EJERCICIO 3" << endl;
    cout << "4. EJERCICIO 4" << endl;
    cout << "5. EJERCICIO 5" << endl;
    cout << "6. EJERCICIO 6" << endl;
    cout << "7. EJERCICIO 7" << endl;
    cout << "8. SALIR\n" << endl;
    cin >> n;
    switch(n)
    {
    case 1:


        {int n,i,a=0,b=2,c=3,ST=0;
        cout << "Introducir n" << endl;
        cin >>n;
        for (i=0;i<n;i++)
        {
            if (i%3==0)
            {
                cout << a << " , ";
                ST=ST+a;
                a--;
            }
            else
            {
                if ((i-1)%3==0)
                   {
                    cout << b << " , ";
                    ST=ST+b;
                    b=b+2;
                   }
                   else
                   {
                       cout << c << " , ";
                       ST=ST+c;
                       c=c+3;

                   }

            }
            if (i==(n-1))
                cout << "..." << endl;
        }
        cout << "La suma de la serie es: " << ST <<endl;
        break;}
    case 2:
        {int n,i,j=1,h=1,k=0,a,b,c,d=0,ST=0;
        cout << "Introducir n" << endl;
        cin >>n;
        for (i=0;i<n;i++)
        {
            if (i%6==0)
            {
                a=j*5;
                j++;
                ST=ST+a;
                cout << a << " , ";
            }
            else
            {
                if ((i+5)%6==0 || (i+4)%6==0)
                {
                    b=h*2;
                    h++;
                    ST=ST+b;
                    cout << b << " , ";
                }
                else
                {
                    k++;
                    if (k<=3)
                    {
                        c=d+1;
                        ST=ST+c;
                        cout << c << " , ";
                    }
                    else
                    {
                        i--;
                        k=0;
                        d++;
                    }
                }
            }
            if (i==(n-1))
                cout << "..." << endl;
        }
        cout << "La suma de la serie es: " << ST <<endl;
        break;}
    case 3:
        {int n,i,ST=0,b=0,j=1,a;
        cout << "Introducir n" << endl;
        cin >>n;
        cout << "ST = ";
        for (i=0;i<n;i++)
        {
            if (i%3==0)
            {
                a=j*7;
                j++;
                ST=ST+a;
                cout << "+" << a << " ";
            }
            else
            {
                b--;
                ST=ST+b;
                cout << b << " ";
            }
            if (i==(n-1))
                cout << " " << endl;
        }
        cout << "Cuya suma es: " << ST <<endl;
        break;}
    case 4:
        {int n,T1=-1,T2=0,i,j;
        double fac,exp,num,den,x,y,z,ST=0;
        cout << "Introduzca n" << endl;
        cin >> n;
        cout << "Introduzca x" << endl;
        cin >> x;
        cout << "Introduzca y" << endl;
        cin >> y;
        cout << "ST = ";
        for(i=0;i<n;i++)
        {
            T1=T1+3;
            T2=T2+3;
            fac=1;
            exp=1;
            for(j=1;j<=T2;j++)
                fac=fac*j;
            for (j=1;j<=fac;j++)
                exp=exp*x;
            if(i%2==0)
            {
                cout << "+(" << T1 << "*" << y << ")/(" << x << "^" << T2 << "!) ";
                num=T1*y;
                den=exp;
                z=num/den;
                ST=ST+z;
            }
            else
            {
               cout << "-(" << x << "^" << T2 << "!)/(" << T1 << "*" << y << ") ";
                num=exp;
                den=T1*y;
                z=-num/den;
                ST=ST+z;
            }
            if (i==(n-1))
            cout << " " << endl;
        }
        cout << "Cuya suma es: " << ST <<endl;
        break;}
    case 5:
        {int x,T,P,i=1,s=0,a,j=1;
        cout << "Introduzca un numero" << endl;
        cin >> x;
        cout << "Introduzca el digito a insertar" << endl;
        cin >> T;
        cout << "Introduzca la posicion" << endl;
        cin >> P;
        while (i<P)
        {
            a=x%10;
            x=x/10;
            i++;
            s=s+a*j;
            j=j*10;
        }
         cout << x << T << s << endl;
        break;}
    case 6:
        {int n,i,j=1,a,b,c,s=0;
        cout << "Introduzca un numero" << endl;
        cin >> n;
        while (n>0)
        {
            a=n%10;
            n=n/10;
            b=n%10;
            n=n/10;
            c=a+b;
            if (c>=10)
            {
                a=c%10;
                b=c/10;
                c=a+b;
            }
            s=s+c*j;//            s=s*10+c;para dar la vuelta al numero ...
            j=j*10;//             eliminar
        }
        cout << s << endl;
          break;
        }
    case 7:
        {int x,y,i,M,m,P=0,E=1,x1;
            cout << "Introduzca dos numeros enteros positivos" << endl;
            cin >> x >> y;
            if (x==y)
            {
                x1=x;
                for (i=1;i<=y;i++)
                {
                    P=P+x1;
                }
                cout << x << "*" << y << "=" << P <<endl;
            }
            else
            {
                M=x;
                if (M<y)
                {
                    M=y;
                    m=x;
                }
                else
                {m=y;
                }
              for (i=1;i<=m;i++)
              {
                  E=E*M;
              }
                cout << M << "^" << m << "=" << E <<endl;
            }
            break;
        }

    default: return 0;
    }
    }
        while (n<8);
    return 0;
}

