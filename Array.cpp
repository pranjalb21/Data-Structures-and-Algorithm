#include <iostream>

using namespace std;

class Arrays
{
public:
    int *pointer = NULL, length;
    Arrays()
    {
        cout << "How many numbers you want to enter?" << endl;
        cin >> length;
        pointer = new int[length];
    }

    void insertValue()
    {
        for (int i = 0; i < length; i++)
        {
            int temp;
            cout << "Enter value no. " << i+1 << " :- ";
            cin >> temp;
            *(pointer + i) = temp;
        }
    }

    void display()
    {
        for (int i = 0; i < length; i++)
        {
            cout << "| " << *(pointer + i) << " |";
        }
    }

    ~Arrays()
    {
        delete []pointer;
    }
};

int  main()
{
    Arrays arr;
    arr.insertValue();
    arr.display();

    return 0;
}
