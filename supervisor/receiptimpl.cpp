#include "receiptimpl.h"

ReceiptImpl::ReceiptImpl()
{

}

ReceiptImpl::ReceiptImpl(std::string d, double i, double f) {
    date = d;
    initial_value = i < 0 ? 0 : i;
    final_value = f < 0 ? 0 : f;
}

std::string ReceiptImpl::getDate() const {
    return date;
}

void ReceiptImpl::setData(const std::string d) {
    date = d;
}

double ReceiptImpl::getInitialValue() const {
    return initial_value;
}

void ReceiptImpl::setInitialValue(const double i) {
    initial_value = i;
}

double ReceiptImpl::getFinalValue() const {
    return final_value;
}

void ReceiptImpl::setFinalValue(const double f) {
    final_value = f;
}

void ReceiptImpl::add(SoldItem *s) {
    items_list.push_back(s);
}
