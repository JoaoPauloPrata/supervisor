#ifndef RECEIPT_H
#define RECEIPT_H

#include <string>
#include <list>

class SoldItem;

/**
 * @brief The Receipt class
 */
class Receipt
{
public:
    /**
     * @brief ~Receipt
     */
    virtual ~Receipt() {};
    /**
     * @brief getDate
     * @return
     */
    virtual std::string getDate() const = 0;
    /**
     * @brief setData
     * @param d
     */
    virtual void setData(const std::string d) = 0;
    /**
     * @brief getInitialValue
     * @return
     */
    virtual double getInitialValue() const = 0;
    /**
     * @brief setInitialValue
     * @param i
     */
    virtual void setInitialValue(const double i) = 0;
    /**
     * @brief getFinalValue
     * @return
     */
    virtual double getFinalValue() const = 0;
    /**
     * @brief setFinalValue
     * @param f
     */
    virtual void setFinalValue(const double f) = 0;
    /**
     * @brief add
     * @param s
     */
    virtual void add(SoldItem *s) = 0;
};

#endif // RECEIPT_H
