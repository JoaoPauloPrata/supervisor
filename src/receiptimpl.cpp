#include "./receiptimpl.h"

ReceiptImpl::ReceiptImpl(){};

ReceiptImpl::ReceiptImpl(std::string d, double i, double f)
{
  date = d;
  initial_value = i < 0 ? 0 : i;
  final_value = f < 0 ? 0 : f;
};

std::string ReceiptImpl::getDate() const
{
  return date;
};

void ReceiptImpl::setData(std::string d)
{
  date = d;
};

double ReceiptImpl::getInitialValue() const
{
  return initial_value;
};

void ReceiptImpl::setInitialValue(double i)
{
  initial_value = i;
};

double ReceiptImpl::getFinalValue() const
{
  return final_value;
};

void ReceiptImpl::setFinalValue(double f)
{
  final_value = f;
};

void ReceiptImpl::add(Purchase *p)
{
  items_list.push_back(p);
};

void ReceiptImpl::report() {
  for(auto i : items_list) {
    std::cout << i->getItem()->getName() << " - R$"  << i->getItem()->getPrice() << " reais - " << i->getQuantity() 
    << " itens - " << i->getTime() << std::endl;
  }
}

std::map<std::string, std::string> ReceiptImpl::deleteFromReceiptList() {
  std::map<std::string, std::string> m;
  for(auto i : items_list) {
    m.insert({i->getTime(), i->getItem()->getName()});
  }
  return m;
}

void ReceiptImpl::deletePurchase(std::string s) {
  std::cout << s << std::endl;

  std::string delimiter = " ";
  size_t pos = 0;
  std::string token;

  pos = s.find(delimiter);
  token = s.substr(0, pos);
  std::cout << token << std::endl;

  for(auto i : items_list) {
    if(token == i->getTime()) items_list.remove(i);
  }
}