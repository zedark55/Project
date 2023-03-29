#include <iostream>

using namespace std;

#ifndef ARRAY_SIZE
#define ARRAY_SIZE 1
#endif

class TArray
{
public:
    TArray();
    TArray(int);
    TArray(const TArray&);//конструктор копирования

    int Length(void){return n;} //длина массива
    float GetItem(int);//показывает нужный элемент массива

    ~TArray();
private:
    void ArraySet(float*);
    float *m;//array
    int n;//length
};

TArray::TArray()
{
    n=ARRAY_SIZE;
    ArraySet(NULL);
}

TArray::TArray(int n)
{
    if(n<1)
    {
        cout<<"Error"<<endl;
    }
    TArray::n=n;
    ArraySet(NULL);

}

TArray::TArray(const TArray &original)
{
    TArray::n=original.n;
    ArraySet(original.m);
}

TArray::~TArray()
{
    delete []m;
}

void TArray::ArraySet(float *m)
{
    if(m==NULL)
    {
        TArray::m=new float[n];
        for(int i=0;i<n;i++)
        {
            TArray::m[i]=0;
        }
    }
    else
    {
        TArray::m=new float[n];
        for(int i=0;i<n;i++)
        {
            TArray::m[i]=m[i];
        }
    }
}
float TArray::GetItem(int i)
{
    if((i>=0)&&(i<n)) return m[i];
    else return 0;
}

int main()
{
TArray arr1;
cout<<arr1.GetItem(1)<<endl;
    return 0;
}
