#include <iostream>

// **************************************************************
// Metodo constructor por default
template <typename T> OrderedList<T>::OrderedList(){}
// Metodo constructor por default
template <typename T>
OrderedList<T>::OrderedList(const OrderedList<T>& l1, const OrderedList<T>& l2)
{
    l1.list.transfer(l2.list);
    l1.list.sort(orderAscent);
}
// **************************************************************
// Metodo destructor
template <typename T>
OrderedList<T>::~OrderedList()
{
    clear();
}
// **************************************************************
// Metodo constructor de copias
template <typename T>
OrderedList<T>::OrderedList(const OrderedList<T> & list)
{
    *this = list;
}
// **************************************************************
// Metodo operador de asignación
template <typename T>
OrderedList<T> & OrderedList<T>::operator=(const OrderedList<T> &l){
    this->list = l->list;
}
// **************************************************************
// Metodo insertar elemento en su respectiva posición
template <typename T> void OrderedList<T>::add(T value) {
    int i = 0;
    if (!list.isEmpty())
        for (i = 0; i < list.size() && value > list[i]; ++i);
    list.insertIndicatedIndex(value, i);
}
// **************************************************************
// Metodo para eliminar elemento repetido en la lista
template <typename T>
void OrderedList<T>::pop()
{
    if (!list.isEmpty())
        for (int i = 0; i < list.size(); ++i) {
            for (int j = i + 1; j < list.size(); ++j) {
                if (list[i] == list[j]) {
                    list.deleteIndicatedIndex(j);
                    return;
                }
            }
        }
}
// **************************************************************
// Metodo para verificar si existe un elemento en la lista
template <typename T>
bool OrderedList<T>::searchValue(T value) const
{
    return list.searchValue(value);
}
// **************************************************************
// Metodo para verificar si la lista esta vacia
template <typename T>
bool OrderedList<T>::isEmpty() const
{
    return list.size() == 0;
}
// **************************************************************
// Metodo para obtener el tamaño de la lista
template <typename T>
int OrderedList<T>::size() const
{
    return list.size();
}
// **************************************************************
// Metodo para vaciar la lista
template <typename T>
void OrderedList<T>::clear()
{
    list.clear();
}
// **************************************************************
// Metodo para imprimir la lista de primero a ultimo
template <typename T>
void OrderedList<T>::printForward() const {
    list.printForward();
}
// **************************************************************
// Metodo para mezclar dos listas
template <typename T>
OrderedList<T> OrderedList<T>::merge(const OrderedList<T> &l) {
    OrderedList<T> r;
    
    return r;
}
// **************************************************************
// Metodo para imprimir la lista de ultimo a primero
template <typename T>
void OrderedList<T>::printBackwards() const
{
    list.printBackwards();
}
/*******************************************************************/
// Metodo operador []
template <typename T>
T& OrderedList<T>::operator[](int i)
{
    return list[i];
}
/*******************************************************************/
// Metodo operador [] constante
template <typename T>
const T& OrderedList<T>::operator[](int i) const
{
    return list[i];
}

/*******************************************************************/
// Metodo que reggresa una excepcion de tipo "Empty list"
template <typename T>
const char *OrderedList<T>::ListEmpty::what() const throw() {
    return "Empty list";
}

/*********************************************************************/
// Metodo que reggresa una excepcion de tipo "Out of range"
template <typename T>
const char *OrderedList<T>::OutRange::what() const throw() {
    return "Out of range";
}
