//  10845
#include <iostream>
#include <string>
using namespace std;
#define SIZE 10001

int queue[SIZE];
int front = -1;
int rear = -1;
int cnt = 0;

void push(int num)
{
    rear++;
    queue[rear] = num;
}
void pop()
{

    front++;
    if (rear != -1 && front <= rear && rear < SIZE)
    {
        cout << queue[front] << "\n";
        queue[front] = 0;
    }
    else
    {
        front--;
        cout << "-1"
             << "\n";
    }
}
void size()
{
    for (int i = 0; i < SIZE; i++)
    {
        if (queue[i] != 0)
            cnt++;
    }
    cout << cnt << "\n";
}
void empty()
{
    if (queue[rear] == 0)
        cout << "1"
             << "\n";
    else
        cout << "0"
             << "\n";
}
void Front()
{
    front++;
    if (queue[front] == 0)
        cout << "-1\n";
    else
        cout << queue[front] << "\n";
    front--;
}
void back()
{
    if (queue[rear] == 0)
        cout << "-1\n";
    else
        cout << queue[rear] << "\n";
}

int main(int argc, const char *argv[])
{

    int test, num;
    string input;

    cin >> test;
    cin.ignore();

    for (int i = 0; i < test; i++)
    {
        cnt = 0;
        cin >> input;

        if (input == "push")
        {
            cin >> num;
            push(num);
        }
        else if (input == "pop")
        {
            pop();
        }
        else if (input == "size")
        {
            size();
        }
        else if (input == "empty")
        {
            empty();
        }
        else if (input == "front")
        {
            Front();
        }
        else if (input == "back")
        {
            back();
        }
    }

    return 0;
}
