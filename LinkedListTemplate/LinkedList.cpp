#include <bits/stdc++.h> 
using namespace std; 

template<class T>
class Node
{
    T data;

  public:

    Node(Node *, T);
    ~Node();
    T getData();

    Node *link;
};

template<class T>
Node<T>::Node(Node *nodeLink, T info)
{
    cout << " Node Constructor \n";
    if(nodeLink){
        nodeLink->link = this;
    }
    this->link = NULL;
    data = info;
}

template<class T>
Node<T>::~Node()
{
    cout << " Node Destructor \n";
}

template<class T>
T Node<T>::getData()
{
    return data;
}

template<class T>
class ListImp
{
   public:
    Node<T> *MyNode;

    ListImp();
    ~ListImp();

    void AddNode(T data, bool first=false);
    void RemoveNode(T data);
    void PrintNode();

};

template<class T>
ListImp<T>::ListImp()
{
    cout << "Inside constructor::ListImp" << "\n";
    MyNode = NULL;
}

template<class T>
ListImp<T>::~ListImp()
{
}

template<class T>
void ListImp<T>::AddNode(T data, bool first)
{
    if(first){
        MyNode = new Node<T>(NULL, data);
    }
    else
    {
        Node<T> *temp = MyNode;
        while(temp->link)
        {
            temp = temp->link;
        }

        //add new node right of temp
        Node<T> *NewNode = new Node<T>(temp, data);
    }

}

template<class T>
void ListImp<T>::RemoveNode(T data)
{
    Node<T> *temp = MyNode;
    Node<T> *prev = NULL;
    while(temp)
    {
        //Node to be removed!
        if(temp->getData() == data){
            //Node to be removed in between
            if(prev){
                prev->link = temp->link;
            }
            //Node to be removed is first node
            else{
                MyNode = temp->link;
            }

            //Remove temp and come out
            delete temp;
            break;
        }
        prev = temp;
        temp = temp ->link;
    }
}

template<class T>
void ListImp<T>::PrintNode()
{
    Node<T> *temp = MyNode;
    while(temp)
    {
        cout<< "Element is " << temp->getData() << "\n";
        temp = temp->link;
    }
}

int main()
{
    ListImp<int> integerList;
    ListImp<std::string> stringList;

    integerList.AddNode(761, true);
    integerList.AddNode(366);
    integerList.AddNode(910);

    integerList.PrintNode();
    integerList.RemoveNode(9102);
    integerList.PrintNode();

    stringList.AddNode("Example1", true);
    stringList.AddNode("Example2");
    stringList.PrintNode();
}
