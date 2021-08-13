/**
 * @file purchase.h
 */
#ifndef PURCHASE_H
#define PURCHASE_H
/// @cond
#include <string>
/// @endcond
#include "item.h"
/**
 * @brief The Purchase class
 */
class Purchase {
public:
    /**
     * @brief ~Purchase
     */
    virtual ~Purchase(){};
    /**
     * @brief getQuantity
     * @return
     */
    virtual int getQuantity() const = 0;
    /**
     * @brief setQuantity
     * @param q
     */
    virtual void setQuantity(int q) = 0;
    /**
     * @brief getTime
     * @return
     */
    virtual std::string getTime() const = 0;
    /**
     * @brief setTime
     * @param t
     */
    virtual void setTime(std::string t) = 0;
    /**
     * @brief getItem
     * @return
     */
    virtual Item* getItem() const = 0;
    /**
     * @brief setItem
     * @param i
     */
    virtual void setItem(Item*i) = 0;
};

#endif // PURCHASE_H
