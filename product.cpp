#include <iostream>
using namespace std;

int main() { 
  int unit;
  int total;
  string member;
  int amount;
  int discount;

  
  cout << "Enter product quantity" << endl;
  cin >> unit;
  cout << "If you are a member, press y. If not, press n." << endl;
  cin >> member;
  cout << "Number of products purchased :" << unit << "item" << endl;
 
  cout << "Member status :" << member << endl;

  total = unit * 500;
  cout << "Sum price :" << total << endl;

  if(member == "y"){
    if(total <= 500){
      amount = total * (100 - 10) / 100;
    }else if(total >= 500 && total < 1000){
      amount = total * (100 - 15) / 100;
    }else if (total >= 1000){
      amount = total * (100 - 20) / 100;
    }else{
      return total;
    }
  }else if(member == "n"){
    if(total <= 500){
      amount = total * (100 - 5) / 100;
    }else if(total >= 500 && total < 1000){
      amount = total * (100 - 10) / 100;
    }else if (total >= 1000){
      amount = total * (100 - 15) / 100;
    }else{
      return total;
    }
  }else{
    return -1;
  }

  discount  = total - amount;
  cout << "price : " << total << endl;
  cout << "discount :" << discount << endl;
  cout << "Total amount to be paid :"<< amount << endl;
  
  
}