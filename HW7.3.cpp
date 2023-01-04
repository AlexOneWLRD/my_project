#include <iostream> 
using namespace std;
 
bool is_Square(int n)
{    
    for (int i = 1; i*i <= n; i++)
        if (i*i==n) return true;
    return false;
}
 
void is_Square(int n, bool&k)
{    
    for (int i = 1; i*i <= n; i++)
        if (i*i==n) {k=true;return;}
    k=false;
}
 
void is_Square(int n, bool*k)
{    
    for (int i = 1; i*i <= n; i++)
        if (i*i==n) {*k=true;return;}
    *k=false;
}
 
int main()
{
    bool k;
    int num1, num2, num3, count=0;
    cout << "Enter 3 natural numbers:\n";
    cin >> num1 >> num2 >> num3;
    
    if(is_Square(num1)) count++;
    if(is_Square(num2)) count++;
    if(is_Square(num3)) count++;
    
    cout << "result1=" << count << "\n";
    
    count=0;
    is_Square(num1,k); if(k) count++;
    is_Square(num2,k); if(k) count++;
    is_Square(num3,k); if(k) count++;
    
    cout << "result2=" << count << "\n";
    
    count=0;
    is_Square(num1,&k); if(k) count++;
    is_Square(num2,&k); if(k) count++;
    is_Square(num3,&k); if(k) count++;
    
    cout << "result3=" << count << "\n";        
        
system("pause");
return 0;
}