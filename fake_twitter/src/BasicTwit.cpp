#include "fake_twitter/model/BasicTwit.h"

#include <utility>

using namespace fake_twitter::model;


const fake_twitter::PKey& BasicTwit::author() {
    return author_;
}

void BasicTwit::author(fake_twitter::PKey key) {
    author_=key;
}

const size_t& BasicTwit::retwitCount() {
    return retwitCount_;
}

void BasicTwit::retwitCount(size_t retwitCount) {
    retwitCount_=retwitCount;
}

const fake_twitter::PKey* BasicTwit::retwitedFrom() {
    return &retwitedFrom_;
}

void BasicTwit::retwitedFrom(fake_twitter::PKey retwitedFrom) {
    retwitedFrom_=retwitedFrom;
}

const std::string& BasicTwit::body() {
    return body_;
}

void BasicTwit::body(std::string body) {
    if (body.length() > max_body_len)
        throw std::invalid_argument(body);
    body_ = body;
}

const fake_twitter::Date& BasicTwit::date() {
    return date_;
}

void BasicTwit::date(fake_twitter::Date date) {
    date_=date;
}


fake_twitter::PKey BasicTwit::id() {
    return id_;
}

BasicTwit::BasicTwit(fake_twitter::PKey id, fake_twitter::PKey author, std::string body, fake_twitter::Date date,
                     fake_twitter::PKey retwitedFrom, size_t retwitCount) {
    id_ = id;
    author_ = author;
    body_ = std::move(body);
    date_ = date;
    retwitedFrom_ = retwitedFrom;
    retwitCount_ = retwitCount;
}
