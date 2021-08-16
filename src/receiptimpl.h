/**
 * @file receiptimpl.h
 */

#ifndef RECEIPTIMPL_H
#define RECEIPTIMPL_H

#include "./lib/receipt.h"

/**
 * @brief The ReceiptImpl class
 */
class ReceiptImpl : public Receipt
{
private:
  /**
   * @brief date
   * 
   */
  std::string date;

  /**
   * @brief items_list
   */
  std::list<Purchase *> items_list;

  /**
   * @brief initial_value
   */
  double initial_value;

  /**
   * @brief final_value
   */
  double final_value;

public:
  /**
   * @brief ReceiptImpl
   */
  ReceiptImpl();

  /**
   * @brief ReceiptImpl
   * @param d Date
   * @param i Intial value
   * @param f Final value
   */
  ReceiptImpl(std::string d, double i, double f);

  /**
     * @brief ~Receipt
     */
  virtual ~ReceiptImpl(){};

  /**
   * @brief getDate
   * @return The date in format HH::MM
   */
  virtual std::string getDate() const;

  /**
   * @brief setData
   * @param d Date of the receipt
   */
  virtual void setData(std::string d);

  /**
   * @brief getInitialValue
   * @return Initial value of that day
   */
  virtual double getInitialValue() const;

  /**
   * @brief setInitialValue
   * @param i Initial value
   */
  virtual void setInitialValue(double i);

  /**
   * @brief getFinalValue
   * @return Final value of that day
   */
  virtual double getFinalValue() const;

  /**
   * @brief setFinalValue
   * @param f Final value
   */
  virtual void setFinalValue(double f);

  /**
   * @brief add
   * @param s
   */
  virtual void add(Purchase *p);
};

#endif // RECEIPTIMPL_H
