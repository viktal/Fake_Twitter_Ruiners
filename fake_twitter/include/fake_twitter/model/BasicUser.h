#pragma once

#include <utility>

#include "fake_twitter/common.h"
#include "fake_twitter/model/IUser.h"


namespace fake_twitter {
namespace model {

class BasicUser : public IUser {
public:
    BasicUser (PKey id, bool is_authorized, std::string name, std::string login, PasswordHash passwordHash, Avatar avatar, Date regDate, size_t countFollow, size_t countFollower);

    ~BasicUser() override = default;

    const std::shared_ptr<IUserManager> manager() override;

    const bool& is_authorized() override;
    void is_authorized(bool) override;

    const std::string& name() override;
    void name(std::string) override;

    const std::string& login() override;
    void login(std::string) override;

    const PasswordHash& passwordHash() override;
    void passwordHash(PasswordHash) override;

    const Avatar& avatar() override;
    void avatar(Avatar) override;

    const Date& regDate() override;
    void regDate(Date) override;

    const size_t& countFollow() override;
    void countFollow(size_t) override;

    const size_t& countFollower() override;
    void countFollower(size_t) override;

    PKey id() override;

private:
    PKey id_;
    bool is_authorized_;
    std::string name_;
    std::string login_;
    PasswordHash passwordHash_;
    Avatar avatar_;
    Date regDate_;
    size_t countFollow_;
    size_t countFollower_;
};

} // model
} // fake twitter
