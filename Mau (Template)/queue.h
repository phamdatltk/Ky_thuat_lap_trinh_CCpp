template <class T >
class Queue{
private:
    int size;
    int maxsize;
    T *begin;
public:
    Queue(unsigned int msize = 10);
    ~Queue(){ delete [] begin; }
    bool IsEmpty(){
        return size == 0;
    }
    bool IsFull(){
        return size == maxsize;
    }
    void EnQueue(T &a);
    T DeQueue();
    T Front();
};

template <class T>
Queue <T>::Queue(unsigned int msize){
    maxsize = msize;
    size = 0;
    begin = msize>0 ? (new T[msize]) : 0;
}

template < class T >
void Queue < T > :: EnQueue(T &a){
    if(!IsFull()){
        begin[size] = a;
        size++;
    }
}
 
template <class T>
T Queue <T> :: DeQueue(){
    T a = begin[0];

    for(int i = 0; i < size-1 ; i++){
        begin[i] = begin[i+1];
    }
    size--;

    return a;
}

template <class T>
T Queue <T> :: Front(){
    if(!IsEmpty()){
        return begin[0];
    }
}
