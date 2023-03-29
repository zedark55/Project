#ifndef TCIRCLE_H
#define TCIRCLE_H
#include <cstdlib>
#include <iostream>
#include <math.h>
#include<array>
#include <string.h>
class progressia
{
public:
 void SetX1 (int x1)//начальное значение
 {
     this->x1=x1;
 }
 void SetD (int d)//разность
 {
     this->d = d;
 }
 void SetN(int n)//размер последовательности
 {
     this->n=n;
 }
 int GetP(int p)//получаем нужный элемент из масссива
 {
     for(int i=0;i<=n;i++)
     {
         P[i]= x1;
         x1+=d;
     }
     return P[p-1];
 }

private:
int x1,n,d;
int P[100];
};

class summ
{
public:
    summ()
    {
        n=1;
        summ::mass = new int[n];
        for(int i=0;i<n;i++)
        {
            mass[i]=0;
        }
    }
void SetMass (int mass[],int n)
{
    this->n=n;
for (int i=0;i<=n;i++)
{
    this->mass[i]=mass[i];
}

}
int GetSum(void)
{
    int a =0;
    for(int i=0; i<n;i++)
    {
         a+=mass[i];
    }
    return a;
}
 void BubleSort(int*mass)
{
    while(n--)
    {
        bool swaped = false;
        for(int i=0;i<n;i++)
        {
            if (mass[i]>mass[i+1])
            {
                std::swap(mass[i],mass[i+1]);
                swaped = true;
            }
        }
        if(swaped == false)
        {
            break;
        }
    }
}
private:
int n;
int *mass;
};

class TTest
{
public:
    TTest()
    {
        x=0;
    }
    TTest(int x)
    {
        SetX(x);
    }
    int GetX(void){return x;}
    void SetX(int x){this->x=x;}
private:
   int x;
};

#endif // TCIRCLE_H
