#pragma once

#include <utility>

#include "fake_twitter/common.h"
#include "fake_twitter/model/ITwit.h"


namespace fake_twitter {
namespace model {

class BasicTwit : public ITwit {
public:
    BasicTwit (PKey id, PKey author, std::string body, Date date, PKey retwitedFrom, size_t retwitCount);

    ~BasicTwit() override = default;

    const PKey& author() override;
    void author(PKey) override;

    const size_t& retwitCount() override;
    void retwitCount(size_t) override;

    const PKey* retwitedFrom() override;
    void retwitedFrom(PKey) override;

    const std::string& body() override;
    void body(std::string) override;

    const Date& date() override;
    void date(Date) override;

    PKey id() override;

private:
    PKey id_;
    PKey author_;
    std::string body_;
    size_t retwitCount_;
    PKey retwitedFrom_;
    Date date_;
    static const size_t max_body_len = 280;
};

} // model
} // fake twitter