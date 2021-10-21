#include <iostream>
using namespace std;

class wallet 
{
	public:
		wallet(int s, int p);
	    ~wallet();
		int get();        // 返回钱包中有多少钱
		int add(int);    // 往钱包中塞钱
		int minus(int);  // 取钱 
	private:
		int size;     //钱包的外观大小
		int price;    //钱包的价格
		int money;    //钱包中的现金 
		
};
wallet::wallet(int s, int p):size(s),price(p)
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

int main()
{
	 wallet w(10,100);
	 cout<<w.get()<<endl;
   cout << "Hello World";
   return 0;
}
