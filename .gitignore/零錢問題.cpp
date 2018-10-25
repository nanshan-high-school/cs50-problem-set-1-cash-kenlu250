#include <iostream>
using namespace std;

int main() {
  int money, fifty, ten, five, one = 0;

  cout <<"請輸入金額:";
  cin >> money;

  while(money >= 50){
    money = money - 50;
    fifty++;
  }
  cout << "五十元有" << fifty << "個\n";
  
  while(money >= 10){
    money = money - 10;
    ten++;
  }
  cout << "十元有" << ten << "個\n";

  while(money >= 5){
    money = money - 5;
    five++;
  }
  cout << "五元有" << five << "個\n";
  
  while(money >= 1){
    money = money - 1;
    one++;
  }
  cout << "一元有" << one << "個\n";    
}
