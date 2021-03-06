/////////////////////
//Implement vector class
//Nathan Mumford
//CS172
//April 18, 2016
///////////////////////

#include <iostream>
using namespace std;

template<typename T>
class Vector
{
public:
    //Function prototypes
    Vector(); //constructs empty vector
    Vector(int vecsize);//overloaded constructor
    Vector(int size, T element); //constucts a vector with the initial size, filled with specified values
    unsigned const int size();//returns the number of elements
    void push_back(T element); //appends element
    void pop_back();//removes the last element
    bool empty();//checks if vector is empty
    T at(int index);//returns element at specified index
    void clear();//removes all elements from vector
    void swap(Vector v2);//swaps contents of vector with other vector
    
private:
    T elements[50];//initialize vector
    int vecsize;
};

template<typename T>
Vector<T>::Vector()
{
    vecsize = 0;
}

template<typename T>
Vector<T>::Vector(int size)
{
    size = vecsize;
}

template<typename T>
Vector<T>::Vector(int size, T element)
{
    size = vecsize;
    elements[vecsize] = element;
}

template<typename T>
bool Vector<T>::empty()
{
    return (vecsize == 0);//see if the size is 0
}

template<typename T>
T Vector<T>::at(int index)
{
    return elements[index];//return element at specific index
}

template<typename T>
void Vector<T>::push_back(T element)
{
    elements[vecsize] = element;//add size to the vector
    vecsize++;
}

template<typename T>
void Vector<T>::pop_back()
{
    return elements[vecsize];//removes element
    vecsize--;
}


template<typename T>
unsigned const int Vector<T>::size()//size of elements at the specified index in this vector
{
    return vecsize;
}


template<typename T>
void Vector<T>::clear()
{
    vecsize = 0;//clear vector by making size 0
}

template<typename T>
void Vector<T>::swap(Vector v2)
{
    T temp[50];//create temporary vector
    int tempSize = v2.size();//create temorary size
    for (int i = 0; i < v2.size(); i++)//for loop to set temp equal to vector 2
        temp[i] = v2.at(i);
    
        for (int i = 0; i < size(); i++)
        v2.push_back(i);
    
    for(int i = 0; i < tempSize; i++)
        v2.push_back(i);
    

}

int main()
{
    Vector<int> v1;//create a vector class object
    v1.push_back(1);
    v1.push_back(2);
    
    Vector<int> v2;//create a second vector class object
    v2.push_back(2);
    v2.push_back(5);
    v2.push_back(8);

    
    v1.swap(v2);
    
    for (int i = 0; i < v1.size(); i++)//loop to cout the elements at each location
        cout << v1.at(i) << " " << endl;
}

