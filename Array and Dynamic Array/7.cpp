// Create a function in a dynamic array to return the size of the  array


#include<iostream>
using namespace std;
class cap{
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
    cap()

    {
        array = new int[1];
        size=0;
        capacity=1;
    }
    ~cap()

    {
        delete []array;
        size=0;
        capacity=0;
    }
    void insert(int index , int value)
    {
        if(size == capacity )
        {
            resize();
        }
        if(index>=capacity){
            cout<<"Memory not exit";

        }
      array[index]=value;
      size++;

    }
    void resize()
    {
        int *temp = new int [2*capacity];
        for (int i = 0; i < size ; i++)
        {
            temp[i] = array[i];
        }
        delete [] array;
        array = temp;
        capacity = 2*capacity;
    }
    void printarray()
    {
        for (int i = 0; i < size ; i++)
        {
            cout<<array[i]<<" ";
        }
        cout<<"size= "<<size<<", capacity= "<<capacity;
    }
    };
int main()
{
    cap c;
    c.insert(0,10);
    c.printarray();

    c.getsize();

    return 0;
}