# 10845

##

배열을 이용해서 queue를 구현했다.
front와 rear을 이용해서 push일때 배열 마지막에 입력된 수를 삽입,
pop일때는 배열의 첫 원소를 가리키는 front 자리수를 하나씩 늘려가며 출력하는 방법을 사용했다.
size는 0이아닌 숫자가 들어있는 요소 개수만 세고,
empty는 queue[rear]에 요소가 없으면 1출력,
Front는 queue[front]로 배열의 첫 원소 출력 (front는 -1부터 시작하기때문에 front++해줌)
back은 queue[rear]가 0이면 원소가 없음을 뜻하니까 -1를 출력, 요소가있으면 그것을 그대로 출력했다.

### 코드

```c++
//  10845
#include <iostream>
#include <string>
using namespace std;
#define SIZE 10001

int queue[SIZE];
int front = -1;
int rear = -1;
int cnt=0;

void push(int num){
    rear++;
    queue[rear] = num;

}
void pop(){

    front++;
    if(rear != -1 && front <= rear &&  rear < SIZE){
    cout << queue[front] << "\n";
    queue[front] = 0;

    }
    else {
        front--;
        cout << "-1" << "\n";
    }
}
void size(){
    for(int i=0;i<SIZE;i++){
        if(queue[i] != 0) cnt++;

    }
    cout<< cnt << "\n";
}
void empty(){
    if(queue[rear] == 0) cout<< "1" << "\n";
    else cout << "0" << "\n";
}
void Front(){
    front++;
    if( queue[front] == 0) cout<< "-1\n";
    else cout<< queue[front] << "\n";
    front--;
}
void back(){
    if(queue[rear] == 0) cout<< "-1\n";
    else cout << queue[rear] << "\n";
}


int main(int argc, const char * argv[]) {

    int test, num;
    string input;

    cin >> test;
    cin.ignore();

    for(int i=0;i<test;i++){
        cnt=0;
        cin >> input;

        if(input == "push"){
            cin >> num;
            push(num);

        }
        else if(input == "pop"){
            pop();
        }
        else if(input == "size"){
            size();
        }
        else if(input == "empty"){
            empty();
        }
        else if(input == "front"){
            Front();
        }
        else if(input == "back"){
            back();
        }

    }

    return 0;
}

```
