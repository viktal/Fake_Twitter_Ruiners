#include "gmock/gmock.h"

#include "fake_twitter/db/IDBEngine.h"
#include "fake_twitter/db/Field.h"
#include "fake_twitter/manager/IUserManager.h"
#include "fake_twitter/manager/ITwitManager.h"

using namespace fake_twitter;

class MockBDEngine: public db::IDBEngine {
public:
    MOCK_METHOD(void, select, (const std::string&, std::function<void(std::map<std::string, db::Field>)>), (override));
    MOCK_METHOD(void, update, (const std::string&), (override));
    MOCK_METHOD(void, insert, (const std::string&), (override));
    MOCK_METHOD(void, del,    (const std::string&), (override));
};
