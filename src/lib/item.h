/**
 * @file item.h
 */

#ifndef ITEM_H
#define ITEM_H

#include <string>

/**
 * @brief The Item class
 */
class Item
{
public:
  /**
   * @brief ~Item
   */
  virtual ~Item(){};

  /**
   * @brief getId
   * @return id
   */
  virtual std::string getId() const = 0;

  /**
   * @brief setId
   * @param value
   */
  virtual void setId(std::string value) = 0;

  /**
   * @brief getName
   * @return name
   */
  virtual std::string getName() const = 0;

  /**
   * @brief setName
   * @param value
   */
  virtual void setName(std::string value) = 0;

  /**
   * @brief getPrice
   * @return price
   */
  virtual float getPrice() const = 0;

  /**
   * @brief setPrice
   * @param value
   */
  virtual void setPrice(float value) = 0;
};

#endif // ITEM_H
