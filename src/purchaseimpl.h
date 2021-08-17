/**
 * @file purchaseimpl.h
 */

#ifndef PURCHASEIMPL_H
#define PURCHASEIMPL_H

#include "./lib/purchase.h"

/**
 * @brief The PurchaseImpl class
 */
class PurchaseImpl : public Purchase
{
private:
  /**
   * @brief quantity
   */
  int quantity;

  /**
   * @brief time
   */
  std::string time;

  /**
   * @brief item
   */
  Item *item;

public:
  PurchaseImpl();
  /**
   * @brief PurchaseImpl
   * @param item
   * @param quantity
   * @param time
   */
  PurchaseImpl(Item *item, int quantity, std::string time);

  /**
   * @brief ~Purchase
   */
  virtual ~PurchaseImpl(){};

  /**
   * @brief getQuantity
   * @return
   */
  int getQuantity() const;

  /**
   * @brief setQuantity
   * @param q
   */
  void setQuantity(int q);

  /**
   * @brief getTime
   * @return
   */
  std::string getTime() const;

  /**
   * @brief setTime
   * @param t
   */
  void setTime(std::string t);

  /**
   * @brief getItem
   * @return
   */
  virtual Item *getItem() const;

  /**
   * @brief setItem
   * @param i
   */
  virtual void setItem(Item *i);
};

#endif // PURCHASEIMPL_H
