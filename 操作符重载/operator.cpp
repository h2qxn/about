#include <iostream>
using namespace std;

class wallet 
{
    public:
        wallet(int s, int p, int m);
        wallet(int s, int p);
        wallet();
        ~wallet();
        int get();        // 返回钱包中有多少钱
        int add(int);    // 往钱包中塞钱
        int minus(int);  // 取钱 
        friend wallet operator + (const wallet &x, const wallet &y);
    private:
        int size;     //钱包的外观大小
        int price;    //钱包的价格
        int money;    //钱包中的现金 
        
};
wallet::wallet(int s, int p, int m):size(s),price(p),money(m)
{
}
wallet::wallet(int s, int p):size(s),price(p),money(0)
{
}
wallet::wallet():size(10),price(10),money(0)
{
}
wallet::~wallet()
{
}
int wallet::get()
{
    return money;
}
int wallet::add(int n)
{
    return 0;
}
int wallet::minus(int n)
{
    return 0;
}

wallet operator+(const wallet&x, const wallet &y)
{
    wallet tmp;
    tmp.money = x.money + y.money;
    return tmp;
}

int main()
{
    wallet his(10,100, 20);
    cout<< his.get()<<endl;
    
    wallet yours(10,100, 30);
    cout<< yours.get()<<endl;
    
    wallet mine = his + yours;
    cout<< mine.get()<<endl;
    
    cout << "Hello World";
    return 0;
}
