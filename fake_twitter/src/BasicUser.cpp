#include "fake_twitter/model/BasicUser.h"

#include <utility>

using namespace fake_twitter::model;


const std::shared_ptr<IUserManager> BasicUser::manager() {
    return nullptr;
}

const bool& BasicUser::is_authorized() {
    return is_authorized_;
}

void BasicUser::is_authorized(bool is_authorized) {
    is_authorized_=is_authorized;
}

const std::string& BasicUser::name() {
    return name_;
}

void BasicUser::name(std::string name) {
    name_=name;
}

const std::string& BasicUser::login() {
    return login_;
}

void BasicUser::login(std::string login) {
    login_=login;
}

const fake_twitter::PasswordHash& BasicUser::passwordHash()() {
    return passwordHash_;
}

void BasicUser::passwordHash(fake_twitter::PasswordHash passwordHash) {
    passwordHash_=passwordHash;
}

const fake_twitter::Avatar& BasicUser::avatar()() {
    return avatar_;
}

void BasicUser::avatar(fake_twitter::Avatar avatar) {
    avatar_=avatar;
}

const fake_twitter::Date& BasicUser::regDate() {
    return regDate_;
}

void BasicUser::regDate(fake_twitter::Date regDate) {
    regDate_=regDate;
}

const size_t& BasicUser::countFollow() {
    return countFollow_;
}

void BasicUser::countFollow(size_t countFollow) {
    countFollow_=countFollow;
}

const size_t& BasicUser::countFollower() {
    return countFollower_;
}

void BasicUser::countFollower(size_t countFollower) {
    countFollower_=countFollower;
}

fake_twitter::PKey BasicUser::id() {
    return id_;
}

BasicUser::BasicUser(fake_twitter::PKey id, bool is_authorized, std::string name, std::string login, fake_twitter::PasswordHash passwordHash,
                     fake_twitter::Avatar avatar, fake_twitter::Date regDate, size_t countFollow, size_t countFollower) {
    id_ = id;
    is_authorized_ = is_authorized;
    name_ = std::move(name);
    login_ = std::move(login);
    passwordHash_ = passwordHash;
    avatar_ = std::move(avatar);
    regDate_ = regDate;
    countFollow_ = countFollow;
    countFollower_ = countFollower;
}
