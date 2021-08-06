#ifndef USER_H
#define USER_H

#include <QObject>

/**
 * @brief The User class
 */
class User
{
    // Q_OBJECT
public:
    /**
     * @brief ~User virtual destructor
     */
    virtual ~User() {};
    /**
     * @brief getUsername
     * @return username
     */
    virtual std::string getUsername() const = 0;
    /**
     * @brief setUsername
     */
    virtual void setUsername(const std::string) = 0;
    /**
     * @brief getPassword
     * @return password
     */
    virtual std::string getPassword() const = 0;
    /**
     * @brief setUsername
     */
    virtual void setPassword(const std::string) = 0;
    /**
     * @brief getId
     * @return id
     */
    virtual int getId() const = 0;
    /**
     * @brief setId
     */
    virtual void setId(const int) = 0;
};

#endif // USER_H
