#include "../include/model/Tag.h"

#include <utility>

using namespace fake_twitter::model;

const std::shared_ptr<ITagManager> Tag::manager() {
    return nullptr;
}

Tag::Tag(std::string title) {
    title_ = title;
}

const std::string& Tag::title() {
    return title_;
}

void Tag::title(std::string title) {
    title_ = title;
}
