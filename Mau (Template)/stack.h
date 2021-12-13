template <class T>
class Stack
{
private:
    /* data */
    int size;
    int maxsize;
    T* top;

public:
    Stack(unsigned int msize = 10);
    ~Stack(){
        delete [] top;
    }
    int push(const T&);
    T pop();
    int isEmpty() const {
        return size == 0;
    }
    int isFull() const {
        return size == maxsize;
    }
    
};
template <class T>
Stack <T>::Stack(unsigned int msize){   
    size = 0;
    maxsize = msize;
    top = msize>0?(new T[msize]):0;
}

template <class T>
int Stack <T> :: push(const T& item){
    if(!isFull()){
        top[size] = item;
        size ++;
        return 1;
    }
    return 0;
} 

template <class T>
T Stack <T>:: pop(){
    if(!isEmpty()){
        size--;
        return top[size];
    }
}
