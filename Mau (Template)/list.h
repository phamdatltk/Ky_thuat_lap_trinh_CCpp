template <class T>
class List {
private:
    T *array;
    int size;

public:

    List();
    ~List();
    int length();
    void push_back(T &a);
    void push_front(T &a);
    void add(T &a, int position);
    T pop_back();
    T pop_front();
    T pop_position(int position);
};

template <class T>
List<T>::List(){
    size = 0;
    array = new T[100];
}
template <class T>
List<T>::~List(){
    size = 0;
    delete [] array;
}
template <class T>
int List<T> :: length(){
    return size;
}
template<class T>
void List<T> :: push_back(T &a){
    array[size] = a;
    size++;
}
template<class T>
void List<T> :: push_front(T &a){
    size++;
    for(int i = size; i > 0; i++){
        array[i] = array[i-1];
    }
    array[0] = a;
}
template<class T>
void List<T>  :: add(T &a, int position){
    size++;
    for(int i = size - 1 ; i > position; i++){
        array[i] = array[i-1];
    }
    array[position] = a;
}
template <class T>
T List<T>::pop_back(){
    T a = array[size-1];
    size--;
    return a;
}
template <class T>
T List<T>::pop_front(){
    T a = array[0];
    for(int i = 0; i < size-1; i++){
        array[i] = array[i+1];
    }
    size--;
    return a;
}
template<class T>
T List<T>::pop_position(int position){
    T a = array[position];
    size --;
    for(int i = position ; i < size; i++){
        array[i] = array[i+1];
    }
    return a;
}