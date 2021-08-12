#include "app.h"
#include "userimpl.h"

App::App() {
    User *user = new UserImpl("us", "pa");
    addUser(user);

    User *rafa = new UserImpl("rafa", "coelho");
    addUser(rafa);
};

int App::login(std::string u, std::string p) {
    if(user_list.size() == 0) return 0;
    for(auto user : user_list) {
        if(u == user->getUsername() && p == user->getPassword()) {
            return 1;
        };
    }
    return 0;
}

void App::addUser(User *u) {
    user_list.push_back(u);
}

void App::addToReceipt(Purchase *p) {
    receipt->add(p);
}
