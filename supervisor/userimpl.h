#ifndef USERIMPL_H
#define USERIMPL_H

#include "user.h"
#include <QObject>

/**
 * @brief The UserImpl class
 */
class UserImpl : public User
{
    // Q_OBJECT
protected:
    std::string username; /**< User's username */
    std::string password; /**< User's password */
    int id; /**< User's id */
    /**
     * @brief id_counter
     * @return static id
     */
    static int id_counter() {
        static int id_counter = 1;
        return id_counter++;
    }
public:
    /**
     * @brief UserImpl constructor
     */
    UserImpl();
    /**
     * @brief UserImpl constructor
     */
    UserImpl(const std::string, std::string);
    /**
     * @brief ~UserImpl destructor
     */
    virtual ~UserImpl();
    /**
     * @brief getUsername
     * @return username
     */
    std::string getUsername() const;
    /**
     * @brief setUsername
     */
    void setUsername(const std::string);
    /**
     * @brief getPassword
     * @return password
     */
    std::string getPassword() const;
    /**
     * @brief setUsername
     */
    void setPassword(const std::string);
    /**
     * @brief getId
     * @return id
     */
    int getId() const;
    /**
     * @brief setId
     */
    void setId(const int);
private:
    /**
     * @brief UserImpl copy constructor
     */
    UserImpl(const User&);
    /**
     * @brief operator =
     * @param s base user
     * @return reference to copied User
     */
    UserImpl& operator= (const UserImpl&);
};

#endif // USERIMPL_H
