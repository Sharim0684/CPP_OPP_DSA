#include <iostream>
using namespace std;
class DynamicArray
{
    int *array;
    int size;
    int capacity;

public:

    int getsize()
    {
        return size;
    }
    int getcapacity()
    {
        return capacity;
    }
    DynamicArray()
    {
        array = new int[1];
        size = 0;
        capacity = 1;
    }
    ~DynamicArray()
    {
        delete[] array;
        size = 0;
        capacity = 0;
    }
    void insertbyleft(int index , int value)
    {
        if(size == capacity)
        {
            resize();
        }
        if(index>=capacity || index > 0)
        {
            cout<<"memory not exist "<<endl;
        }
        for(int i=size;i>=index;i--)
        {
            array[i]= array[i-1];
        }
        array[index]=value;
        size++; 
    }
    void insert(int index, int value)
    {
        if (size == capacity)
        {
            resize();
        }
        if (index >= capacity || index>0)
        {
            cout << "memory not exit" << endl;
        }
        array[index] = value;
        size++;
    }
    void resize()
    {
        int *temp = new int [2*capacity];

        for(int i=0; i<size;i++) 
        {
            temp[i]=array[i];
        }
        delete []array;
        array = temp;
        capacity = 2*capacity;
    }
    void printarray()
    {
        for(int i=0;i<size;i++)
        {
            cout<<array[i]<<" ";
        }
        cout<<endl;
        cout<<"size  = "<< size<< ", capacity = "<< capacity<< endl ;
    }
    void deletevalue(int index )
    {
        if(index>=size)

        {
             cout<<"index does not exit: "<<endl;
             return ;
        }
        for(int i=index;i<size-1;i++)
         {
            array[i]=array[i+1];
         }
         size--;
    }
    void shriktofit()
    {
        int *temp = new int[size];
        for (int i = 0; i < size ; i++)
        {
            temp[i]=array[i];
        }
        delete []array;
        array = temp;
        capacity = size;
    }
};
int main()
{
   DynamicArray a;
   a.insert(0,10);
   a.printarray();

   a.insert(1,20);
   a.printarray();

   a.insert(2,30);
   a.printarray();
   
   a.insert(3,40);
   a.printarray();

   a.insert(4,50);
   a.printarray();

   a.insertbyleft(2,100);
   a.printarray();

   a.deletevalue(3);
   a.printarray();

   a.shriktofit();
   a.printarray();
   return 0;
}