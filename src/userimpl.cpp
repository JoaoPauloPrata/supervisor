#include "./userimpl.h"

UserImpl::UserImpl()
{
    username = "username";
    password = "password";
    int i = id_counter();
    id = i;
};

UserImpl::UserImpl(const std::string u, const std::string p)
{
    username = u;
    password = p;
    int i = id_counter();
    id = i;
};

UserImpl::~UserImpl(){};

std::string UserImpl::getUsername() const
{
    return username;
};

void UserImpl::setUsername(const std::string u)
{
    username = u;
};

std::string UserImpl::getPassword() const
{
    return password;
};

void UserImpl::setPassword(const std::string p)
{
    password = p;
};

int UserImpl::getId() const
{
    return id;
};

void UserImpl::setId(const int i)
{
    id = i;
};
