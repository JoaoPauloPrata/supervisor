/**
 * @file itemimpl.h
 */

#ifndef ITEMIMPL_H
#define ITEMIMPL_H

#include "./lib/item.h"

/**
 * @brief The ItemImpl class
 */
class ItemImpl : public Item
{
private:
  /**
     * @brief id
     */
  std::string id;
  /**
     * @brief name
     */
  std::string name;
  /**
     * @brief price
     */
  float price;

public:
  /**
     * @brief ItemImpl
     */
  ItemImpl();
  /**
     * @brief ItemImpl
     * @param id Unique id
     * @param name Name of the Item
     * @param price Price in R$
     */
  ItemImpl(std::string id = "", std::string name = "", float price = 0.0);
  /**
     * @brief ~Item
     */
  virtual ~ItemImpl();
  /**
     * @brief getId
     * @return id
     */
  std::string getId() const;
  /**
     * @brief setId
     * @param value
     */
  void setId(std::string value);
  /**
     * @brief getName
     * @return name
     */
  std::string getName() const;
  /**
     * @brief setName
     * @param value
     */
  void setName(std::string value);
  /**
     * @brief getPrice
     * @return price
     */
  float getPrice() const;
  /**
     * @brief setPrice
     * @param value
     */
  void setPrice(float value);

private:
  /**
     * @brief ItemImpl
     * @param i
     */
  ItemImpl(const ItemImpl &i);
  /**
     * @brief operator =
     * @param i Item that will be copied
     * @return Reference to copied Item
     */
  ItemImpl &operator=(const ItemImpl &i);
};

#endif // ITEMIMPL_H
