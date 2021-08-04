#ifndef ITEM_H
#define ITEM_H

#include <QWidget>

/**
 * @brief The Item class
 */
class Item
{
    Q_OBJECT
public:
    /**
     * @brief ~Item
     */
    virtual ~Item() {};
    /**
     * @brief getName
     * @return name of the item
     */
    virtual std::string getName() = 0;
    /**
     * @brief setName
     */
    virtual void setName(std::string) = 0;
};

#endif // ITEM_H
