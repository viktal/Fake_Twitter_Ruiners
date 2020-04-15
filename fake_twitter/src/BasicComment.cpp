#include "../include/model/BasicComment.h"

#include <utility>

using namespace fake_twitter::model;


const std::shared_ptr<ICommentManager> BasicComment::manager() {
    return nullptr;
}

const fake_twitter::PKey& BasicComment::author() {
    return author_;
}

void BasicComment::author(fake_twitter::PKey key) {
    author_=key;
}

const fake_twitter::PKey* BasicComment::Original() {
    return &Origin_;
}

void BasicComment::Original(fake_twitter::PKey Origin) {
    Origin_=Origin;
}

const std::string& BasicComment::body() {
    return body_;
}

void BasicComment::body(std::string body) {
    body_=body;
}

const fake_twitter::Date& BasicComment::date() {
    return date_;
}

void BasicComment::date(fake_twitter::Date date) {
    date_=date;
}


fake_twitter::PKey BasicComment::id() {
    return id_;
}

BasicComment::BasicComment(fake_twitter::PKey id, fake_twitter::PKey author, std::string body, fake_twitter::Date date,
                     fake_twitter::PKey Original) {
    id_ = id;
    author_ = author;
    body_ = std::move(body);
    date_ = date;
    Origin_ = Original;
}
