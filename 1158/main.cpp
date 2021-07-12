//  1158
#include <iostream>
#include <queue>
using namespace std;

int main(int argc, const char *argv[])
{
    int n,k;
    queue<int> q;
    
    cin >> n >> k ; // 7 3
    
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    cout<< "<";

    while(!q.empty()){
        for(int i=1;i<9999;i++){
            if(q.empty()) break;
      
            if( i%k == 0 ) {
                cout << q.front();
                if(q.size() != 1)cout << ", ";
                q.pop();
            }
            else {
                
                q.push( q.front() );
                q.pop();
            }
        }
        
    }
    cout<< ">";
    return 0;
}
