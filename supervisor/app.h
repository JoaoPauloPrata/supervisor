#ifndef APP_H
#define APP_H

#include <list>
#include "userimpl.h"
#include "receiptimpl.h"

/**
 * @brief The App class
 */
class App
{
public:
    /**
     * @brief getInstance
     * @return Same instance of App because of Singleton design pattern.
     */
     static App& getInstance() {
         static App instance;
         return instance;
     }
    /**
     * @brief login
     * @param u username
     * @param p password
     * @return 0 for error and 1 for permission
     */
      int login(std::string u, std::string p) {
          if(user_list.size() == 0) return 0;
          for(auto user : user_list) {
              if(u == user->getUsername() && p == user->getPassword()) {
                  return 1;
              };
          }
          return 0;
      }
     /**
      * @brief addUser
      * @param u User that will be added to the app.
      */
     void addUser(User *u) {
         user_list.push_back(u);
     }
     /**
      * @brief addReceipt
      * @param r
      */
     void addReceipt(Receipt *r) {
         receipt_list.push_back(r);
     }
private:
    /**
     * @brief App
     */
    App() {
        User *user = new UserImpl("us", "pa");
        addUser(user);

        User *rafa = new UserImpl("rafa", "coelho");
        addUser(rafa);
    };
    /**
     * @brief App
     */
    App(App const&);
    /**
     * @brief ~App
     */
    virtual ~App() {};
    /**
     * @brief operator =
     */
    void operator=(App const&);
    /**
     * @brief user_list
     */
    std::list<User*> user_list;
    /**
     * @brief receipt_list
     */
    std::list<Receipt*> receipt_list;
};

#endif // APP_H
